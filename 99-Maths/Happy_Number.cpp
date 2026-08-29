/*
*Problem - Happy Number (Leetcode Problem-202)
  */
class Solution {
public:
    bool isHappy(int n) {
        if (n==1) return true;
        unordered_set<int> seen;

        while(n != 1){

            if(seen.count(n))
                return false;

            seen.insert(n);
            unsigned long int c=0;

        while(n>0){
            c+= ((n%10)*(n%10));
            n/=10;
        }
        n=c;
         }
        return true;

    }
};
