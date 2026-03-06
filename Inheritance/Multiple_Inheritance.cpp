#include <iostream>
using namespace std;
class A{
    public:
    int a;
    void geta(){
        cout<<"Enter a number:"<<endl;
        cin>>a;
    }
};
class B{
    public:
    float b;
    void getb(){
        cout<<"Enter a number:"<<endl;
        cin>>b;
       
    }
};
class C:public A,public B{
    public:
    void sum(){
        cout<<"sum:"<<a+b<<endl;
    }
};
int main(){
    C c;
    c.geta();
    c.getb();
    c.sum();
    return 0;
}
