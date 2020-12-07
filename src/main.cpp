#include "Notebook.hpp"
#include "Note.hpp"
#include "TextEditCommand.hpp"

#include <cstdlib>
#include <iostream>
using namespace std;


void print_menu();
bool valid_choice1();
bool valid_choice2();
void parse_choice();


int main(){

    cout << "Welcome to TermiNotes v1.0!\n";

    print_menu();

    getline(cin, 

}





void print_menu(){

    cout << "If you would like to create a new note, type \"new <title>\"!\n";
    cout << "If you would like to display or edit an existing note, type \"display\" or \"edit\"!\n";


}

bool parse_choice(){


}
