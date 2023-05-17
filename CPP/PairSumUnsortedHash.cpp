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
void PairSumUnsortedHash(T arr[], int size, T sum){
    int max = Max(arr,size);
    T hash[max+1];

    for(int i = 0; i < max+1; i++){
        hash[i] = 0;
    }

    // for(int i = 0; i < size; i++){
    //     hash[arr[i]]++;
    // }

    //Print(hash,max+1);

    for(int i = 0; i < size; i++){
        if(sum-arr[i] >= 0 && hash[sum-arr[i]] != 0){
            std::cout << arr[i] << "+" << sum-arr[i] << "=" << sum << std::endl;
        }

        hash[arr[i]]++;
    }
}

int main(){
    int *init = new int[10]{6,3,8,10,16,7,5,2,9,14};
    Print(init,10);
    PairSumUnsortedHash(init,10,10);
}
