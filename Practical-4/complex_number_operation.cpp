#include<iostream>
using namespace std;
class complex{
    float real,img;
    public:
    void accept(float r ,float i){
       
       real=r;img=i;
    }
    void display(){
       
          if(img>0){
             cout<<"\n"<<real<<"+i\t"<<img;
        }
        else{
            cout<<"\n"<<real<<"-i\t"<<-img;
        }
       
     
    }
   complex add(complex c){
       complex sum;
       sum.real= real+c.real;
       sum.img= img+c.img;
       return sum;
   }
   complex sub(complex c){
       complex sub;
       sub.real= real-c.real;
       sub.img=img-c.img;
       return sub;
       
   }
   complex mul(complex c){
       complex ans;
       ans.real=real*c.real-img*c.img;
       ans.img= real*c.img+img*c.real;
       return ans;
   }
   complex div(complex c){
       complex abc;
       abc.real=(real*c.real+img*c.img)/((c.real*c.real)-(c.img*c.img));
       abc.img=(real*c.img+img*c.real)/((c.real*c.real)-(c.img*c.img));
       return abc;
   }
       
   
};
int main(){
    complex c1,c2,c3,c4,c5,c6;
    cout<<"\nfirst complex no. is :";
    c1.accept(7.33,2.34);
    c1.display();
    cout<<"\nsecond complex no. is :";
    c2.accept(4.2,1.2);
    c2.display();
    cout<<"\nthe addition of complex no. is:";
    c3=c1.add(c2);
    c3.display();
    cout<<"\nthe substraction of complex no. is:";
    c4=c1.sub(c2);
    c4.display();
    cout<<"\nthe multiplication of complex no. is:";
    c5=c1.mul(c2);
    c5.display();
    cout<<"\nthe division of complex no. is:";
    c6=c1.div(c2);
    c6.display();
   
    return 0;
}
