#include<iostream>
using namespace std;

void nTriangle(int n){
    for(int i = 1;i<=n;i++){
        for(int j = n-i;j>0;j--){
            cout<<" ";
        }
        for(int j = 1;j<=2*i-1;j++){
            if(j%2==0)
            cout<<" ";
            else
            cout<<"*";
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