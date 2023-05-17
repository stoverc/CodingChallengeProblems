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
void PairSumSorted(T arr[], int size, T sum){
    int i = 0, j = size - 1;

    while(i < j){
        if(arr[i]+arr[j] == sum){
            std::cout << arr[i] << "+" << arr[j] << "=" << sum << " occurs at (i,j)=(" << i << "," << j << ")" << std::endl;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] < sum){
            i++;
        }
        else{
            j--;
        }

    }
}

int main(){
    int *init = new int[10]{1,3,4,5,6,8,9,10,12,14};
    Print(init,10);
    PairSumSorted(init,10,10);
}
