// Complexity O(1)

#include <bits/stdc++.h> 

using namespace std; 

    class Solution {
public:
    static int addDigits(int num) {
        
        int k = num;
        while(k / 10 >= 1)
        {
            int sum = 0;
            while(k != 0)
            {
                sum = sum + k % 10;
                cout << "sum :" << sum << endl;
                k /= 10;
                cout << "num: " << num << endl;
            }
            k = sum;
            cout << "k:" << k << endl;
        }
        return k;

    }
};

 int main()
{
int x;
cin >> x;
int val = Solution::addDigits(x);
cout << endl << val;
}