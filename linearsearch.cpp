#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for(int i=1;i<=n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10],n,key;
    cout<<"Enter the number of elements to be added : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    
    cout<<"Enter the element to be searched : ";
    cin>>key;

    bool found = search(arr,n,key);

    if (found==1){
        cout<<"Key is present in the array.\n";
    }
    else{
        cout<<"Key is not present in the array.\n";
    }

    return 0;
    }
