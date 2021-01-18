#include <iostream>
using namespace std;
class Base {
    protected:
       virtual void hello()
        {
            cout << "base hello\n";
        }
    public:
        void process()
        {
            hello();
        }
    };
class Derived: public Base {
    public:
        void hello() override
        {
            cout << "derived hello\n";
        }
    };
    int main() {
        Derived derived;
        derived.process();
    }
