#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
int *i1= new int;
int *i2= new int(3);
int *i3= new int(2);
int *i4 = new int(2 * *i3);
int *i5;
string *s= new string;
//calls parameterized constructor
//string *s1= new string('d');
string *s2=new string[10];
for(int i=0;i<9;i++)
{
    s2[i]="a";
    cout<<s2[i]<<endl;
}
cout<<*i1<<endl;
cout<<*i2<<endl;
cout<<*i3<<endl;
cout<<*i4<<endl;

//cout<<*s1<<endl;
cout<<*s2<<endl;

delete i1;
delete i2;
delete i3;
delete i4;
delete i5;
delete s;
//delete s1;
return 0;
}
