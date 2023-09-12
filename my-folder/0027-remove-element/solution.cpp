class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newSize = 0; // New size of the array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[newSize] = nums[i]; // Store odd number in the same array
            newSize++;
        }
    }
    return newSize;
    }
};
