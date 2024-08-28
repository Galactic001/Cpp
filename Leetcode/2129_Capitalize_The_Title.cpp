/*
Be Smart when you copy the code

*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static string capitalizeTitle(string title)
    {
        transform(title.begin(), title.end(), title.begin(), ::tolower);

        int count = 0;
        for (int i = 0; i < title.size(); i++)
        {
            if (title[i] != ' ')
            {
                count++;
            }
            else {
                count = 0;
            }

            if (count == 3)
            {
                title[i-2] = ::toupper(title[i-2]);
            }
        }

        return title;
    }
};

int main()
{
    string x = "aman aName ia i iiaioUBHBSFHBSDHMFVVBED";
    cin >> x;
    string val = Solution::capitalizeTitle(x);
    cout << endl
         << val;
}