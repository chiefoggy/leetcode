class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0, zeroNum = 0;
        while(count < nums.size() - zeroNum){
            if (nums[count] == 0){
                nums.erase(nums.begin() + count);
                nums.push_back(0);
                zeroNum++;
            }
            else count++;
        }
    }
};
