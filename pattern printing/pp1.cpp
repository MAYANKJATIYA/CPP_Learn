#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 0;i< n;i++){
		for(int j = 0;j < n-i-1;j++){
			cout<<" ";
		}
		
        for(int j = 0;j<2*i +1;j++){
            cout<<"*";
        }
        cout<<endl;

	}
}
int main(){
    nTriangle(5);
}
