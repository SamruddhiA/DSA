// Return index of leftmost non-repeating character

#include <bits/stdc++.h>
using namespace std;

int nonrep(string s)
{
    bool flag = false;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                        }
        }

        if (flag == false)
        {
            return i;
            break;
        }
    }

    return -1;
}

int main()
{
    string s = "geeksforgeeks";

    cout << nonrep(s);

    return 0;
}