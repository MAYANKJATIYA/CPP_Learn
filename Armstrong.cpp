#include<iostream>
using namespace std;

int pow(int x1,int x2){
    int ans = 1;
    for(int i = 0;i<x2;i++){
        ans = ans *x1;
    }
    return ans;
}
bool isArmstrong(int x){
    int a;
    int b = 0;
    int c = x;
    int d = 0;
    int e = x;
    while (c != 0) {
        c/= 10;  
        d++;
    }
    while(x){
        a= x%10;
        b += pow(a,d);
        x = x/10;
    }
    return (e==b);
    
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<boolalpha<<isArmstrong(n);
}