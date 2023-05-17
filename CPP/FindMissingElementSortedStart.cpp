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
T FindMissingElementSortedStart(T arr[], int size){
    T start = arr[0];
    T diff = start - 0;

    for(int i = 0; i < size; i++){
        if(arr[i]-i != diff){
            return i + diff;
        }
    }

    return -1;
}

int main(){
    int *init = new int[11]{6,7,8,9,10,11,13,14,15,16,17};
    Print(init,11);
    std::cout << FindMissingElementSortedStart(init,11) << std::endl;
}