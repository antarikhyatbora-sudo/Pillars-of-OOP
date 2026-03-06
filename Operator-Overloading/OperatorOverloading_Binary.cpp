#include <iostream>
using namespace std;
class sum{
    int a;
    public:
    sum(){
        a=0;
    }
    sum(int i){
        a=i;
    }
    sum operator+(sum p1){
        sum t;
        t.a=a+p1.a;
        return t;
    }
    void display(){
        cout<<"sum:"<<a<<endl;
    }


};
int main(){
    cout<<"Enter Two Numbers:"<<endl;
    int a,b;
    cin>>a>>b;
    sum x(a),y(b);
    sum z = x + y;
    z.display();


}
