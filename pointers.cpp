#include <iostream>

int main(){

    std::string name = "Danish";

    std::string *pName = &name; // Pointer: A variable used to store memory address of another variable.

    int *pointer = nullptr; // NULL pointer;

    int x = 2;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Not Assigned!";
    }else {
        std::cout << *pointer << "\n";
        std::cout << "Assigned!";
    }
    return 0;
}