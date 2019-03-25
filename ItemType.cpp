#include "ItemType.h"

using namespace std;

// Post: item is created with value set to @number
ItemType::ItemType(int number) {
    
    value = number;
    
}

// Pre:  item has been initialized
// Post: value instance variable is prinetd to std-out
void ItemType::print() {
    
    cout << value;
    
}

// Pre:  item has been initialized
// Post: return the value instance variable
int ItemType::getValue() const {
    
    return value;
    
}

// Pre:  @item is initialized
// Post: returns enum indicating whether caller is LESS,
//       GREATER, or EQUAL to item
Comparison ItemType::compareTo(ItemType &item) {
    
    if(value < item.value)
        return LESS;
    else if(value > item.value)
        return GREATER;
    else
        return EQUAL;
    
}
