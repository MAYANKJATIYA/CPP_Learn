#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 1;i<= n;i++){
		for(int j = 1;j <= i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
int main(){
    nTriangle(5);
}