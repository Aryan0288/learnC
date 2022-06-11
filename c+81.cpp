#include <iostream>
using namespace std;

string rd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    // cout << ch << "<-ch" << endl;
    string ans = rd(s.substr(1));
    cout << ch << "<-ch" << endl;
    cout << ans << "<-ans" << endl;
    if (ch == ans[0])
    {
        cout << ans << "<-ans2" << endl;
        return ans;

        // cout << ans << "<-bb" << endl;
    }
    cout << "ch+ans->" << (ch + ans) << "<-ch+ans " << endl;
    return (ch + ans);
}

int main()
{
    cout << rd("aarryy");
}