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

void StringCountDuplicatesHash(char A[]){
    int hash[26];

    for(int i = 0; i < 26; i++){
        hash[i] = 0;
    }

    for(int i = 0; A[i] != '\0'; i++){
        hash[A[i]-97]++;
    }

    for(int i = 0; A[i] != '\0'; i++){
        if(hash[A[i]-97] > 1){
            std::cout << A[i] << " is appearing " << hash[A[i]-97]  << " times." << std::endl;
            hash[A[i]-97]--;
        }
    }

}

int main(){
    char A[] = "finding";
    Print(A,7);
    StringCountDuplicatesHash(A);
}
