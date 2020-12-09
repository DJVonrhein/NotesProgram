#include <iostream>
#include "Notebook.hpp"

using namespace std;

void Notebook::addNote(Note* newNote) {
	v.push_back(newNote);
	//cout << "A new note has been added!" << endl;
}

void Notebook::removeNote(Note* newNote) {
	for (unsigned i = 0; i < v.size(); ++i) {
		if (v.at(i)->title == newNote->title) {
			v.erase(find(a.begin(), a.end(), a.at(i)));
		}
	}
	//cout << newNote->title << "has been deleted" << endl;
}


