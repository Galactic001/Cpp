#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool detectCapitalUse(string word)
    {
        int s = 0, fl = 0;

        for (int i = 0; i <= word.size(); i++)
        {
            if (isupper(word[0]))
            {
                fl = 1;
            }
            if (islower(word[i]))
            {
                s++;
            }
        }

        if (s == word.size() || s == 0 || (s == word.size() - 1 && fl == 1))
        {
            cout << s << endl;
            cout << fl;
            return true;
        }
        cout << "s: " << s << "fl: " << fl;
        return false;
    }
};

int main()
{
    string x;
    cin >> x;
    bool val = Solution::detectCapitalUse(x);
    cout << endl
         << val;
}