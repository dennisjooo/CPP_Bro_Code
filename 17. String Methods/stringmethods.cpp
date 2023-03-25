#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length() checks the length of the string
    if(name.length() > 12){
        std::cout << "Your name is too long" << std::endl;
    }
    else{
        std::cout << "Your name is " << name << std::endl;
    }

    // .empty() checks if the string is empty
    if(name.empty()){
        std::cout << "You did not enter a name" << std::endl;
    }
    else{
        std::cout << "Your name is " << name << std::endl;
    }
    
    // .append() adds a string to the end of the string
    name.append(" is a good name");
    std::cout << "Your name is " << name << std::endl;

    // .at() returns the character at the specified index
    std::cout << name.at(1) << std::endl;

    // .substr() returns a substring from the specified index
    std::cout << "Your name is " << name.substr(0, 5) << std::endl;

    // .insert() inserts a string at the specified index
    name.insert(0, "@");
    std::cout << "Your name is " << name << std::endl;

    // .find() returns the index of the first occurence of the specified string
    std::cout << name.find("is") << std::endl;

    // .erase() removes a substring from the specified index
    name.erase(0, 1);
    std::cout << "Your name is " << name << std::endl;
    
    // .replace() replaces a substring with another string
    name.replace(0, 5, "Your");
    std::cout << "Your name is " << name << std::endl;
    
    // .clear() clears the string
    name.clear();
    std::cout << "Your name is " << name << std::endl;

    return 0;
}