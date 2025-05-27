#include<bits/stdc++.h>
using namespace std;

int funct(int x){
    if(x==5){
        return x;
    }
    else{
        cout<<x<<endl;
        x++;
        funct(x);

    }
    return 0;
}
int main(){
    
    funct(1);
    
    return 0;
}