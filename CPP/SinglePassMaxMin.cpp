#include <iostream>

template <typename T>
void Print (T arr[], int size){
    std::cout << "[";

    for(int i = 0; i < size; i++){
        if(i != size-1){
            std::cout << arr[i] << ", ";
        }
        else{
            std::cout << arr[i] << "]";
        }
    }

    std::cout << std::endl;
}

template <typename T>
void SinglePassMaxMin(T arr[], int size){
    T min = arr[0];
    T max = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
    }

    std::cout << "min = " << min << ", max = " << max << std::endl;
}

int main(){
    int *init = new int[10]{5,8,3,9,6,2,10,7,-1,4};
    Print(init,10);
    SinglePassMaxMin(init,10);
}
