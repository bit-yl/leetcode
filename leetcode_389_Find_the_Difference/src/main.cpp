/*
 * main.cpp
 *
 *  Created on: Mar 20, 2017
 *      Author: yl
 */

/*
 *
Given two strings s and t which consist of only lowercase letters.

String t is generated by random shuffling string s and then add one more letter at a random position.

Find the letter that was added in t.

Example:

Input:
s = "abcd"
t = "abcde"

Output:
e

Explanation:
'e' is the letter that was added.


"a"
"aa"
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {

    	char result;
    	int tmp_position = -1;
    	for (string::size_type i = 0; i < s.size(); i++) {
    		tmp_position = (int)t.find(s[i]);
    		cout << "s[i]:" << s[i] << endl;
    		cout << "tmp_position:" << tmp_position << endl;
    		cout << "t:" << t << endl;
    		if (tmp_position != -1) {
    			t.erase(tmp_position, 1);
    		}
    		cout << "t:" << t << endl;
    	}

    	result = t[0];
    	return result;
    }
};

int main() {

	Solution solution;
	string s = "a";
	string t = "aa";
	char result = solution.findTheDifference(s, t);
	cout << "result:" << result << endl;
	return 0;
}