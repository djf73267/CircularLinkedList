Darren Funes
03/22/2019
djf73267@uga.edu

File List
-----------------
CircularLinkedList.cpp
CircularLinkedList.h
ItemType.cpp
ItemType.h
MakeFile
Main.cpp

Program Functions
--------------------
A)CircularLinkedList
CircularLinkedList 
constructor that sets the length and the beginning pointer to null

~CircularLinkedList 
Destructor that will traverse through the list deleting each node

void insertItem(&newitem)
list is created and either follows conditions based on where the item is inserted and if the item is inserted a list that is empty or not


void deleteItem(ItemType &delItem)
Also follows conditions in certain special cases


Int getLength()
Returns length

Void print
Prints the pointers as it traverses the list until it hits the head again that's why it must be a do while loop

findItem(&item)
Allows insert and delete to retain more simplicity when referencing this function. Will compare the item of each node as it traverses the list.

B) ItemType

ItemType
sets value to parameter given

print()
Prints value

getValue()
Returns value

Comparison compareTo

Compares value to the value of an item and establishing whether GREATER EQUAL or LESS
With enumerations

Usage
-------------------

Use MakeFile main
Use MakeFile run 
to run use ./main

