#include "../header/Notebook.hpp"
#include "../header/Note.hpp"
#include "../header/EditCommand.hpp"

#include <cstdlib>
#include <iostream>
using namespace std;



class Notebook;
string notebook_choice_menu();


int main(){

    cout << "Welcome to TermiNotes v1.0!\n";
    string NotebookName = notebook_choice_menu();
//    NotebookName Notebook* = 
    cout << NotebookName << endl;
	
    return 0;
      
}





string notebook_choice_menu(){
    string user_choice;
    string user_title;
    int invalid_inputs = 0;

    while(1){
        cout << "To name your notebook, type \"new <title>\"!\n";
 //   cout << "If you would like to display or edit an existing note, type \"display\" or \"edit\"!\n";
        getline(cin, user_choice); 
        if(user_choice.substr(0,4) == "new "){
	    for(unsigned i = 4; i < user_choice.size()-1; ++i){
	        if(!(isalpha(user_choice.at(i)) || isdigit(user_choice.at(i))))
		    ++invalid_inputs;
	    }
	    if(invalid_inputs == 0){
		user_title = user_choice.substr(4, user_choice.size()-4);
		return user_title;
	    }
	    else
		cout << "invalid title!\n";	
    	}
	else{
	    cout << "Invalid input!\n";
	}
    }
}


int note_choice_menu(){
    
    cout << "If you would like to create a new note, type \"new <title>\"!\n";
    cout << "If you would like to display or edit an existing note, type \"display\" or \"edit\"!\n";

}

bool parse_choice(){


}
