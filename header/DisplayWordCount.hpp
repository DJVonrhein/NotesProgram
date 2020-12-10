#ifndef __DISPLAY_WORD_COUNT_HPP__
#define __DISPLAY_WORD_COUNT_HPP__
#include "DisplayStrat.hpp"
#include "NotebookEntry.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Note.hpp"
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

class NotebookEntry;
class DisplayStrat;

class DisplayWordCount : public DisplayStrat {
    public:
        DisplayWordCount();
        virtual void display(NotebookEntry* );/*{
            ifstream fin;
            char x;
            string file_ref = "../text_files/" + title + ".txt";
            fin.open(file_ref.c_str());
            while(fin >> x)
                cout << x;

            fin.close();
        }
*/
};

#endif
