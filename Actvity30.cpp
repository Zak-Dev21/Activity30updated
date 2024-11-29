#include "Header.h"
#include <iostream>

using namespace std;



string TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}

void TextBox::displayText() const {
    cout << "This is the value: " << getValue() << endl;
}
