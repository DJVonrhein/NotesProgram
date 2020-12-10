#ifndef __NOTE_HPP__
#define __NOTE_HPP__

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include "DisplayStrat.hpp"
#include "EditCommand.hpp"
//#include "DisplayNoWordCount.hpp"
//#include "DisplayWordCount.hpp"
#include "NotebookEntry.hpp"
#include "Notebook.hpp"
using namespace std;

class DisplayStrat;
//class DisplayNoWordCount;
//class DisplayWordCount;
class EditCommand;

class Note : public NotebookEntry {
        public:
        //string get_title();
       /* Note(string name) {
                this->title = name;
                this->strat = nullptr;
        }
	*/Note(string); 
          /*      this->title = name;

		if(b){
		    this->strat = new DisplayWordCount();
		}
		else{
		    this->strat = new DisplayNoWordCount();
		}*/
        
        virtual void edit(string);
        virtual void revert(string);
        virtual void display(string);

        private:
        DisplayStrat* strat;
        EditCommand* comm;
};

#endif
