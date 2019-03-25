
#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>

enum Comparison {
    LESS,
    GREATER,
    EQUAL
};

class ItemType {
    
public:
    explicit ItemType(int number);
    void print();
    int getValue() const;
    Comparison compareTo(ItemType &item);
    
private:
    int value;
    
};

#endif
