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

void CountWords(char A[]){
    int wordcount = 1;

    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] == ' ' && A[i-1] != ' '){
            wordcount++;
        }
    }

    std::cout << "Words: " << wordcount << std::endl;
}

int main (){
    char A[] = "How are   u";
    Print(A,11);
    CountWords(A);
}