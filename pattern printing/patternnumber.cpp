#include<iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
    for(int i = 1;i<= n;i++){
		for(int j = 1;j <= i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}
int main(){
    nTriangle(5);
}