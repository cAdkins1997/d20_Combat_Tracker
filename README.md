# d20-Combat-Tracker

This is a combat tracker and character sheet handler built for a pen and paper roleplaying game. While the early implementation is built around Pathfinder Second Edition, I plan to expand this to also be ale to handle other similar games. Currently, this is restricted to be a terminal application, but I plan to add a GUI to it once I have added a few other features.

Character creation is handled by a number of helper functions that are called by a function called creationDriver() in the main method. The character sheet is an object that is instantiated when creationDriver() is called. The plan is to have multiple of these objects and to save their state to files so that multiple character sheet files can be saved and reused by the user.

Character classes (that is in regard to those that exist in roleplaying games, not classes in terms of OOP) are just structs that contains a variety of generic information about each class and will be referenced to help populate the character sheet once the user has selected a class. Heritages are represented using objects, but I may reduce them back down to being structs, as at the moment their isn't a direct need for the sophistication of objects in regards to how the Heritage objects are actually being used.
