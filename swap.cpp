#include<iostream>
using namespace std;
void swap (int &,int&);
int main(){
    int m,n;
    cout<<"enter values for m & n:";
    cin>>m;
    cin>>n;
    cout<<" \nvalues of m is:"<<m;
    cout<<" \nvalues of n is:"<<n;
    swap(m,n);
    cout<<"\nswapped values of m is:"<<m;
    cout<<"\nswapped values of n is:"<<n;
  return 0;
}
void swap(int&a,int&b){
    int temp=a;
    a=b;
    b=temp;
}
