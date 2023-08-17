#include<iostream>
using namespace std;

int sqrt(int n){
    int start = 0;
    int end = n;
    int ans=0;
    int mid = (start+end)/2;

    while(start<=end){
        if(mid*mid>n){
            end = mid-1;
        }
        else if(mid*mid<n){
            ans = mid;
            start = mid+1;
        }
        else{
            return mid;
        }

        mid = (start+end)/2;
    }

}

double decimal(int n, int precision, int soln){

    double factor=1;
    double ans=soln;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(int j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int soln = sqrt(n);

    cout<<"Square root = "<<decimal(n,3,soln)<<endl;
    return 0;
}
