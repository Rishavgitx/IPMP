#include<iostream>
using namespace std;
void reverse(int a[],int size){
    for(int i=size-1;i>=0;i--){
    cout<<a[i]<<" ";
    }
}
int main(){
   int a[]={1,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);

    reverse(a,n);
    cout<<endl;
    return 0;
}