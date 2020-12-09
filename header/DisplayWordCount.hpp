#ifndef __DISPLAY_WORD_COUNT_HPP__
#define __DISPLAY_WORD_COUNT_HPP__

#include "DisplayStrat.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Note.hpp"
#include <ifstream>
#include <cstdlib>
using namespace std;

class DisplayWordCount : class DisplayStrat {
    public:
	virtual void display(string title){
	    ifstream fin;
	    char x;
	    int char_count = 0;
	    int word_count = 0;
	    fin.open(c_str("../text_files/" + title + ".txt"));
	    
	    while(fin >> x){
		cout << x;
		char_count++;
		
		if( x == " ")
		    word_count++;    
	    }
	    cout << "\nWord Count: " << word_count << "\n";
	    cout << "\nCharacter Count: " << char_count << "\n";
	    fin.close(); 
	}
};

#endif
