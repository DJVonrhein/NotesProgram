# CS100 Final Project: Terminal-Based Notebook 
  Authors: \<[Mihir Jain](https://github.com/MihirJ23)\> \<[David Pilling](https://github.com/dkp-98)\> \<[Daniel Vonrhein](https://github.com/DJVonrhein)\>

## Project Description
  * Why is it important or interesting to you?
    * We believe this project will be simple enough to get us familiar with the GitHub workflow and the three chosen design patterns, but also be complex enough that will cause us to become more experienced software engineers in the           process.
  * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
    * C++, CMake
    * [Google Test](https://github.com/google/googletest) - Google Test is a testing framework designed to support any tests written in C++
  * What will be the input/output of your project?
    * The user will be asked whether they want to create a new note, to display/edit/revert changes on an existing note, or quit the program. New note prompts the user for a title, after which they will be placed in the vim text editor for a file called "<title>.txt". Edit also makes use of the vim text editor. The display option is what lets the user output their Notes.
  * What are the three design patterns you will be using?
    * The first design pattern we implemented was the command design pattern. We want to use the command design pattern for editing the text of a Note since it allows us to store the previous state of the Note. The TextEditCommand class's edit function places the old contents of a note's text file into another one before the user makes their changes to the original. This is important in case the user makes a mistake and wants to revert to the previous edit.
    * Another design pattern that we use is the strategy pattern. We implemented different strategies for displaying a note - one that displays the character count and word count when displaying a note, and one that doesn't.
    * Our third design pattern option would be the composite design pattern. We are going to contain our Notes (leaf) in the data of a Notebook(composite), which stores a vector of Note pointers. The user will create a Notebook with a title and an optional description, and then begin to add Note objects to this notebook.
## Class Diagram
 ![OMT class diagram](/OMT.png)
 
 * NotebookEntry is the abstract class and parent of Notes and Notebooks(which are a collection of Notes). Notebooks are thus composite objects.
 * Notes are going to have multiple display strategies. One display strategy shows the user a note's character count and word count, while the other will display no additional information.
 * Lastly we chose the command pattern for the Note’s edit() function because it allows the user to undo the last edit(). We may even add this functionality for changing the title.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ![quit input](/screenshot1.png)
 * The image above shows how to quit the program. The user interacts with the menu by typing a choice from 1-5; if it is 5 or above it will quit the program, and any other character will not do anything. The program also shows how our program will return an error if the user fails to provide a valid name for the notebook (new <name>).
 * The image above shows various aspects of the program running. For example, we have an option where you make a new Note object within the Notebook and vim edit the txt file that is generated. From there you can select an option displayed in the menu that counts the number of words and characters in the txt file, much like what you use in Google Docs. 
 * The menu displaying every time, along with the up-to-down text display, ensures a simple user interface and that the app stays true to its purpose.
 ## Installation/Usage
 * To download and prepare this program, run the following commands on your local machine's command line:
   * git clone --recursive https://github.com/cs100/final-project-mjain010-dvonr001-dpill001
   * cmake3 .
   * make
 * Now, you may run the program and take any notes you wish. To run the program, make sure you are in the directory that was cloned, and not in src/ or header/. To start the program, run the following command in the command line:
   *./main
 ## Testing
 * We have a variety of unit tests that test various member functions used in our program. We made sure to test all the possible inputs that the user can enter to ensure functionality. Possible inputs include invalid notebook and note names, empty notes, notes with a single character, notes with multiple characters/words on a single line, and notes with multiple lines that contain characters/words. We did not use continuous integration (CI) in this project.
