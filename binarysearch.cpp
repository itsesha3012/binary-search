#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    // int target=6;
  

    while(start<=end){
        int element=arr[mid];
        if(target==element)
        return mid;
        
        if(target>element)
        start=mid+1;
        else{
            end=mid-1;
        }
         mid=(start+end)/2;
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int size=7;
    int target=3;
   int index=binary_search(arr,size,target);
   cout<<"answer is  "<<index<<endl;
}
                                // binary search 