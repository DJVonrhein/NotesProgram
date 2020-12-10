#include <iostream>
#include "../header/Note.hpp"
#include "../header/DisplayStrat.hpp"
#include "../header/TextEditCommand.hpp"
//#include "../header/DisplayWordCount.hpp"
//#include "../header/DisplayNoWordCount.hpp"

using namespace std;



Note::Note(string name) {
    this->title = name;
    this->comm = new TextEditCommand();
}

void Note::edit() {
	comm->edit(this);
}

void Note::revert() {
        comm->unedit(this);
}

void Note::display() {
        strat->display(this);
}

void Note::set_display(DisplayStrat* disp) {
	this->strat = disp;
}
/*string Note::get_title() {
        return this->title;
}
*/
