// Reverse words in a string

#include <bits/stdc++.h>
using namespace std;

void reverse(string s, int low, int high)
{
    while (low < high)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
}
string reversewords(string s, int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (s[end] == ' ')
        {
            reverse(s, start, end - 1);
            start = end + 1;
        }
        }
    reverse(s, start, n - 1);
    reverse(s, 0, n - 1);

    return s;
}
int main()
{
    string s = "abc def";

    int n = sizeof(s) / sizeof(s[0]);

    string str = reversewords(s, n);
    cout << str;

    return 0;
}