#include "../header/Notebook.hpp"
#include "../header/Note.hpp"
#include "../header/EditCommand.hpp"

#include <cstdlib>
#include <iostream>
using namespace std;

string notebook_choice_menu();
void print_menu(string);

int main(){
    cout << "Welcome to TermiNotes v1.0!\n";
    
    string NotebookName = notebook_choice_menu();
    Notebook* myNotebook = new Notebook(NotebookName);
    int menu_choice = 0;

    while(menu_choice != 5){
    	print_menu(NotebookName);

	cin >> menu_choice;
 
	if( menu_choice == 1){
	    cout << "\nEnter the name of the Note\n";
	    
	    	    
	}

	else if( menu_choice == 2){
	    cout << "\nWhat Note do you want to display?\n";
	    
	    string note_name;
	    getline(cin, note_name);

	    if(myNotebook->find(note_name))
		myNotebook->find(note_name)->display(note_name);

	    else
		cout << "\nThe Note doesn't exist!\n";

	}

	else if(menu_choice == 3){
	    cout << "\nWhat Note do you want to edit?\n";

	    string note_name;
            getline(cin, note_name);

            if(myNotebook->find(note_name))
                myNotebook->find(note_name)->edit(note_name);

            else
                cout << "\nThe Note doesn't exist!\n";    
	}

	else if(menu_choice == 4){
            cout << "\nWhat Note do you want to revert changes on?\n";

            string note_name;
            getline(cin, note_name);

            if(myNotebook->find(note_name))
                myNotebook->find(note_name)->revert(note_name);

            else
                cout << "\nThe Note doesn't exist!\n";
        }

	else if(menu_choice == 5){
	    return 0;
	}
    
    }
    return 0;
      
}





string notebook_choice_menu(){ //User inputs the name to their notebook
    string user_choice;
    string notebook_title;
    int invalid_inputs = 0;

    while(1){
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

/*
int note_choice_menu(){
    
    cout << "If you would like to create a new note, type \"new <title>\"!\n";
    cout << "If you would like to display or edit an existing note, type \"display\" or \"edit\"!\n";

}
*/


void print_menu(string notebook_title) { //Displays the options that are available for the notebook
	cout << "\nWelcome to the " << notebook_title << " Notebook!\n"; 
        cout << "Choose an option:" << endl;
        cout << "1. Create New Note" << endl;
        cout << "2. Display Note" << endl;
        cout << "3. Edit Note" << endl;
	cout << "4. Quit" << endl;
	return;
}
