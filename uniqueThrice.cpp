#include <iostream>
using namespace std;

bool ifBitSet(int n, int pos){
    int k = (n & (1<<pos));

    if(k == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int uniqueThrice(int arr[], int n){
    int ans = 0;
    for(int i=0; i<64; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(ifBitSet(arr[j], i)){
                count++;
            }
        }

        if(count%3!=0){
            ans = setBit(ans, i);
        }
    }

    return ans;
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

    cout<<"\nUNIQUE NUMBER IN THE ARRAY IS:"<<uniqueThrice(arr, n);

    return 0;
}