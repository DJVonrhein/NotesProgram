#include "../header/DisplayNoWordCount.hpp"

DisplayNoWordCount::DisplayNoWordCount(){
}

void DisplayNoWordCount::display(NotebookEntry* n){
	    ifstream fin;
            fin.unsetf(ios_base::skipws);
            char x;
            string file_ref = "Notefiles/" + n->get_title() + ".txt";
            fin.open(file_ref.c_str());

            while(fin >> x){
                cout << x;
            }
        
}

