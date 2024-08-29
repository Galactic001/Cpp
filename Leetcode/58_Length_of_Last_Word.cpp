#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static int lengthOfLastWord(string s) {
        
        int i = s.size(), lw =0;
        while ( i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while ( i >= 0 && s[i] != ' ')
        {
            i--;
            lw++;
        }
        return lw;
    }
};

 int main()
{
string x = "A man in The";
// cin >> x;
int val = Solution::lengthOfLastWord(x);
cout << endl << val;
}