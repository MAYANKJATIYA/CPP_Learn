#include<iostream>
using namespace std;

void nTriangle(int n){
    int size = 2*n-1;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            int md = min(min(i,j),min(size-1-i,size-1-j));
            cout<<n-md;
        }
        cout<<endl;
    }
}
int main(){
    int n;
	cout<<"Enter the number : ";
	cin>>n;
    nTriangle(n);
}