#include<iostream>
using namespace std;

int oddnumcheck(int a[],int a_size){
    int r=0;
    for(int i=0;i<a_size;i++){
        r=r^a[i];
    }
    
    return r;
        
}

int main(){
    
    int a[]={1, 2, 3, 2, 3, 1, 3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<oddnumcheck(a,n)<<endl;
    
    
        return 0;
     
}
