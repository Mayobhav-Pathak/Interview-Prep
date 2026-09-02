/*
*Problem - Palindrome Number (Leetcode Problem -9)
*Time Complexity - O(1) (or actually O(logn) )
*Space Complexity - O(1)
  */
class Solution {
public:
    bool isPalindrome(int x) {
  int y=0;
	int t=x;
if(x>0){
    	while (t>0 ) {
        if (y > INT32_MAX / 10) return false; 
       y= y*10 + t%10;
		   t= t/10;
		}
		   
    return y==x;    
    }
 if(x==0) return 1;
 else return 0;
}
};
