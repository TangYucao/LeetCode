class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        set<vector<int>> res;
        int index=0;
        dfs(res,words,index);
        vector<vector<int>> result(res.begin(),res.end());
        return result;
    }
    void dfs(set<vector<int>> &res,vector<string>& words,int index)
    {
        if(index>=words.size()-1) return;
        for(int i=index+1;i<words.size();i++)
        {
            dfs(res,words,index+1);
            string tmps1=words[index]+words[i];
            string tmps2=words[i]+words[index];
            if(isp(tmps1)) {
                vector<int> tmp;
                tmp.push_back(index);
                tmp.push_back(i);
                res.insert(tmp);
            }
            if(isp(tmps2)) {
                vector<int> tmp;
                tmp.push_back(i);
                tmp.push_back(index);
                res.insert(tmp);
            }
        }
        
        
    }
        
    bool isp(string ss)
    {
        for(int i=0,j=ss.size()-1;i<=j;i++,j--)
        {
            if(ss[i]!=ss[j]) return false;
        }
        return true;
    }
};