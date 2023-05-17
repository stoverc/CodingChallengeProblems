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

void StringReverse(char A[], int size){
    char *B = A;
    char temp;

    int j = size-1;

    for(int i = 0; i < j; i++, j--){
        temp = A[i];
        A[i] = B[j];
        A[j] = temp;
    } 

    Print(B,size);
}

int main (){
    char A[] = "Python";
    Print(A,6);
    StringReverse(A,6);
}