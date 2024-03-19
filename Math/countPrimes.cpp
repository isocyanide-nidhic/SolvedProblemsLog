/*LEETCODE 204. Count Primes
Given an integer n, return the number of prime numbers that are strictly less than n.
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Edge case if n<2 return 0;
*/
//    TC : O(n*log(log(n)))     SC:O(N)
//SOLN 
class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) {
            return 0;
        }
        int count = 0;
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++;

                for (int j = 2 * i; j < n; j = j + i) {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};
