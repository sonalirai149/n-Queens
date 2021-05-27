class Solution {
public:
    void find(int ind,int target,vector<int> &a,vector<int> &ds,vector<vector<int>> &ans){
            if(target==0){
                ans.push_back(ds);
                return;
            }
        for(int i=ind;i<a.size();i++){
            if(i>ind && a[i]==a[i-1]){
                continue;
            }
            if(a[i]>target){
                break;
            }
            ds.push_back(a[i]);
            find(i+1,target-a[i],a,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(c.begin(),c.end());
        find(0,target,c,v,ans);
        return ans;
    }
};
