class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image.size()==0) return image;
        vector<vector<int>> m(image.size(), vector<int>(image[0].size(), 0));
        cout<<m[0].size()<<m.size()<<endl;
        int oldColor=image[sr][sc];
        // image[sr][sc]=newColor;
        // m[sr][sc]=1;
        dfs(image,sr,sc,newColor,oldColor,0,0,m);
        // dfs(image,sr,sc+1,newColor,oldColor,0,1,m);
        // dfs(image,sr-1,sc,newColor,oldColor,1,0,m);
        // dfs(image,sr,sc-1,newColor,oldColor,1,1,m);
        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int oldColor,int a,int b,vector<vector<int>>&m)//,vector<vector<int>> &res)
    {

        if(sr>=image.size()||sr<0||sc>=image[0].size()||sc<0) return ;
        if(image[sr][sc]!=oldColor) return;
        if(m[sr][sc]==1)return;
                        // cout<<sr<<","<<sc<<endl;

        image[sr][sc]=newColor;
        m[sr][sc]=1;
        // if(!(a==1&&b==0))
        dfs(image,sr+1,sc,newColor,oldColor,a,b,m);
        // if(!(a==1&&b==1))
        dfs(image,sr,sc+1,newColor,oldColor,a,b,m);
        // if(!(a==0&&b==0))
        dfs(image,sr-1,sc,newColor,oldColor,a,b,m);
        // if(!(a==0&&b==1))
        dfs(image,sr,sc-1,newColor,oldColor,a,b,m);
        
    }
};