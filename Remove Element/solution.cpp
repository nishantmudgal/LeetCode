class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0, curr = 0;
        for(auto num: nums) {
            if (num != val) {
                count++;
                nums[curr] = num;
                curr++;
            }
        }
        return count;
    }
};