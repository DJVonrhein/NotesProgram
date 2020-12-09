#include "../header/DisplayWordCount.hpp"


void DisplayWordCount::display(string title){
            ifstream fin;
            char x;
            int char_count = 0;
            int word_count = 0;
            string file_ref = "../text_files/" + title + ".txt";
            fin.open(file_ref.c_str());

            while(fin >> x){
                cout << x;
                char_count++;

                if( x == ' ')
                    word_count++;
            }
            cout << "\nWord Count: " << word_count << "\n";
            cout << "\nCharacter Count: " << char_count << "\n";
            fin.close();
        }

