#include <iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int b;
    public:
    friend class B;
};
class B{
    A t;
    public:
    void display(){
        cout<<"enter a"<<endl;
        cin>>t.a;
        cout<<"enter b"<<endl;
        cin>>t.b;

    }
    void dd(){
        cout<<"a is:"<<t.a<<endl;
        cout<<"b is:"<<t.b<<endl;
    }
};
main(){
    B g;
    g.display();
    g.dd();
    return 0;
}