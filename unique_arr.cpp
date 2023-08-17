#include<iostream>
using namespace std;

int main(){
    int arr[10],n,ans=0,i=1;
    cout<<"Enter the number of elements to be added : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
 
    for(int i=1;i<=n;i++){
        ans = ans^arr[i];
    }
    if(ans!=0){
        cout<<ans<<endl;
    }

    return 0;
}