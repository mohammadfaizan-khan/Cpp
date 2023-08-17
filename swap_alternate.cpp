#include<iostream>
using namespace std;

int main(){
    int arr[10],n;
    cout<<"Enter the number of elements to be added : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}