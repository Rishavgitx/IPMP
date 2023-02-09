#include<iostream>
using namespace std;

void repeatitive(int a[],int size)
{
    cout<<"Repeated element:";
    for(int i=0;i<size;i++)   {
        for(int j=i+1;j<size;j++){
            if (a[i] == a[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    
    }
}

int main(){
    int a[]={1,2,2,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    repeatitive(a, n);
    return 0;
}