// Check for anagram

#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    const int CHAR = 256;

    if (s1.length() != s2.length())
    {
        return false;
    }

    int count[CHAR] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]++;
    }

    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    string s1 = "brush";
    string s2 = "shrub";

    if (anagram(s1, s2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";

    return 0;
}