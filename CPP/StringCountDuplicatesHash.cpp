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

void StringCountDuplicatesHash(char arr[], int size){
    int hash[26];

    for(int i = 0; i < 26; i++){
        hash[i] = 0;
    }

    for(int i = 0; arr[i] != '\0'; i++){
        hash[arr[i]-97]++;
    }

    for(int i = 0; arr[i] != '\0'; i++){
        if(hash[arr[i]-97] > 1){
            std::cout << arr[i] << " is appearing " << hash[arr[i]-97]  << " times." << std::endl;
            hash[arr[i]-97]--;
        }
    }

}

int main(){
    char A[] = "finding";
    Print(A,7);
    StringCountDuplicatesHash(A,7);
}
