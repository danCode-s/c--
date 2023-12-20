#include <iostream>

int main(){
    std::string students[] = {"John", "parker", "dale"};
    for (std::string student: students){
        std::cout << student << '\n';
    };
};