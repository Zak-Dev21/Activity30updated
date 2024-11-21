#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>

using namespace std;

class TextBox {
private:
    string value;  // Private attribute to store text

public:
    // Default constructor initializes value to an empty string
    TextBox() : value("") {}

    // Explicit constructor that initializes value with a given string
    explicit TextBox(const string& startValue) : value(startValue) {}

    // Getter for value
    string getValue() const;

    // Setter for value
    void setValue(const string& newValue);

    // Display the current value
    void displayText() const;
};

#endif
