#include "../header/DisplayWordCount.hpp"

DisplayWordCount::DisplayWordCount(){

}

void DisplayWordCount::display(NotebookEntry* n){
	    ifstream fin;
            fin.unsetf(ios_base::skipws);
            char x;
            int char_count = 0;
            int word_count = 0;
            string file_ref = "src/Notefiles/" + n->get_title() + ".txt";
            fin.open(file_ref.c_str());

            while(fin >> x){
                cout << x;
                if(x > 32 &&  x < 127)
                    char_count++;

                else if( x == 32  )
                    word_count++;
            }

            word_count++;
            cout << "\nWord Count: " << word_count << "\n";
            cout << "\nCharacter Count: " << char_count << "\n";
            fin.close();

}


