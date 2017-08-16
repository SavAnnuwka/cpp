#include <iostream>


using namespace std;

class CAb {
public:  virtual void f(char &&st) ;


};

template <typename T>
class B: CAb {
public:  virtual void f(char &&string);
};


int main() {


    cout << "Hello, World!" << endl;
    cout << "Hello, World!" << endl;
    return 0;
}



