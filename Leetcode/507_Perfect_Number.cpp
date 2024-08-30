#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
   static bool checkPerfectNumber(long long num) {
        
        long long sum;

        if (num == 1)
        {
            return false;
        }

        for (long long i = 1; i * i < num; i++)
        {
            if (num % i == 0)
            {
                cout << i << endl;
                sum += i;
                sum += num/i;
            }
        }
        if ( sum == num)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

 int main()
{
long long x;
cin >> x;
bool val = Solution::checkPerfectNumber(x);
cout << endl << val;
}