#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static int mySqrt(int x) {
        
        int odd = 1, root = 0;

        while (x >= 0)
        {
            x -= odd;
            odd += 2;
            root++;

                if (x < 0)
                {
                    root-=1;
                }
        }
        return root;
    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::mySqrt(x);
cout << endl << val;
}