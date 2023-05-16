#include <iostream>

template <typename T>
T Max(T arr[], int size){
    T max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

template <typename T>
T Min(T arr[], int size){
    T min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}
template <typename T>
void CountDuplicatesUnsorted(T arr[], int size){
    for(int i = 0; i < size-1; i++){
        int count = 1;

        if(arr[i] != -1){
            for(int j = i+1; j < size; j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }

            if(count > 1){
                std::cout << arr[i] << " is appearing " << count << " times." << std::endl;
            }
        }
    }

}

int main(){
    int *init = new int[10]{8,3,6,4,6,5,6,8,2,7};
    CountDuplicatesUnsorted(init,10);
}
