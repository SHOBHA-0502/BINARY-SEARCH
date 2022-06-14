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
    
    if(arr[s]<arr[e]){
        cout<<arr[s]<<endl;
    }
    else{
        while(s<=e){

            int mid= s +(e-s)/2;
              if(arr[mid]>arr[mid+1]){
                cout<<arr[mid+1];
                break;
            }
            else if(arr[mid]<arr[mid-1]){
                cout<<arr[mid];
                break;
            }
           
            else if(arr[s]<=arr[mid]){
                s = mid+1;
            }
            else if(arr[e]>arr[mid]){
                  e=mid-1;
            }
        }
    }
    
}