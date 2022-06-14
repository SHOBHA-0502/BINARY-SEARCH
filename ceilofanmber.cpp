#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    int x ;
    cin>>x;
    int res =-1;
    int s =0;
    int e = n-1;
    while(s<=e){
        int mid = s +(e-s)/2;
        if(arr[mid]==x){
            cout<<mid<<endl;
            break;
        }
        if(arr[mid]>x){
            res = mid;
            e= mid-1;
        }
        else{
            
            s = mid+1;
        }
    }
    cout<<res<<endl;
}
