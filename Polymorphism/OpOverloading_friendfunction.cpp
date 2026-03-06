#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class complex{
    int r,i;
    public:
    void get(){
        cout<<"enter real and img part:"<<endl;
        cin>>r>>i;


    }
    friend void operator+(complex c1,complex c2);
   
};
void operator+(complex c1,complex c2){
    cout<<"Sum of real:"<<c1.r+c2.r<<endl;
    cout<<"Sum of img:"<<c1.i+c2.i<<endl;
}
int main(){
    complex c1,c2;
    c1.get();
    c2.get();
    c1+c2;
    return 0;
}
