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

void IsAnagram(char A[], char B[]){
    int hash[26];
    bool anagram = true;

    for(int i = 0; i < 26; i++){
        hash[i] = 0;
    }

    for(int i = 0; A[i] != '\0'; i++){
        hash[A[i]-97]++;
    }

    for(int i = 0; B[i] != '\0'; i++){
        hash[B[i]-97]--;
    }

    for(int i = 0; i < 26; i++){
        if(hash[i] != 0){
            std::cout << "These words are not anagrams!" << std::endl;
            anagram = false;
            break;
        }
    }

    if(anagram == true){
        std::cout << "These words ARE anagrams!" << std::endl;
    }

}

int main(){
    char A[] = "decimal";
    Print(A,7);

    char B[] = "medical";
    Print(B,7);

    IsAnagram(A,B);

    Print(A,7);
    
    char C[] = "hexclad";
    Print(C,7);

    IsAnagram(B,C);
}
