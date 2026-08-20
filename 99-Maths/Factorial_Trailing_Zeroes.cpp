/*
 *Problem- Factorial Trailing Zeroes (Leetcode Problem-172)
 *Time Complexity:O(logn)
 *Space Complexity: O(1)
 *Stategy:The Trailing zeroes come from a pair of 2 and 5. Since the frequency of 5 will be less , we will fing the number of 5's in the factorial of the number to find the soln.
  */
class Solution {
public:
    int trailingZeroes(int n) {
        int j=0;
        while(n>0){
            n /=5;
            j +=n;
        }
        return j;
    }
};
