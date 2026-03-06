#include <iostream>
using namespace std;
template <class h>
void wap1(h &x,h &y){
    h t=x;
    x=y;
    y=t;
}
void show(int a, int b){
    cout<<"result="<<a<<" "<<b<<endl;
}
int main(){
    int x,y;
    cout<<"enter two numbers:"<<endl;
    cin>>x>>y;
    show(x,y);
    cout<<"after swap:"<<endl;
    wap1(x,y);
    show(x,y);
    return 0;
}
