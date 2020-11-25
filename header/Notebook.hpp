#ifndef __NOTEBOOK_HPP__
#define __NOTEBOOK_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <list>

class Notebook {
	public:
	Notebook(string title) {}
	void addNote(NotebookEntry* );
	void removeNote(NotebookEntry* );

	private:
	vector<NotebookEntry*> v;
};


#endif
