#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    
    int mid = (start+end)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end = mid;
        }

        mid = (start+end)/2;
    }
    return start;
}

int main(){
    int arr[10]={50,55,2,4,6,8,14,24,36,48};

    int arrIndex = pivot(arr,10);

    cout<<"The index = "<<arrIndex<<endl;
    return 0;
}
