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
    cout << "Hello, World1!" << endl;
    cout << "Hello, World2!" << endl;
    cout << "Hello, World3!" << endl;
    cout << "Hello, World4!" << endl;
    return 0;
}


