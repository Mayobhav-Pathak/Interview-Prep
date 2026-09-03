/*
*Problem - Valid Perfect Square (Leetcode Problem -367)
*Time complexity - O(log n)
*Space Complexity - O(1)
*/
class Solution{
    public:
    bool isPerfectSquare(int num){
        if (num < 0 ) return false;
        if(num == 1) return true;
        int left = 0;
        int right = num/2;
        while(left <= right){
            int mid = (left+right)/2;
            long long int sq = (long long) mid*mid;
            if(sq == num) return true;
            else if (sq<num) left = mid+1;
            else right = mid-1;
        }
        return false;

    }
}