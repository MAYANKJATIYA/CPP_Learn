#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 1;i<= n;i++){
		for(int j = 1;j <= i;j++){
			cout<<j;
		}
        for(int j = 2*n-2*i;j>1;j--){
            cout<<" ";
        }
        for(int j = i;j>=1;j--){
            cout<<j;
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