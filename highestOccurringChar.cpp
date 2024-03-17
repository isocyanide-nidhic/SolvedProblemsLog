/*Question: Problem statement
For a given a string(str), find and return the highest occurring character.

Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.

Consider:
Assume all the characters in the given string to be in lowercase always.
*/
class Solution {

char highestOccurringChar(char input[]) {

    int arr[26] = {0};

//store count of the chararcter in the array
  
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

  //find max occurred character from the array 
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}
}
