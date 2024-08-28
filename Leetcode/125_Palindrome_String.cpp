#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool isPalindrome(string s)
    {

        transform(s.begin(),s.end(),s.begin(),::tolower);
        int length = s.length();
        string reverse = "";
        int c = 0;
        for (c = 0; c < length; c++)
        {
            if (s[c] >= 'a' && s[c] <= 'z' || s[c] >= '0' && s[c] <= '9')
            {
                reverse += s[c];
            }
        }
            cout << "reverse: " << reverse << endl;

        int len = reverse.length();

        string rev;

        for (int i = 0; i < len; i++)
        {
            rev += reverse[len - 1 - i];
        }

        cout << "rev: " << rev;
        if (reverse != rev)
        {
            return false;
        }
        return true;
    }
};

int main()
{
    string s = "0P";
    // cin >> s;
    bool val = Solution::isPalindrome(s);

    cout << endl << val;
}