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

void StringPermutations(char A[], int size, int k){
    static int B[10] = {0};
    static char *res = new char[size]{};

    int i;

    if(A[k] == '\0'){
        res[k] = '\0';
        Print(res,size);
    }
    else{
        for(i = 0; A[i] != '\0'; i++){
            if(B[i] == 0){
                res[k] = A[i];
                B[i] = 1;
                StringPermutations(A,size,k+1);
                B[i] = 0;
            }
        }
    }
}

int main(){
    char A[] = "ABC";
    Print(A,3);
    StringPermutations(A,3,0);
}
