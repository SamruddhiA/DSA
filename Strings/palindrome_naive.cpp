// Check if string is a palindrome

// Naive Solution

#include <bits/stdc++.h>
using namespace std;

string palindrome(string s)
{
    string rev = s;

    reverse(rev.begin(), rev.end());

    if (rev == s)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
    string s = "fhfg";

    palindrome(s);

    return 0;
}