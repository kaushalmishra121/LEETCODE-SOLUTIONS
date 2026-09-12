class Solution {
public:
    int findLeft(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                result = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return result;
    }

    int findRight(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                result = mid;
                low=mid+1;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {findLeft(nums, target), findRight(nums, target)};
    }
};