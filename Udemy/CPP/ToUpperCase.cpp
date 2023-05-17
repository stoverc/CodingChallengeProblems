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

void ToUpperCase(char A[]){
    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] >= 65 && A[i] <= 90){ //Caps to LC
            continue;
        }
        else if(A[i] >= 97 && A[i] <= 122){ //LC to Caps
            A[i] -= 32;
        }
    }
}

int main (){
    char A[] = "WeLcOME";
    Print(A,7);
    ToUpperCase(A);
    Print(A,7);
}