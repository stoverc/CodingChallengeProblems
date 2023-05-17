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

void CountConsonantsAndVowels(char A[]){
    int vowelcount = 0, conscount = 0, semivowelcount = 0;

    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U'){
            vowelcount++;
        }
        else if(A[i] == 'w' || A[i] == 'W' || A[i] == 'y' || A[i] == 'Y'){
            semivowelcount++;
        }
        else if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)){
            conscount++;
        }
    }

    std::cout << "Consonants: " << conscount << std::endl;
    std::cout << "Vowels: " << vowelcount << std::endl;
    std::cout << "Semivowels: " << semivowelcount << std::endl;
}

int main (){
    char A[] = "How are you";
    Print(A,11);
    CountConsonantsAndVowels(A);
}