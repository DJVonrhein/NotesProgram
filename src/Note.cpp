#include <iostream>
#include "../header/Note.hpp"
#include "../header/DisplayStrat.hpp"
#include "../header/EditCommand.hpp"
#include "../header/DisplayWordCount.hpp"
#include "../header/DisplayNoWordCount.hpp"

using namespace std;


Note::Note(string name, bool b) {
    this->title = name;

    if(b){
        this->strat = new DisplayWordCount();
    }
    else{
        this->strat = new DisplayNoWordCount();
    }
}

void Note::edit(string title) {
	comm->edit(title);
}

void Note::revert(string title) {
        comm->unedit(title);
}

void Note::display(string title) {
        strat->display(title);
}

//string Note::return_title() {
//        return this->title;
//}
