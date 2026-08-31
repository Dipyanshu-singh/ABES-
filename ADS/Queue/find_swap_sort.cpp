#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int partition(int arr[], int low, int high){
    int x = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < x){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;cout<<"enter no. of elem.: ";cin>>n;
    int arr[100];cout<<"enter elem. : ";
    for(int i=0)

}