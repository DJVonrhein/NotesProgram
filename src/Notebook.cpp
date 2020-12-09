#include <iostream>
#include "../header/Notebook.hpp"

using namespace std;

void Notebook::addNote(Note* newNote) {
        v.push_back(newNote);
}

void Notebook::removeNote(Note* newNote) {
        for (unsigned i = 0; i < v.size(); ++i) {
                if (v.at(i)->get_title() == newNote->get_title()) {
                        v.erase(find(a.begin(), a.end(), a.at(i)));
                }
        }
}
        
Note* Notebook::find(string name) {
        for (unsigned int i = 0; i < v.size(); ++i) {
                 if (v.at(i)->get_title() == name) {
                        return v.at(i);
                }
       }
         return nullptr;
}
