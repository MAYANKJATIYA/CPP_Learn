#include <iostream>
using namespace std;

bool Palindrome(int i,string N){
    int n = N.size();
    if(i >= n/2){
        return true;
    };
    if (N[i]!=N[n-i-1]){
        return false;
    };
    return Palindrome(i+1,N);
}
int main(){
    string N;
    cout<<"Enter the number : ";
    cin>>N;
    cout<<boolalpha<<Palindrome(0,N);
}
