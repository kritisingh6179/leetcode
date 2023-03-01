class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(mp.find(key-nums[i]) != mp.end()){
                v.push_back(i);
                v.push_back(mp[key-nums[i]]);
                return v;
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
