#include<iostream>
using namespace std;


int reverseNumber(int n) {
    int r;
    int ans =0;
    while(n){
        r = n%10;
        ans = ans*10 + r;
        n = n/10;
    }
    cout<<ans;
    return 0;
}

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    reverseNumber(n);
}