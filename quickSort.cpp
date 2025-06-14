#include<bits/stdc++.h>
using namespace std;

int qs(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i<= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

}
void QuickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pidx = qs(arr,low,high);
        QuickSort(arr,low,pidx-1);
        QuickSort(arr,pidx+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int x ;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        cout<<"Enter array element : ";
        cin>>x;
        arr.push_back(x);
    }
    QuickSort(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
}