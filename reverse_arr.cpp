#include<iostream>
using namespace std;

int main(){
    int arr[10],n;
    cout<<"Enter the number of elements to be added : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    for(int i=n;i>=0;i--){
        cout<<arr[i]<<"\t";
    }

    return 0;
}