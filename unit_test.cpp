#include <ostream>
#include <fstream>
#include <iostream>
using namespace std;

TEST(NoteTestSet, get_title_test) {
        Note* newNote = new Note("HarryPotter");
        EXPECT_EQ(newNote->get_title(), "HarryPotter");
}

TEST(NoteTestSet, get_title_test) {
        Note* newNote = new Note("   ");
        EXPECT_EQ(newNote->get_title(), "   ");
}

TEST(NoteTestSet, display_test) {
        Note* newNote = new Note("HarryPotter");
        int counter = newNote->display();
        EXPECT_EQ(newNote->display(), counter);
}

TEST(NoteTestSet, set_display_test) {
        Note* newDisplay = new DisplayStrat();
        this->strat = newDisplay;
        EXPECT_EQ(newDisplay->set_display(newDisplay), strat);
}

TEST(NoteTestSet, find_test) {
        Note* newNote = new Note("HarryPotter");
        EXPECT_EQ(newNote->find(), "HarryPotter");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
