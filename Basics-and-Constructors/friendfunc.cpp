#include <iostream>
using namespace std;
class B;

class A{
    private:int a;
    public:
    void geta();
    friend void sum(A,B);

};
void A::geta(){
    cin>>a;
    

}
class B{
    private:int b;
    public:
    void getb();
    friend void sum(A,B);

};
void B::getb(){
    cin>>b;
    

}
void sum(A x,B y){
    cout<<x.a+y.b<<endl;
}
int main(){
    A e;
    B f;
    e.geta();
    f.getb();
    sum(e,f);
    return 0;


}


