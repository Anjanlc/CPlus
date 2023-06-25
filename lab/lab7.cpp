#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 100, -7, 13, 15, 25, 1};
    int n = sizeof(arr) / sizeof(arr[0]);


    for(int i = 1; i < n; i++){
        int check = arr[i];

        for(int j = i-1; j >= 0 && arr[j] > check; j--){
            arr[j+1] = arr[j];
            arr[j] = check;
        }
    }


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}