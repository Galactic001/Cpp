#include <bits/stdc++.h>

using namespace std;

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 */
int guess(int num);

class Solution
{
public:
    static int guessNumber(int n)
    {
        int front = 1;
        int end = n;
        while (front <= end)
        {
            int mid = front + (end - front) / 2;

            int i = guess(mid);
            if (i == 0)
            {
                return mid;
            }
            else if (i == -1)
            {
                end = mid;
            }
            else if (i == 1)
            {
                front = mid + 1;
            }
        }
        return 0;

        /*
        // Without Binary Search, Complexity - O(n)
                int i = guess(n);

                if(i==0)
                {
                    return n;
                }
                else if ( i == -1)
                {
                    n--;
                    return guessNumber(n);
                }
                else if ( i == 1)
                {
                    n++;
                    return guessNumber(n);
                }
                return 0;
                */
    }
};

int main()
{
    int x;
    cin >> x;
    int val = Solution::guessNumber(x);
    cout << endl
         << val;
}