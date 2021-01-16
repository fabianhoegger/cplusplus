#include <iostream>
#include <iomanip>
using namespace std;
void swap_by_val(int x,int y){
    int temp=x;
    x=y;
    y=temp;

}
void swap_pointers(int*xptr, int*yptr) {
  int temp = *xptr;
  *xptr=*yptr;
  *yptr=temp;
 }
void swap_by_ref(int &x,int &y){
  int &temp=x;
  x=y;
  y=temp;
}
int main()
{
    int var1=1;
    int var2=2;
    swap_pointers(var1,var2);
    cout<<var1<<","<<var2<<endl
}
