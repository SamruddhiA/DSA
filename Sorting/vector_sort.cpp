#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {6, 9, 8, 7, 1};
    sort(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}