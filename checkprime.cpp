#include<iostream>
using namespace std;

bool isPrime(int n) {

    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
            break;
        }
        else if(i == n-1 && i%n!=0){
        return true;
        break;
        }
    }     
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<boolalpha<<isPrime(n);
}