#include "../header/DisplayNoWordCount.hpp"



void DisplayNoWordCount::display(string title){
            ifstream fin;
            char x;
            string file_ref = "../text_files/" + title + ".txt";
            fin.open(file_ref.c_str());
            while(fin >> x)
                cout << x;

            fin.close();
        }

