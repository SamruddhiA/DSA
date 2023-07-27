// Return index of leftmost repeating character

#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

int leftmost(string s)
{
    int count[CHAR] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i]] > 1)
        {
            return i;
            break;
        }
    }

    return -1;
}

int main()
{
    string str = "samruddhi";

    cout << leftmost(str);

    return 0;
}