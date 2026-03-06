#include <iostream>
using namespace std;
class complex{
    int r,i;
    public:
    complex(){
        r=0;
        i=0;
    }
    void get(){
        cout<<"Enter two values:"<<endl;
        cin>>r;
        cin>>i;
    }
    complex(int a,int b){
        r=a;
        i=b;
    }
    complex(complex &z){
        r=z.r;
        i=z.i;
    }
    void sum(){
        cout<<"sum is:"<<r+i<<endl;
    }


};
int main(){
    complex c;
    complex c1(2,3);
    complex c6(c1);
    c.get();
    c.sum();
    c1.sum();
    c6.sum();
    return 0;
}
