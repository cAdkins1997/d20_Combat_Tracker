# d20-Combat-Tracker

This is a combat tracker and character sheet handeler built for d20 pen and paper RPG game. While the early implementation is built around Pathfinder 2E, I plan to expand this to also be ale to handle other d20 systems. Currently this is restricted to be a terminal application, but I plan to add a GUI to it once I have added a few other features.

Currently character creation itself is handled by a number of helper functions that are called by a function called creationDriver() in the main method. The character sheet is an object that gets instantiated when creationDrive() gets called, the plan is to have multiple of these objects and to save their state to files so that multiple character sheet files can be saved and reused by the user.

At the current moment classes are just structs that contains a variety of generic information about each class, that will be referenced to help populate the character sheet once the user has selected a class. Heritages are represented using objects, but I may reduce them back down to being structs, as at the moment their isn't a direct need for the sophistaction of objects in regards to how the Heritage objects are actually being used.
