#include<iostream>
using namespace std;

void GCD(int n1,int n2){
    int ans=0;
    for(int i = n1;i >=1;i--){
        for(int j = n2;j>=1;j--){
            if(n1%i==0 && n2%j==0 && i==j){
                ans = i;
            }   
        }   
            if(ans!=0)
            break;    
        
    }
    cout<<ans;
}
int main(){
    int n1,n2;
    cout<<"Enter the number : ";
    cin>>n1;
    cout<<"Enter the number : ";
    cin>>n2;
    GCD(n1,n2);
}