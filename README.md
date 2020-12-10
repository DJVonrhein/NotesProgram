# CS100 Final Project: Terminal-Based Notebook 
  Authors: \<[Mihir Jain](https://github.com/MihirJ23)\> \<[David Pilling](https://github.com/dkp-98)\> \<[Daniel Vonrhein](https://github.com/DJVonrhein)\>

## Project Description
  * Why is it important or interesting to you?
    * We believe this project will be simple enough to get us familiar with the GitHub workflow and the three chosen design patterns, but also be complex enough that will cause us to become more experienced software engineers in the           process.
  * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
    * C++, CMake
    * [Google Test](https://github.com/google/googletest) - Google Test is a testing framework designed to support any tests written in C++
  * What will be the input/output of your project?
    * The user will choose whether to create a new note or to edit a previously created one. Creating a note will prompt the user for a title, after which they will be able to edit the contents of the note. The output of the program wil be a file containing the filenames of all notes created so far, as well as a file for each note, which will contain the notes taken.
  * What are the three design patterns you will be using?
    * The first design pattern we are thinking of using is the command design pattern. We want to use the command design pattern for editing the text of a Note since it allows us to store the previous state of the Note. This is important in case the user makes a mistake and wants to revert to the previous edit.
    * Another design pattern that we would like to use is the strategy design pattern. We are going to use this to display a Note's word count, or display no counts depending on the user's choice.
    * Our third design pattern option would be the composite design pattern. We are going to contain our Notes (leaf) in the data of a Notebook(composite), which stores a vector of Note pointers. The user will create a Notebook with a title and an optional description, and then begin to add Note objects to this notebook.
## Class Diagram
 ![OMT class diagram](/OMT.png)
 
 * NotebookEntry is the abstract class and parent of Notes and Notebooks(which are a collection of Notes). Notebooks are thus composite objects.
 * Notes are going to have multiple display strategies. One display strategy will allow the user to see how many words are in a Note, while the other will display no additional information.
 * Lastly we chose the command pattern for the Note’s edit() function because it allows the user to undo the last edit(). We may even add this functionality for changing the title.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ![quit input](/screenshot1.png)
 > The image above shows how to quit the program. The menu options only extend from 1-4; if it is 4 or above it will quit the program. The program also shows how our program will return an error if the user fails to provide a valid name for the notebook (new <name>).
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
