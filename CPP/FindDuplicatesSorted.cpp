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
void FindDuplicatesSorted(T arr[], int size){
    T lastdup = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == arr[i+1] && arr[i] != lastdup){
            std::cout << arr[i] << std::endl;
            lastdup = arr[i];
        }
    }
}

int main(){
    int *init = new int[10]{3,6,8,8,10,12,15,15,15,20};
    Print(init,10);
    FindDuplicatesSorted(init,10);
}
