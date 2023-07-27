// // Return index of leftmost non-repeating character

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
        if (fIndex[s[i]] == -1)
        {
            fIndex[s[i]] = i;
        }
        else
        {
            fIndex[s[i]] == -2;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (fIndex[i] >= 0)
        {
            res = min(res, fIndex[i]);
        }
    }

    return (res == INT_MAX) ? -1 : res;
}
int main()
{
    string str = "samruddhi";

    cout << leftmost(str);

    return 0;
}