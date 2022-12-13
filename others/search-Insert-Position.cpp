class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, m = l + (r - l) / 2;
        while(l <= r){
            if(nums[m] == target) return m;
            if(nums[m] > target) r = m - 1;
            else l = m + 1;
            m = l + (r - l) / 2;
        }
        return l;
    }
};
