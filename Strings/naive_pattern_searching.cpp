// Naive Pattern Searching

#include <bits/stdc++.h>
using namespace std;

void pattern_search(string s, string pat)
{
    int n = s.length();
    int m = pat.length();

    for (int i = 0; i < n - m; i++)
    {
        int j;
        for (int j = 0; j < m; j++)
        {
            if (pat[j] != s[i + j])
            {
                break;
            }
        }

        if (j == m)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    string s = "Samruddhi";
    string pattern = "amru";

    pattern_search(s, pattern);

    return 0;
}