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
