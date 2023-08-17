#include<iostream>
using namespace std;

int firstocc(int arr[10], int key, int size){
    int s=0;
    int e=size-1;
    int mid = (s+e)/2;
    int index = -1;

    while(s<=e){
        if(key==arr[mid]){
            index = mid;
            e=mid-1;
        }
    
        else if(key>arr[mid]){
            s=mid+1;
        }

        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = (s+e)/2;
}
return index;
}

int lastocc(int arr[10], int key, int size){
    int s=0;
    int e=size-1;
    int mid = (s+e)/2;
    int index = -1;

    while(s<=e){
        if(key==arr[mid]){
            index = mid;
            s=mid+1;
        }
    
        else if(key>arr[mid]){
            s=mid+1;
        }

        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = (s+e)/2;
}
return index;
}

int main(){
    int arr[6] = {1,2,3,4,4,5};

    cout<<"The index of first occurence = "<<firstocc(arr,4,6)<<endl;
    cout<<"The index of last occurence = "<<lastocc(arr,4,6)<<endl;
    return 0;
}