#include<iostream>
using namespace std;
int add(int a, int b){
    cout<<"\nenter two integer no.s:";
    cin>>a;
    cin>>b;
    cout<<"sum of two integer no.s:";
    return a+b;
}

float add(float a ,float b,float c){
    cout<<"\nenter 3 float numbers:";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"sum of 3 float no.s:";
    return a+b+c;
}

int main(){
    float a,b,c;
    cout<<add(a,b);
    cout<<add(a,b,c);
}
