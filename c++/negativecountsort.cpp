#include <iostream>
#include <vector>
using namespace std;
int main() {
        cout << "Sorted array: ";

    int arr[] = {-4, -2, -2, -8, -3, -3, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr1[7];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[i]=arr[i]*-1;
        }
    }
       int max = 0;
        for(int i = 1; i < n; i++) {
        if(arr1[i] > max)
            max = arr1[i];
    }

    vector<int> count(max + 1,0);

    for(int i = 0; i < n; i++) {
        count[arr1[i]]++;
    }

    int index = 0;
    for(int i = max;i >=0; i--) {
        if(count[i]>0){
            for(int j=0;j<count[i];j++) {
                arr[index] = -i;
                index++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
