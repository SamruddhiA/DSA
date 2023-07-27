// Return index of leftmost repeating character

#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;

int leftmost(string &s)
{
    int fIndex[CHAR];

    fill(fIndex, fIndex + CHAR, -1);
    int res = INT_MAX;

    for (int i = 0; i < s.length(); i++)
    {
        int fi = fIndex[s[i]];

        if (fi == -1)
        {
            fIndex[s[i]] = i;
        }
        else
        {
            res = min(res, fi);
        }

        return (res == INT_MAX) ? -1 : res;
    }
}
int main()
{
    string str = "samruddhi";

    cout << leftmost(str);

    return 0;
}