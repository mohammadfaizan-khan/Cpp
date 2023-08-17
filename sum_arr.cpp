#include<iostream>
using namespace std;

int main(){
    int n,arr[10],sum=0;
    cout<<"Enter the number of elements to be added : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"Sum : "<<sum<<endl;


}