#include<iostream>
using namespace std;

int main(){

    int arr[] = {5,2,11,8,3,7,1,-4,6};
    int n = sizeof(arr)/4;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<count<<endl;
}