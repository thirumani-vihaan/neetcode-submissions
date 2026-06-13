class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int cunt=1,mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){cunt=cunt;}
          else if(nums[i]-nums[i-1]==1)cunt++;
        else{
        mx=max(mx,cunt);
        cunt=1;
      }
      mx=max(mx,cunt);
        }
        return mx;
    }
};
