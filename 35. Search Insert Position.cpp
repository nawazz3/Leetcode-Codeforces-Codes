int magic(vector<int>& nums,int target,int low,int high){
    int mid=(low+high)/2;
    if (low > high) return low;
    if(nums[mid]==target) return mid;
    if(nums[mid]<target){
        return magic(nums, target, mid + 1, high);
    }
    return magic(nums,target,low,mid-1);
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        return magic(nums,target,0,n-1);
    }
};
