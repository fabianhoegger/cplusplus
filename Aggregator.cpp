/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Aggregator {
  int *numbers_arr;
  int numbers_size;
  int next_number=0;
  public:
//constructor
  Aggregator(int);
  //destructor
  ~Aggregator();
  void add_number(int);
  int sum_all();
  void displayAddresses() const;
  void operator=(Aggregator const &other);
  Aggregator(Aggregator const &other);
  };
Aggregator::Aggregator(int n) {
  //constructor
  numbers_size = n;
  numbers_arr = new int[n];
  cout << "Aggregator size " << numbers_size << " constructed." << endl;
  }
 Aggregator::~Aggregator() {
  //deconstructor
  delete[] numbers_arr;
  cout << "Aggregator size " << numbers_size << " cleaned up." << endl;
}
void Aggregator::add_number(int i) {
  if ( next_number < numbers_size) {
     numbers_arr[next_number++] = i;
       }
  else
      cout << "Aggregator already full.";
 }
 int Aggregator::sum_all() {
  int sum=0;
  for ( int i=0; i<numbers_size; i++){
     sum += numbers_arr[i];
   }
  return sum;
 }
int main() {
  int nums;
  cout << "Πόσους αριθμούς θα αθροίσετε;\n" ;
  cin >> nums;
  Aggregator agg = Aggregator(nums);
  int in;
  for ( int i=0; i<nums; i++) {
  cout << "Αριθμός " << (i+1) << "ος: " ;
  cin >> in; agg.add_number(in);
  }
  cout << "Άθροισμα= " << agg.sum_all();
}
