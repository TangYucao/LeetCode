class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int r=0;
        while(1)
        {
            vector<int> heatersR(heaters);
            vector<int> tmp(heaters);

            for(auto heater:heatersR)
            {
                for(int i=1;i<=r;i++)
                {

                    tmp.push_back(heater-i);
                    tmp.push_back(heater+i);
                }
                
            }
               heatersR.assign(tmp.begin(),tmp.end());

         // for(auto heater:heatersR)
         //     {  
         //          cout<<heater<<endl;
         //      }
            if(ifCover(houses,heatersR)) 
            {

                break;
            }
            r++;
        }
        return r;
    }
    bool ifCover(vector<int>& houses, vector<int>& heatersR)
    {
        for(auto house:houses)
        {
            if(find(heatersR.begin(),heatersR.end(),house)==heatersR.end())
                return false;
        }
        return true;
    }
};