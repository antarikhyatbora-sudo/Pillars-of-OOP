#include <iostream>
using namespace std;
class complex{
    int a,b,c;
    public:
    void get(){
        cout<<"Enter A,B,C:"<<endl;
        cin>>a>>b>>c;
    }
    complex operator-(){
        a=-a;
        b=-b;
        c=-c;


    }
    void dis(){
        cout<<a<<b<<c<<endl;
    }
};
int main(){
    complex c;
    c.get();
    -c;
    c.dis();
    return 0;
}
