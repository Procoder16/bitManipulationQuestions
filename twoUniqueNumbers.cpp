
#include<iostream>

using namespace std;

bool ifBitSet(int n, int pos){
    int k =( n & (1<<pos));
    if(k==0){
        return 0;
    }

    else{
        return 1;
    }
    //return ((n & (1 << pos)) != 0);
}

void twoUniqueNumbers(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){
        if(ifBitSet(arr[i], pos-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout<<"\nTWO UNIQUE NUMBERS ARE:";
    cout<<newxor<<endl;
    cout<<(tempxor ^ newxor);
}

int main(){
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    int arr[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    twoUniqueNumbers(arr, n);

    return 0;
}