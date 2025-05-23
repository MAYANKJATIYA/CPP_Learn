#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 0;i< n;i++){
		for(int j = 0;j <i;j++){
			cout<<" ";
		}
        for(int j = 2*n-2*i;j>1;j--){
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