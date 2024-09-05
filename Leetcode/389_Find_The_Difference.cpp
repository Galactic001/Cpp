#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static char findTheDifference(string s, string t) {
        char c;
        int sSum = 0, tSum = 0;

        for (int i = 0; i<s.size(); i++)
        {
            sSum = int(s[i]) + sSum;
            cout << "sSum :" << sSum << endl;
        }
        for (int j = 0; j<t.size(); j++)
        {
            tSum = int(t[j]) + tSum;
            cout << "tSum :" << tSum << endl;
        }
        c = (tSum - sSum);
        cout << c << endl;
        return c;
    }
};

 int main()
{
string x,y;
cin >> x >> y;
char val = Solution::findTheDifference(x,y);
cout << endl << val;
}