#include<iostream>
using namespace std;

int Max(int arr[],int n){
    int max = INT_FAST16_MIN;
    for(int i = 1;i<=n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max element is : "<<max<<endl;
}
int Min(int arr[],int n){
    int min = INT_FAST16_MAX;
    for(int i = 1;i<=n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Min element is : "<<min<<endl;
}

int main(){
    int n,arr[10];
    cout<<"Enter the number of elements to be added : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

    Max(arr,n);
    Min(arr,n);


    return 0;
}
