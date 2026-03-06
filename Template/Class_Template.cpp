#include <iostream>
using namespace std;
template <class h1,class h2>
class wap{
    h1 a;
    h2 b;


    public:
    wap(h1 x,h2 y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<"and"<<b<<endl;
    }
};
int main(){
    int k;
    float m;
    cout<<"Enter an integer and float:"<<endl;
    cin>>k>>m;
    wap<int,float> s(k,m);
    s.show();
    return 0;


}
