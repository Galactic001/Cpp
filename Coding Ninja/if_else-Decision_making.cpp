#include <bits/stdc++.h>

using namespace std;

// Method 1
string compareIfElse(int a, int b) {
	// Write your code here
	// string ans="";
	if (a>b){
		return "greater";
	}
	else if(a==b){
		return "equal";
	}
	else {
		return "smaller";
	}
	return "";
}


// Method 2
string compareIfElse(int a, int b) {
	// Write your code here
	string ans="";
	if (a>b){
		ans += "greater";
	}
	else if(a==b){
		ans += "equal";
    }
    else {
        ans += "smaller";
	}
	return ans;
}
// Method 2 Explanation:
// The function has to return a string, so we declare a string variable ans and initialize it to an empty string.
// Then we check all conditions and append the result to the ans string.
// We append the string instead of directly assigning it to ans as in return statement without appending, the return statement will be ambiguous.
/* Eg:
        string ans;
        if (a>b){
            ans = "greater";
        }
*/
// return ans; // This will give an error as the return statement is ambiguous.