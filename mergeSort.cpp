#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int start,int mid,int end){
    vector<int> temp;
    int x = mid +1;
    int i = start;
    while(start <= mid && x <= end){
        if(arr[start] <= arr[x]){
            temp.push_back(arr[start]);
            start++;
        }
        else{
            temp.push_back(arr[x]);
            x++;
        }
    }
    while(start <= mid){
        temp.push_back(arr[start]);
        start++;
    }
    while(x<=end){
        temp.push_back(arr[x]);
        x++;
    }
    for(int idx = 0;idx < temp.size();idx++){
        arr[idx + i] = temp[idx];
    }
    
    
}
void mergeSort(vector<int> &arr,int start ,int end){
    if(start < end){
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int x;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        cout<<"Enter array element : ";
        cin>>x;
        arr.push_back(x);
    }
    mergeSort(arr,0,arr.size()-1);
    for(auto i:arr){
        cout<<i<<" ";
    } 
}