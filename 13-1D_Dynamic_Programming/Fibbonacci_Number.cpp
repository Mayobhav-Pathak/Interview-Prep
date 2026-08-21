/*
*Problem - Fibbonacci Number (Leetcode Problem-509)
*Time Complexity: O(N)
*Space Complexity:O(1)
*Strategy: This solution uses an iterative approach with a for loop to compute the Fibonacci number efficiently, avoiding the overhead of recursion.
It maintains three variables (k, j, and h) to track the sequence values and update them on-the-fly. 
This state-tracking strategy achieves an optimal $O(1)$ space complexity without needing an array to store previous results.
  */
class Solution {
public:
    int fib(int n) {
         int k=1;
        int h=0;
        int j=0;
        if (n==0) return 0;
        if (n==1) return 1;
        for (int i=0 ; i<=(n-2); i++){
            h=k+j;
            j=k;
            k=h;
        }
        return h;
    }
