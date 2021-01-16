/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
//allocates 10 string pointers;
string **strarr= new string *[10];
for(int i=0;i<9;i++)
{
    s2[i]="s2";
    strarr[i]=new string;
    cout<<s2[i]<<endl;


}
for(int i=0;i<9;i++)
{
    *strarr[i]="strarr";
    cout<<*strarr[i]<<endl;


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
for(int i=0;i<9;i++)
{

    delete strarr[i];
    //cout<<s2[i]<<endl;
}
delete s2;
return 0;
}
