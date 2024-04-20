#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
		cin >> c;
        if (int(c) <= 122 && int(c) >= 97) {
          cout << "0";
        }
		else if (int(c) <= 90 && int(c) >= 65) {
			cout << "1";
		}
		else {
			cout << "-1";
		}

        return 0;
}
