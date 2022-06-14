#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int*arr = new int[n];
    for(int i =0 ;i<n ;i++){
        cin>>arr[i];
    }
    int k ;
    cin>>k;
    int s=0;
    int e = 1;
    while(k>arr[e]){
        s=e;
        e = 2*e;
    }
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]>k){
            e =mid-1;
        }
        else{
            s=mid+1;
        }
    }
}