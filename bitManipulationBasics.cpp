
#include<iostream>

using namespace std;

int getBit(int n, int i){

    return ((n & (1 << i))!=0);
}

int setBit(int n, int i){

    return (n | (1 << i));
}

int clearBit(int n, int i){

    return (n & (~(1 << i)));
}

int updateBit(int n, int i, int value){

    int mask = ~(1<<i);

    n = n & mask;

    return n | (value<<i);
}
int main(){

    // cout<<getBit(5,2);

    // cout<<setBit(1,2);

    //cout<< clearBit(5,2);

    cout<<updateBit(5,1,1);

    return 0;

}