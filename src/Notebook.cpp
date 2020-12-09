#include <iostream>
#include "../header/Notebook.hpp"

using namespace std;

void Notebook::addNote(NotebookEntry* newNote) {
        v.push_back(newNote);
}
/*
void Notebook::removeNote(string title) {
        for (unsigned i = 0; i < v.size(); ++i) {
                if (v.at(i)->get_title() == title) {
                       // v.erase(find(a.begin(), a.end(), a.at(i)))
                       v.at(i).erase();
                }
        }
}
*/
       
NotebookEntry* Notebook::find(string name) {
        for (unsigned int i = 0; i < v.size(); ++i) {
                 if (v.at(i)->get_title() == name) {
                        return v.at(i);
                }
       }
         return nullptr;
}
