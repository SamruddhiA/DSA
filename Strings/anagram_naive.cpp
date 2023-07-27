// Check for anagram

#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return (s1 == s2);
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
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