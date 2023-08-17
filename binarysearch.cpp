#include<iostream>
using namespace std;

int binarysearch(int key, int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid;
    mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start = mid+1;
        }

        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int arr[10]={2,4,6,8,14,24,36,48,50,55};

    int arrIndex = binarysearch(24,arr,10);

    cout<<"The key = "<<arrIndex<<endl;
    return 0;
}
