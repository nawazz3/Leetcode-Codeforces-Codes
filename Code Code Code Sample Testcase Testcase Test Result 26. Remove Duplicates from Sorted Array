class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // I can use set,Hash_map O(n) complexity
        //HashMap is used to preserve order of element;
        unordered_map<int,bool>map;
        int k=1;//To keep track of unique elements 
        //You can use vector to get result just use v.push_back(instead of k++;
        int i=0,j=1;
        map[nums[i]]=true;
        while(j<nums.size()){
            if(map.find(nums[j])==map.end()){
                k++;
                map[nums[j]]=true;
                nums[++i]=nums[j];
            }
            j++;
            
        }

        return k;  
    }
};
