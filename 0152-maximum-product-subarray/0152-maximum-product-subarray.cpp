class Solution {
private:
    
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int ma = ans;
        int mi = ans;
        
        for(int i = 1;i < nums.size() ; i++){
            
            if(nums[i] < 0){
                swap(ma,mi);
            }
            ma = max(nums[i] , ma*nums[i]);
            mi = min(nums[i] , mi*nums[i]);
            
            ans = max(ans,ma);
        }
        return ans;
    }
};