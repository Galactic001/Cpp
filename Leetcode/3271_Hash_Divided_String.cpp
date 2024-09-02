#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static string stringHash(string s, int k)
    {

        int x = s.size() / k;
        int y = 0;
        string res;

        for (int i = 0; i < s.size(); i = i + k)
        {
            int sum = 0;
            string hashedchar;
            string result = s.substr(i, k);

            for (int j = 0; j < k; j++)
            {
                y = result[j] - 97;
                cout << " j :" << result[j] << " " << y << endl;
                sum += y;
                sum = sum % 26;
                hashedchar = sum + 97;
            }

            cout << "sum:" << sum << endl;
            cout << "hashedchar: " << hashedchar << endl;
            res = res + hashedchar;
            cout << result << endl;
        }
        cout << "res: " << res << endl;
        return res;
    }
};

int main()
{
    string s;
    int x;
    cin >> s;
    cin >> x;
    string val = Solution::stringHash(s, x);
    cout << endl
         << val;
}