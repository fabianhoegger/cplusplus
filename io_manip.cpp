#include <iomanip>

int main(){
  float tenth = 0.1;
  float one   = 1.0;
  float big   = 1234567890.0;
  cout<< "A. "<<tenth<<","<<one<<","<<big<<endl;
  cout<<"B. "<<fixed<<tenth<<endl;
  cout<<"C. "<<fixed<<setprecision(3)<<tenth<<end;
  cout<<"C. "<<scientific<<tenth<<end;


}
/*
A. 0.1, 1, 1.23457e+
*/
