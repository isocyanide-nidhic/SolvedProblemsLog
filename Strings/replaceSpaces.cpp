/*Problem statement
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
input: I love coding
output: I@40love@40coding*/

//SOLN 1 : TC :O(N) and SC:O(N)
class Solution1 {
string replaceSpaces(string& str) {
    string temp = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
};


//SOLN 2 : TC: O(N) and SC: O(1) :

class Solution2 {
public:
    string replaceSpaces(string& str) {
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                str.replace(i, 1, "@40");
            }
        }
        return str;
    }
};
