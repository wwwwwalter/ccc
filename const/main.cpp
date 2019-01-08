#include <iostream>

using namespace std;

int main(void)
{
    const int a = 10;
    const int &b = a;
    const int &c = b;
    cout << a <<endl;
    cout << b <<endl;
   // b = 11;//error
    cout << c << endl;
    return 0;
}
