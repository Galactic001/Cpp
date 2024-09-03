#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static string convertToTitle(int columnNumber)
    {
        string result;
        int div = 26;

        while (columnNumber > div) {
            cout << "col: " << columnNumber << endl;

            int temp = columnNumber % div;

            cout << "temp:" << temp << endl;
            
            if (temp == 0) {
                temp = div;
                columnNumber--;
            }
            else{
                columnNumber -=temp;
            }
            
            result += ('A' + temp - 1);
            columnNumber /= div;
            cout << "column: " << columnNumber << endl;
        }

        result = char('A' + columnNumber - 1) + result;

        cout << "result: " << result << endl;
    
        return result;
    }
};

        // string str = "";
        // while (columnNumber > 0)
        // {
        //     int index = (columnNumber - 1) % 26;
        //     cout << "Index: " << index << ", column: " << columnNumber<< endl;
        //     str = char('A' + index) + str;
        //     cout << str << endl;
        //     columnNumber = (columnNumber - 1) / 26;
        //     cout << "Column: " << columnNumber << endl;
        // }
        // return str;
    // }
// };

int main()
{
    int x;
    cin >> x;
    string val = Solution::convertToTitle(x);
    cout << endl
         << val;
}