#include "../header/Notebook.hpp"
#include "../header/Note.hpp"
#include "../header/EditCommand.hpp"
#include "../header/DisplayStrat.hpp"
#include "../header/DisplayNoWordCount.hpp"
#include "../header/DisplayWordCount.hpp"
#include <string>
#include <cstring>
#include <cstdlib>
#include <ostream>
#include <fstream>
#include <iostream>
using namespace std;

class DisplayWordCount;
class DisplayNoWordCount;

string notebook_choice_menu();
void print_menu(string);
void temp_display_word_count(string);
void temp_unedit_function(string);
void temp_edit_function(string);

int main(){
    cout << "Welcome to TermiNotes v1.0!\n";
    
    string NotebookName = notebook_choice_menu();
    Notebook* myNotebook = new Notebook(NotebookName);
    int menu_choice = 0;

    while(menu_choice != 5){					//MENU LOOP   --    ends when user presses 5 for quit
    	print_menu(NotebookName);

	cin >> menu_choice;
 
	if( menu_choice == 1){ //New note option
	    cout << "\nEnter the name of the Note\n";
	    
	    string note_name;
	    cin.ignore();
            getline(cin, note_name);
		
            if(myNotebook->find(note_name)){
                cout << "\nA Note with that name already exists!\n";
	    }	    

	    else{
	   	cout << "\nDo you want your note to display word count? (y for yes, n for no)\n";

		bool disp_word_count;
		char x;
		cin >> x;
		if(x == 'y' || x == 'n'){
		    if(x == 'y')
		    	disp_word_count = true;
		    else
			disp_word_count = false;
		    Note* myNote = new Note(note_name);
		
		    if(disp_word_count)
		    	myNote->set_display(new DisplayWordCount());
		    else
		    	myNote->set_display(new DisplayNoWordCount());
		
			myNotebook->addNote(myNote);
			   

	 	    	string file_ref = "cd src/Notefiles && vim " + note_name + ".txt";
		    	int status = system(file_ref.c_str());
		}

		else{
		    cout << "\nNeither yes or no were chosen!\n";
		}   
	    }
	}

	else if( menu_choice == 2){ // display option
	    
	    cout << "\nWhat Note do you want to display?\n";
	    
	    string note_name;
	    cin.ignore();
	    getline(cin, note_name);

	    if(myNotebook->find(note_name))
		myNotebook->find(note_name)->display();

	    else
		cout << "\nThe Note doesn't exist!\n";

	}

	else if(menu_choice == 3){ //edit option
	    cout << "\nWhat Note do you want to edit?\n";

	    string note_name;
            cin.ignore();
	    getline(cin, note_name);

            if(myNotebook->find(note_name))
                myNotebook->find(note_name)->edit();

            else
                cout << "\nThe Note doesn't exist!\n";    
	}

	else if(menu_choice == 4){ //revert option
            cout << "\nWhat Note do you want to revert changes on?\n";

            string note_name;
            cin.ignore();
	    getline(cin, note_name);

            if(myNotebook->find(note_name))
                 myNotebook->find(note_name)->revert();

            else
                cout << "\nThe Note doesn't exist!\n";
        }

	else if(menu_choice == 5){ //quit option
	    return 0;
	}

    	else
	    cout << "\nGive an option between 1 and 5!\n"; 
    }
    return 0;
      
}





string notebook_choice_menu(){ //User inputs the name to their notebook
    string user_choice;
    string notebook_title;
    int invalid_inputs = 0;

    while(1){
	invalid_inputs = 0;
        cout << "\nTo name your notebook, type \"new <title>\"!\n";
	cout << "Avoid using spaces or symbols in your title. \n\n";

 //   cout << "If you would like to display or edit an existing note, type \"display\" or \"edit\"!\n";
        getline(cin, user_choice); 
        if(user_choice.substr(0,4) == "new "){
	    for(unsigned i = 4; i < user_choice.size()-1; ++i){
	        if(!(isalpha(user_choice.at(i)) || isdigit(user_choice.at(i))))
		    ++invalid_inputs;
	    }
	    if(invalid_inputs == 0){
		notebook_title = user_choice.substr(4, user_choice.size()-4);
		return notebook_title;
	    }
	    else
		cout << "invalid title!\n";	
    	}
	else{
	    cout << "Invalid input!\n";
	}
    }
}



void print_menu(string notebook_title) { //Displays the options that are available for the notebook
	cout << "\nWelcome to the " << notebook_title << " Notebook!\n"; 
        cout << "Choose an option:" << endl;
        cout << "1. Create a New Note" << endl;
        cout << "2. Display a Note" << endl;
        cout << "3. Edit a Note" << endl;
	cout << "4. Revert Last Change on a Note" << endl;
	cout << "5. Quit" << endl;
	return;
}

