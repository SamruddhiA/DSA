// Check if string is a palindrome

// Efficient Solution

#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int begin = 0;
    int last = s.size() - 1;

    while (begin < last)
    {
        if (s[begin] != s[last])
        {
            return false;
        }

        begin++;
        last--;
    }

    return true;
}

int main()
{
    string s = "ABCCBA";

    cout << palindrome(s);

    return 0;
}