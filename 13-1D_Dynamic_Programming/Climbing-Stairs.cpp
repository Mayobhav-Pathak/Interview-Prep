class Solution {
public:
    int climbStairs(int n) {
        unsigned long long int i=1;
        long int j=1;
        unsigned long long int k=1;
        unsigned long long int h=0;
        if (n==1){
            return 1;
        }
        else{
        while (j<(n)){
            h=i+k;
            i=k;
            k=h;
            j++;
        }
        return (h);
        }
        
    }
};
