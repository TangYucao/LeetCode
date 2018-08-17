class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> res;
        // if(nums.size()<=1) return res;
        vector<int> subseq;
        dfs(nums,subseq,res,0);
        vector<vector<int>> result(res.begin(), res.end());
        return result;
    }
    
    
    void dfs(vector<int>& nums,vector<int>& subseq,set<vector<int>> &res,int index)
    {
        if(subseq.size()>=2) res.insert(subseq);
        for(int i=index;i<nums.size();i++)
        {
            if (subseq.size() == 0 || nums[i] >= subseq[subseq.size() - 1])
            {
                subseq.push_back(nums[i]);
                dfs(nums,subseq,res,i+1);
                subseq.pop_back();
            }
        }
    }
};