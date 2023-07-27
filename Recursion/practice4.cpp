// Prints binary equivalent of n where n>0

#include <iostream>
using namespace std;

void func(int m)
{
    if (m == 0)
    {
        return;
    }
    else
    {
        func(m / 2);
        cout << (m % 2) << endl;
    }
}
int main()
{
    func(13);
}