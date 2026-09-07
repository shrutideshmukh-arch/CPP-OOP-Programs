#include<iostream>
using namespace std;
void accept(int &m, int arr[]){
    cout<<"enter the size of array:";
    cin>>m;
    cout<<"enter the array elements:";
    for(int k=0;k<m;k++){
        cin>>arr[k];
    }
}
void display(int m, int arr[]){
   
    for(int k=0;k<m;k++){
        cout<<arr[k]<<" ";
    }
}
void swap(int &a , int&b){
    int temp = a;
    a = b;
    b = temp;
}
void sort(int m,int arr[]){
     for (int i=0;i<m;i++){
        for (int j=0;j<m-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
   
}
int main(){
    int n,array[10];
    accept(n,array);
    cout<<"\nthe entered array is:";
    display(n,array);
    sort (n,array);
    cout<<"\nthe sorted array is:";
    display(n,array);
    return 0;
   
}
