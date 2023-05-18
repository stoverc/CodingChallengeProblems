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

void StringFindDuplicatesBitwise(char arr[]){
    int H = 0, x = 0;

    for(int i = 0; arr[i] != '\0'; i++){
        x = 1;
        x = x << (arr[i]-97);

        if((x & H) > 0){
            std::cout << arr[i] << " is duplicate." << std::endl;
        }
        else{
            H = x | H;
        }
    }

}

int main(){
    char A[] = "finding";
    Print(A,7);
    StringFindDuplicatesBitwise(A);
}
