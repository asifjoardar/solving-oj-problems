class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int i;
        vector<vector<int>> ans;
        vector<pair<int,int>>dummy;
        for(i=0;i<intervals.size();i++){
            dummy.push_back({intervals[i][0], intervals[i][1]});
        }
        sort(dummy.begin(), dummy.end());
        int start = dummy[0].first, end = dummy[0].second;
        for(i=1;i<dummy.size();i++){
            if(end>=dummy[i].first){
                if(end<=dummy[i].second)
                    end = dummy[i].second;
            }
            else{
                vector<int>temp;
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
                start = dummy[i].first;
                end = dummy[i].second;
            }
        }
        vector<int>temp;
        temp.push_back(start);
        temp.push_back(end);
        ans.push_back(temp);
        return ans;
    }
};
