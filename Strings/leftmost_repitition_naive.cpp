// Return index of leftmost repeating character

#include <bits/stdc++.h>

using namespace std;

void leftmost(string s)
{
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {

            if (s[i] == s[j])
            {
                cout << "The left-most repeating character is :"
                     << " " << s[i];
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            break;
        }
    }
}

int main()
{
    string str = "takeUforward";

    leftmost(str);

    return 0;
}
