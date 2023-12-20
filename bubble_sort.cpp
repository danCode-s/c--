#include <iostream>


void sort(int array[], int size);
int main(){
    int numbers[] = {23, 1, 4, 5, 2, 53, 10, 9, 3};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for(int element : numbers){
        std::cout << element << ' ';
    }

};

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        // std::cout << "[" << array[i] << "]";
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

        }
    }
}