#include <iostream>


double calculateTotal(double prices[], int size);

int main(){
    double prices[] = {4.66, 3.45, 76.99, 234.45, 20};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = calculateTotal(prices, size);
    std::cout << total;
};

double calculateTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i <= size; i++){
        total += prices[i];
    }
    return total;
}