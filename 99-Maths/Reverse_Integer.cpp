/*
 *Problem: Reverse Integer(Leetcode Problem-7)
 *Time Complexity : O(log x) , but it is technically O(1)
 *Space Complexity: O(1)
  */
class Solution {
public:
    int reverse(int x) {
        int c=0;
        while(x!=0){
            if (c < INT32_MIN/10 || c> INT32_MAX/10) {
         return 0;
            }
            c=c*10 + x%10;
            x/=10;
        }
        return c ;
        }  
};
