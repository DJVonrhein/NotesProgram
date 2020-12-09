#include <iostream>
#include "../header/Note.hpp"

using namespace std;

void Note::edit() {
        string newPhrase;
        cout << "Please enter a new phrase to be saved! " << endl;
        getline(cin, newPhrase);
        this->title = newPhrase;
}

void Note::revert() {
        comm->unedit();
}

void Note::display() {
        cout << this->title << endl;
}

string Note::return_title() {
        return this->title;
}
