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
void CountDuplicatesSorted(T arr[], int size){
    for(int i = 0; i < size-1; i++){
        if(arr[i] == arr[i+1]){
            int j = i+1;
            while(arr[j] == arr[i]){
                j++;
            }

            std::cout << arr[i] << " is appearing " << j-i << " times." << std::endl;

            i = j-1;
        }
    }
}

int main(){
    int *init = new int[10]{3,6,8,8,10,12,15,15,15,20};
    Print(init,10);
    CountDuplicatesSorted(init,10);
}
