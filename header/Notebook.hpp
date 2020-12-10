#ifndef __NOTEBOOK_HPP__
#define __NOTEBOOK_HPP__

#include <iostream>
#include <string>
#include <vector>
#include "NotebookEntry.hpp"
#include "Note.hpp"

using namespace std;
class NotebookEntry;
class Note;
class Notebook : public NotebookEntry{
	public:
	Notebook(string title) {this->title = title;};
	void addNote(NotebookEntry* newNote);
	NotebookEntry* find(string title);

	virtual void edit(){ return; };
	virtual void revert(){ return; };
	virtual void display(){ return; };

	private:
	vector<NotebookEntry*> v;
};


#endif
