#include <iostream>
#include <string>
using namespace std;
class faculty{
    public:
    string n;
    virtual void getdata(){
        cout<<"Enter name of faculty:"<<endl;
        getline(cin,n);
    }
    void showdata(){
        cout<<"name of faculty:"<<n<<endl;
    }


};
class student : public faculty{
    public:
    void getdata(){
        cout<<"Enter name of student:"<<endl;
        cin>>n;
    }
    void showdata(){
        cout<<"name of student:"<<n<<endl;
    }
};
int main(){
    faculty f;
    faculty *p;
    student s;
    student *ptr;
    p=&f;
    p->getdata();
    p->showdata();
    ptr=&s;
    ptr->getdata();
    ptr->showdata();
    p=&s;
    p->getdata();
    p->showdata();
    return 0;
}
