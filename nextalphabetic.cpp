#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    char arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    char x ;
    cin>>x;
    char ans = '#';

    int s = 0;
    int e =n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]== x){
            s = mid+1;
        }
        else if(arr[mid]>x){
             ans = arr[mid];
            e = mid-1;
        }
        else{
           
             s = mid+1;
        }
    }
    cout<<ans<<endl;
}