# CS100 Final Project: Terminal-Based Notebook 
 > Authors: \<[Mihir Jain](https://github.com/MihirJ23)\> \<[David Pilling](https://github.com/dkp-98)\> \<[Daniel Vornhein](https://github.com/DJVonrhein)\>

## Project Description
 > * Why is it important or interesting to you?
 >   * We believe this project will be simple enough to get us familiar with the GitHub workflow and the three chosen design patterns, but also be complex enough that will cause us to become more experienced software engineers in the           process.
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * C++
 >   * [Google Test](https://github.com/google/googletest) - Google Test is a testing framework designed to support any tests written in C++
 > * What will be the input/output of your project?
 >   * The user will choose whether to create a new note or to edit a previously created one. Creating a note will prompt the user for a title, after which they will be able to edit the contents of the note. The output of the program wil       be a file containing the filenames of all notes created so far, as well as a file for each note, which will contain the notes taken.
 > * What are the three design patterns you will be using. For each design pattern you must:
 >   * Explain in 3 - 5 sentences why you picked this pattern and what feature you will implement with it
       * The first design pattern we are thinking of using is the command design pattern. Our app gives the ability for the user to create as many Note objects as they want to store events and info. These objects have properties such as length, date, and time that can be organized using data structures. Thus, it would be logical to use this design pattern as we can call function that utilize these properties to display information for the user in the terminal.
       * Another design pattern that we would like to use is the absract factory design pattern. As our program is meant to be mainly controlled from the terminal, we don't have a major need to create a unique interface for every class in the program, as our Note object is the only major class. This simplifies development and allows us to focus on the actual program and all the features that it can potentially contain.
       * Finally, our third design pattern option would be the composite design pattern. We plan to execute our program by allowing the user to create Note objects which contains information inputted by the user and using member functions to access the objects at any given time. These objects are then stored in a data structure that is accessible by the user, making composite design pattern a logical and executable design apattern.
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
