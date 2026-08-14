class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1||n==1) return 1;
        long int c=1;
        int k=(m+n-2);
        if((m-1)>=(n-1)){
            int l=m;
        for(int i=1 ; i<n ; i++){
          c = c*(k-i+1);
          c /=i;
        }
        return (c);
        }
        else{
        int l=n;
        for(int i=1 ; i<m ; i++){
          c= c*(k-i+1);
          c /=i;
        }
        return (c);
        }
    }
};  