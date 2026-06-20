class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high= nums.size()-1;
        int low= 0;

        while(low<=high){
            if(target > nums[(high+low)/2])
            low = (high+low)/2 +1;

            if(target < nums[(high+low)/2])
            high = (high+low)/2 -1;

            if(target == nums[(high+low)/2])
            return (high+low)/2;
        }
        return -1;

    }
};
