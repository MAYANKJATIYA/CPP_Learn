#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int a = x;
    x = y;
    y = a;
    return ;
}
void ReverseanArray(int i,int arr[],int r){
    if(i>r/2){
        return;
    }
    swap(arr[i],arr[r-1-i]);
    ReverseanArray(i+1,arr,r);
    return ;
}
int main(){
    int r ;
    cout<<"Enter size of array : ";
    cin>>r;
    int arr[r];
    
    for(int i = 0;i<r;i++){
        cout<<"Enter elements of array : ";
        cin>>arr[i];
    };
    ReverseanArray(0,arr,r);
    for(int i = 0;i<r;i++){
        cout<<arr[i];
    }
    
}