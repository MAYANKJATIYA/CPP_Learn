#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<"Enter array element : ";
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<=n-2;i++){
        int minn = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j] < arr[minn]){
                minn = j;
            } 
        }
        int x = arr[i];
            arr[i] = arr[minn];
            arr[minn] = x; 
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];

    SelectionSort(arr,n);    
}