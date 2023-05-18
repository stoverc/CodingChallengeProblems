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

void CompareStrings(char A[], char B[]){
    int i, j;
    
    for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++){
        if(A[i] != B[j]){
            break;
        }
    }

    if(A[i] == B[j]){
        std::cout << "The strings are equal." << std::endl;
    }
    else if (A[i] < B[j]){
        std::cout << "The first string is smaller." << std::endl;
    }
    else{
        std::cout << "The second string is smaller." << std::endl;
    }
}

int main (){
    char A[] = "Paintist";
    Print(A,8);

    char B[] = "Painting";
    Print(B,8);

    CompareStrings(A,B);
}