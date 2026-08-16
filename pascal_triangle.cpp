#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int Bco(int n,int r){
    int conum=fact(n);
    int coden=fact(r)*fact(n-r);
    int co = conum/coden;
    return co;
}
void Pas(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<Bco(i,j)<<" ";
        }
        cout<<"\n";
    }
   
}
int main(){
    int n,r;
    cout<<"enter no. of rows and column:";
    cin>>n;
    cin>>r;
    cout<<"\nThe pascal triangle:\n";
    Pas(n);
}
