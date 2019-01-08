#include <iostream>

using namespace std;

int main(void)
{
    const int a = 10;
    const int &b = a;
    cout << a <<endl;
    cout << b <<endl;
   // b = 11;//error
    cout << b << endl;
    return 0;
}
