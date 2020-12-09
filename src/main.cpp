#include "../header/Notebook.hpp"
#include "../header/Note.hpp"
#include "../header/EditCommand.hpp"

#include <cstdlib>
#include <iostream>
using namespace std;



class Notebook;
string notebook_choice_menu();
void print_menu(string);

int main(){
    cout << "Welcome to TermiNotes v1.0!\n";
    
    string NotebookName = notebook_choice_menu();
    Notebook* myNotebook = new Notebook(NotebookName);

    print_menu(NotebookName);


	
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
        cout << "1. Create New Notebook" << endl;
        cout << "2. Create New Note" << endl;
        cout << "3. Display Note" << endl;
        cout << "4. Edit Note" << endl;
	return;
}
