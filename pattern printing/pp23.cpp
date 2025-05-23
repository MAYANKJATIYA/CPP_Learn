#include<iostream>
using namespace std;

void nTriangle(int n) {
	
    
    for(int i = 0;i < 2*n;i++){
        for(int j = 0;j < n;j++){
            if(i==0 || i == n-1){
                cout<<n-1;
            }
            else{
                if(j == 0 || j == n-1)
                cout<<"*";
                else
                cout<<" ";
            }
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