#include<iostream>
#include<cstring>
using namespace std;



class myString{
    private:
    char *str;
    public:

    myString(){
        str=new char[2];
        str[0]='a';
       
       
        str[1]='\0';
       
    }
     myString(const char *ptr){
         str=new char[strlen(ptr)+1];
         strcpy(str,ptr);
         
     }
    myString(const myString &p){
        str=new char[strlen(p.str)+1];
        strcpy(str,p.str);
       
    }
    void accept(){
     cout<<"\nenter string:";
        cin>>str;
    }
    void display(){
        cout<<"\n the string is:"<<str;
    }

~ myString(){
    delete[]str;
}
 
};
int main(){
    myString S1;
    S1.display();
    S1.accept();
    S1.display();
    myString S2("hello");
    myString S3=S2;
    S2.display();
    S3.display();
   return 0;
}
