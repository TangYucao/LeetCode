class Solution {
public:
    int climbStairs(int n) {
        vector<int> res(n+1);
        if(n==1||n==2) return n;
        res[0]=1;
        res[1]=1;
        int i=2;
        while(i<=n)
        {
            res[i]=res[i-1]+res[i-2];
            i++;
        }
        
        return res[n];
    }
};