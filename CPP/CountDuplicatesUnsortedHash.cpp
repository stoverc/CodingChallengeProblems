#include <iostream>

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
void CountDuplicatesUnsortedHash(T arr[], int size){
    T max = Max(arr, size);
    T hash[max+1];

    for(int i = 0; i < max+1; i++){
        hash[i] = 0;
    }

    for(int i = 0; i < size; i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i < max+1; i++){
        if(hash[i] > 1){
            std::cout << i << " is appearing " << hash[i] << " times." << std::endl;
        }
    }

}

int main(){
    int *init = new int[10]{8,3,6,4,6,5,6,8,2,7};
    CountDuplicatesUnsortedHash(init,10);
}
