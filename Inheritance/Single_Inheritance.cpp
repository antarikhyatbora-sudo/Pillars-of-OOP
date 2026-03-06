#include <iostream>
using namespace std;
class A{
    public:
    int a,b;
    void get(){
        cout<<"enter one value:"<<endl;
        cin>>a;
        cout<<"enter another"<<endl;
        cin>>b;
    }
};
class B: public A{
    public:
    void suum(){
        cout<<"sum:"<<a+b<<endl;
    }


};
int main(){
    B b;
    b.get();
    b.suum();
    return 0;
}
