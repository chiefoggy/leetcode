class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (count(nums.begin(), nums.end(), target) == 0) return -1;
        int start = 0;
        int end = nums.size() - 1;
        while (start < end){
            int mid = (start + end) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        return start;
    }
};
