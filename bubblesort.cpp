#include<iostream>
using namespace std;


void BubbleSort(int arr[],int n){
    // for(int i = 0;i<n-1;i++){
        
    //     for(int j=i;j<n-i-1;j++){
            
    //         for(int k = j;k<=j+1;k++){
    //             if(arr[k]>arr[k+1]){
    //                 int z = arr[k+1];
    //                 arr[k+1]=arr[k];
    //                 arr[k] = z;
                    
    //             }
    //         }
    //     }
        
    //}
    for(int i = n-1;i>0;i--){
        int swaps = 0;
        for(int j =0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int z = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = z;
                swaps = 1;
            }
        }
        if(swaps == 0){
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
    BubbleSort(arr,n);
}