#include<iostream>
#include<vector>
using namespace std;

vector<int> divisors(int n) {
    vector<int> ans;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    for(int v : ans){
        cout<<v<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    divisors(n);
}
