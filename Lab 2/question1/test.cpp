#include <iostream>
#include <cstring>

using namespace std;

// Takes in a char* and copies it into another allocated space of input size and returns the pointer
char* duplicate(const char* input) {
    // Gets the length of input
    int length = strlen(input);

    // Allocates space for the copied input using the length of the input
    char* copy_input = new char[length + 1];

    // Copies the characters from input to copy_input
    strcpy(copy_input, input);

    return copy_input;
}

int main() {
    const char* original = "This is a sentence.";
    char* copy = duplicate(original);
    char* copy2 = duplicate(copy);
    cout << "Original sentence: " << original << endl;
    cout << "Copied sentence: " << copy << endl;
    cout << "Copied sentence address: " << static_cast<void*>(&copy) << endl;
    cout << "Copied the copied sentence: " << copy2 << endl;
    cout << "Copied the copied sentence address: " << static_cast<void*>(&copy2) << endl;

    delete[] copy;
    delete[] copy2;
    return 0;
}
