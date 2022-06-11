#include <iostream>
using namespace std;

void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    cout << "a-> " << ros << " + " << ans << " + " << ch << " <-a" << endl;
    subseq(ros, ans);
    cout << "b-> " << ros << " + " << ans << " + " << ch << " <-b" << endl;
    subseq(ros, ans + ch);
    cout << "c-> " << ros << " + " << ans << " + " << ch << " <-c" << endl;
}

int main()
{
    subseq("ABC", "");
}