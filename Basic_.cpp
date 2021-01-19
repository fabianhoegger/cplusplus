#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class  Basic{
    public:
    int Add(int ,int );
    Basic();
    ~Basic();
    void setName(string);
    void setVars(int,int);
    string getName();
    int* getVars();
    private:
    string name;
    int a;
    int b;
};
//modifiers
 void Basic::setName(string name){
    this->name=name;
}
void Basic::setVars(int a,int b){
    this->a=a;
    this->b=b;
}
//accessors

string Basic::getName(){
   return this->name=name;
}
int* Basic::getVars(){
    int *p=new int[2];
    p[1]=this->a;
    p[2]=this->b;
    return p;

}
Basic::Basic(){
    this->name="Bob";
    this->a=0;
    this->b=0;
}
Basic::~Basic(){


}

int Basic::Add(int a,int b){
    return (a+b);
}
class Derived : public Basic{
    public:
    void setFlag(bool);
    bool getFlag();
    private:
    bool derived=true;
};
//modifiers
void Derived::setFlag(bool flag){
    this->derived=flag;
}
//accessors
bool Derived::getFlag(){
    return this->derived;
}
int main()
{
    Basic obj1;
    string name="Martha";
    Derived obj2;
    obj2.setName("XINOOO");
    obj2.setFlag(true);
    obj1.setName(name);
    cout<<obj1.getName()<<endl;
    cout<<boolalpha<<obj2.getFlag()<<endl;
    int* p=new int(3);
    cout<<*p<<endl;
    if (*p<4){
        cout<<"entered if"<<endl;
    }
    delete p;
    return 0;
}
