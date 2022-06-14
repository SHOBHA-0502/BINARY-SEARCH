#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    int s =0;
    int e = n-1;
    int ans = INT_MAX;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]>arr[0]){
            ans = min(ans,mid);
            s=mid+1;
        }
        else{
            ans = min(mid,ans);
            e = mid-1;

        }
    }
    cout<<ans<<endl;
}