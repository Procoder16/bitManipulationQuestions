
#include<iostream>

using namespace std;

bool isPowerOfTwo(int n){

    return (n && !(n & (n-1)));
}

int main(){
    
    int n;
    cout<<"ENTER THE NUMBER TO CHECK:";
    cin>>n;

    cout<<isPowerOfTwo(n);

    return 0;
}