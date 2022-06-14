#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int s =0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]== x){
            cout<<mid<<endl;
            break;
        }
        else if(mid-1>= s && arr[mid-1]== x ){
            cout<<mid-1<<endl;
            break;
        }
        else if(mid+1>= s && arr[mid+1]== x ){
            cout<<mid+1<<endl;
            break;
        }
        else if( arr[mid]>x){
            s = mid+2;
        }
        else{
            e = mid-2;
        }
    }
    
    
}