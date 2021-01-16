#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int *i1= new int;
int *i2= new int(3);
int *i3= new int(2);
int *i4 = new int(2 * *i3);
int *i5;
cout<<*i1<<endl;
cout<<*i2<<endl;
cout<<*i3<<endl;
cout<<*i4<<endl;
cout<<*i5<<endl;

delete i1;
delete i2;
delete i3;
delete i4;
delete i5;

return 0;
}
