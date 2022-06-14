#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    int*arr = new int[n];
    for(int i =0 ;i<n; i++){
        cin>>arr[i];
    }
    int x ;
    cin>>x;
    int start =0;
    int end = n-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==x){
            cout<<mid;
            break;
        }
        else if( arr[mid]<x){
            end = mid-1;
        }
        else{
            start =mid+1;
        }
    }
}