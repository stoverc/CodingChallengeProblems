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

void IsPalindrome(char A[], int size){
    int i, j;

    // Make lowercase
    for(i = 0; A[i] != '\0'; i++){
        if(A[i] >= 65 && A[i] <= 90){ //Caps to LC
            A[i] += 32;
        }
        else if(A[i] >= 97 && A[i] <= 122){ //LC to Caps
            continue;
        }
    }

    // Reverse
    // B is used to reverse A; C is used to keep track of the original A
    char *B = A;
    char *C = new char[size]{};
    char temp;

    for(i = 0; i < size; i++){
        C[i] = A[i];
    }

    j = size-1;

    for(i = 0; i < j; i++, j--){
        temp = A[i];
        A[i] = B[j];
        A[j] = temp;
    }

    // Check if they are the same
    for(i = 0, j = 0; A[i] != '\0' && C[j] != '\0'; i++, j++){
        if(A[i] != C[j]){
            break;
        }
    }

    // Output result
    if(i==size){
        std::cout << "The string (ignoring cases) is a palindrome." << std::endl;
    }
    else{
        std::cout << "No palindrome detected." << std::endl;
    }

    delete[] C;
}

int main (){
    char A[] = "Paintist";
    Print(A,8);
    IsPalindrome(A,8);

    char B[] = "racecar";
    Print(B,7);
    IsPalindrome(B,7);

    char C[] = "MaDaM";
    Print(C,5);
    IsPalindrome(C,5);
}