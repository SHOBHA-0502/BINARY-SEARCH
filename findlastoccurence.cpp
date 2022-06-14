#include<bits/stdc++.h>
using namespace std;

 int main(){
     int n ;
     cin>>n ;
     int *arr = new int[n];
     for(int i=0 ; i<n ; i++){
         cin>>arr[i];
     }
     int x ;
     cin>>x;
     //binary search 

     int start =0;
     int end = n-1;
     int res = -1;
     while(start<=end){
         int mid = start +(end-start)/2 ;
         if(arr[mid]== x){
             res = mid;
             end  = mid-1;
         }
         else if(arr[mid]>x){
             end  = mid-1;
         }
         else {
             start = mid+1;
         }
        //  cout<<start <<"//"<<mid<<"//"<<end<<endl;
     }

      start =0;
       end = n-1;
     int last = -1;
     while(start<=end){
       
         int mid = start +(end-start)/2 ;
       
         if(arr[mid]== x){
             last= mid;
             start = mid+1;
         }
         else if(arr[mid]>x){
             end  = mid-1;
         }
         else {
             start = mid+1;
         }
        //  cout<<start <<"//"<<mid<<"//"<<end<<endl;
     }
     cout<<(last -res +1)<<endl;
 }