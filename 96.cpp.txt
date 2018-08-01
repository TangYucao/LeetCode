class Solution {
public:
    int numTrees(int n) {
        if(n==0) return 1;

        if(n==1) return 1;
        int result=0;
        for(int i=1;i<=n;i++)
        {
            result+=numTrees(n-i)*numTrees(i-1);
        }
        return result;
    }
    int helper(int i,unordered_set<int> s)//�ݹ飬
    {
        if(s.empty()) return 0;
        if(s.size()==1) return 1;

        s.erase(i);
        int result=0;
        for(auto rest:s)
        {
            result+=helper(rest,s);
        }
        return result;
    }
};