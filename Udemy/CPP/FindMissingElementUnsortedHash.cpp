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
T Max(T arr[], int size){
    T max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

template <typename T>
T Min(T arr[], int size){
    T min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

template <typename T>
void FindMissingElementUnsortedHash(T arr[], int size){
    T max = Max(arr, size);
    T min = Min(arr, size);
    int hash[max+1];

    for(int i = 0; i < max+1; i++){
        hash[i] = 0;
    }

    for(int i = 0; i < size; i++){
        hash[arr[i]]++;
    }

    for(int i = min; i < max+1; i++){
        if(hash[i] == 0){
            std::cout << i << std::endl;
        }
    }
}

int main(){
    int *init = new int[10]{3,7,4,9,12,6,1,11,2,10};
    Print(init,10);
    FindMissingElementUnsortedHash(init,10);
}