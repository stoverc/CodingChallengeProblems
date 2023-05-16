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
T Sum(T arr[], int size){
    T sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum;
}

template <typename T>
T FindMissingElementSorted(T arr[], int size){
    T max = Max(arr,size);
    T totsum = max*(max+1)/2;
    T sum = Sum(arr,size);

    return totsum - sum;
}

int main(){
    std::cout << "Hello, World!" << std::endl;

    int *init = new int[11]{1,2,3,4,6,7,8,9,10,11,12};
    std::cout << Max(init,11) << " " << Sum(init,11) << " " << FindMissingElementSorted(init,11);
}