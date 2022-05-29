#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// write a program to cout is highest times repeated character and character.......

int main()
{
    string s = "abaa";

    int frq[26];

    for (int i = 0; i < 26; i++)
    {
        frq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        frq[s[i] - 'a']++;
        // 1,
        // cout << frq[s[i] - 'a'] << endl;
    }
    // cout << 'b' - 'a' << endl;

    char ans = 'a';
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        if (frq[i] > maxf)
        {
            maxf = frq[i];
            ans = i + 'a';
        }
    }

    cout << maxf << " " << ans << endl;
}