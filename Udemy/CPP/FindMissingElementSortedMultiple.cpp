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
void FindMissingElementSortedMultiple(T arr[], int size){
    T start = arr[0];
    T diff = start - 0;

    for(int i = 0; i < size; i++){
        if(arr[i]-i != diff){
            while(diff < arr[i]-i){
                std::cout << i+diff << std::endl;
                diff++;
            }
        }
    }
}

int main(){
    int *init = new int[11]{6,7,8,9,11,12,15,16,17,18,19};
    Print(init,11);
    FindMissingElementSortedMultiple(init,11);
}