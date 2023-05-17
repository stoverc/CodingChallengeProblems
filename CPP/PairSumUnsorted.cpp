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
void PairSumUnsorted(T arr[], int size, T sum){
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i]+arr[j]==sum){
                std::cout << arr[i] << "+" << arr[j] << "=" << sum << " occurs at (i,j)=(" << i << "," << j << ")" << std::endl;
            }
        }
    }
}

int main(){
    int *init = new int[10]{6,3,8,10,16,7,5,2,9,14};
    Print(init,10);
    PairSumUnsorted(init,10,10);
}
