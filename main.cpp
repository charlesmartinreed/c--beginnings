#include <iostream>

// this will prevent me having to add the namespace onto each individual method or variable...
using namespace std;

int main() {
//    we can use variables to hold reusable values to make our programs less static and easier to maintain. Variables are a type of container.

// when we define a variable in C++, we start to specifying its type, then its name and then, optionally, its initial value

// don't forget your ; to end the statement!
std::string characterName = "Ash";

int characterAge;
characterAge = 11;

// now lets use our variables in our printed story
// notice that we use << to insert the value into the output string
    std::cout << "There once was a man named " << characterName << std::endl;
    std::cout << "He was " << characterAge << " years old" << std::endl;

//    we can also update our variable, halfway through the story
characterName = "Richie";

    std::cout << "He liked the name " << characterName << std::endl;
    std::cout << "But did not like being " << characterAge << std::endl;

    return 0;
}
