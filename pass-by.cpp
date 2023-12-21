#include <iostream>


void swap(std::string &x, std::string &y); // Giving the Memory Address with '&'

int main(){
    std::string x = "Name";
    std::string y = "hey";

    swap(x, y);

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
};

void swap(std::string &x, std::string &y){ 
    std::string temp;
    temp = x;
    x = y;
    y = temp;

}
