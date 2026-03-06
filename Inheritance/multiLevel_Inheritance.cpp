#include <iostream>
using namespace std;
class A{
    public:
    int a,b;
    void geta(){
        cout<<"Enter marks of any 2 Subjects"<<endl;
        cin>>a>>b;
    }
};
class B: public A{
    public:
    float c;
    void tot(){
        c=a+b;
        cout<<"Total marks:"<<c<<endl;
    }
};
class C:public B{
    public:
    void avg(){
        cout<<"Average:"<<c/2<<endl;
    }
};
int main(){
    C c;
    c.geta();
    c.tot();
    c.avg();
    return 0;
}
