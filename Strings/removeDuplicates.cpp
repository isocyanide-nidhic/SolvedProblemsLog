/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
Example 2:
Input: s = "azxxzy"
Output: "ay"
*/

//SOLN 
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } else {
                temp.pop_back();
            }
        }
        return temp;
    }
};

/*MY APPROACH : TC: O(N) SC: O(N)
1)Create a empty string temp
2)make i=0
3)iterate till (i<length of string )
4)if either the string is empty or the char is not equal to the last char at temp
5)push the current character.
6)else pop the last character of the temp string.
    i++
    return temp;
*/ 
