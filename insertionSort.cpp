#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    int k = 0;
    for(int i = 1;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int z = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = z;
                k = 1;
            }
        }
        if(k==0){
            break;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    InsertionSort(arr,n);
}