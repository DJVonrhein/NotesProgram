#ifndef __NOTEBOOK_ENTRY_HPP__
#define __NOTEBOOK_ENTRY_HPP__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NotebookEntry {
	protected:
	string title;

	public:
	string get_title(){ return title; }
	virtual void edit(string) = 0;
	virtual void revert(string) = 0;
	virtual void display(string) = 0; 
};

#endif
