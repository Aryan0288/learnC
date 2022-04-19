#include <iostream>
using namespace std;

class student
{
private:
    int scroce[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scroce[i];
        }
    }

    int caltotscore()
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            count += scroce[i];
        }
        return count;
    }
};

int main()
{
    int n;
    cin >> n;
    student *s = new student[n];

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    int krishan_score = s[0].caltotscore();

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int total = s[i].caltotscore();
        if (total > krishan_score)
        {
            count++;
        }
    }

    return 0;
}