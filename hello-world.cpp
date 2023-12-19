#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    cout << num << endl;

    
    return 0;
};