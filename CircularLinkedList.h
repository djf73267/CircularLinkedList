#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

#include "ItemType.h"


struct ListNode {
    
    ItemType item;    // node's data
    ListNode * next;  // node's ptr to next node
    explicit ListNode(ItemType &item) : item(item) {};
    
};

class CircularLinkedList {
    
public:
    CircularLinkedList();
    ~CircularLinkedList();
    void insertItem(ItemType &newItem);
    void deleteItem(ItemType &delItem);
    int  getLength() const;
    void print();
    void findItem(ItemType &item);
    
private:
    int length;
    ListNode * head;
    ListNode * current;
    ListNode * predLoc;
    bool found;
    bool moreToSearch;
    
};

#endif
