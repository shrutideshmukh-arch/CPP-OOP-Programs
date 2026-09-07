#include <iostream>
using namespace std;

int main() {
    int sumeven=0,sumodd=0,i;
    for(i=1;i<=50;i++){
        if(i%2==0){
            sumeven += i;
        }
        else{
          sumodd += i;  
        }
    }
    cout<<"sum of even:"<<sumeven;
    cout<<"\nsum of odd:"<<sumodd;
    return 0;
}
