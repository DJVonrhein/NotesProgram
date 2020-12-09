#include <iostream>
#include "Note.hpp"

using namespace std;

void Note::edit() {
	string newPhrase;
	cout << "Please enter a new phrase to be saved! " << endl;
	getline(cin, newPhrase);
}

void Note::revert() {
}

void Note::display() {
	cout << title << endl;
	cout << time_edited << endl;
	cout << string << endl;
}
