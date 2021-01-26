
#include<iostream>
using namespace std;

int nonRepeatingElement(int arr[], int n){

    int ans = 0;
    for(int i = 0; i<n ;i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;

    int arr[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:\n";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"NON-REPEATING ELEMENT OF THE ARRAY IS:"<<nonRepeatingElement(arr, n);

    return 0;
}