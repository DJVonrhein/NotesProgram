#include "../header/Notebook.hpp"
#include "../header/Note.hpp"
#include "../header/EditCommand.hpp"
#include "../header/DisplayStrat.hpp"
#include "../header/DisplayNoWordCount.hpp"
#include "../header/NotebookEntry.hpp"
#include "../header/DisplayWordCount.hpp"
#include <string>
#include <cstring>
#include <cstdlib>
#include <ostream>
#include <fstream>
#include <iostream>
#include <vector>

#include "gtest/gtest.h"

using namespace std;

TEST(NotebookTest, TitleTest) {
    Notebook* test = new Notebook("test");
    EXPECT_EQ(test->get_title(), "test");
}

TEST(NotebookTest, ZeroSizeTest) {
    Notebook* test = new Notebook("test");
    EXPECT_EQ(test->get_size(), 0);
}

TEST(NotebookTest, NonZeroSizeTest) {
    Notebook* test_book = new Notebook("testbook");
    Note* test_note = new Note("testnote");
    test_book->addNote(test_note);
    ASSERT_EQ(test_book->get_size(), 1);
    EXPECT_EQ(test_book->get_size(), 1);
}

TEST(NoteTest, TitleTest) {
    Note* test_note = new Note("testnote");
    EXPECT_EQ(test_note->get_title(), "testnote");
}

TEST(NoteTest, NoCountDisplayTest) {
    Notebook* test_book = new Notebook("testbook");
    Note* test_note = new Note("test");
    test_book->addNote(test_note);
    ASSERT_EQ(test_book->get_size(), 1);
    DisplayNoWordCount* count = new DisplayNoWordCount();
    test_note->set_display(count);
    testing::internal::CaptureStdout();
    test_note->display();
    string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(test_book->get_size(), 1);
    EXPECT_EQ(out, "This is a test\nThis is also a test\nhello world\n");
}

TEST(NoteTest, CountDisplayTest) {
    Notebook* test_book = new Notebook("testbook");
    Note* test_note = new Note("test");
    test_book->addNote(test_note);
    ASSERT_EQ(test_book->get_size(), 1);
    DisplayWordCount* count = new DisplayWordCount();
    test_note->set_display(count);
    testing::internal::CaptureStdout();
    test_note->display();
    string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(test_book->get_size(), 1);
    EXPECT_EQ(out, "This is a test\nThis is also a test\nhello world\n\nWord Count: 9\n\nCharacter Count: 36\n");
}

TEST(NoteTest, NoCountEmptyDisplayTest) {
    Notebook* test_book = new Notebook("testbook");
    Note* test_note = new Note("bluebook");
    test_book->addNote(test_note);
    ASSERT_EQ(test_book->get_size(), 1);
    DisplayNoWordCount* count = new DisplayNoWordCount();
    test_note->set_display(count);
    testing::internal::CaptureStdout();
    test_note->display();
    string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(test_book->get_size(), 1);
    EXPECT_EQ(out, "\n");
}

TEST(NoteTest, CountEmptyDisplayTest) {
    Notebook* test_book = new Notebook("testbook");
    Note* test_note = new Note("bluebook");
    test_book->addNote(test_note);
    ASSERT_EQ(test_book->get_size(), 1);
    DisplayWordCount* count = new DisplayWordCount();
    test_note->set_display(count);
    testing::internal::CaptureStdout();
    test_note->display();
    string out = testing::internal::GetCapturedStdout();
    EXPECT_EQ(test_book->get_size(), 1);
    EXPECT_EQ(out, "\n\nWord Count: 1\n\nCharacter Count: 0\n");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
