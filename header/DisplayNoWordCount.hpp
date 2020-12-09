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
            fin.open(c_str("../text_files/" + title + ".txt"));
            while(fin >> x)
                cout << x;

            fin.close();
        }
};

#endif
