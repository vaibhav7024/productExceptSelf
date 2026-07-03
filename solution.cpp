class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int mul=1;
        for(int i=0;i<n;i++){
            mul*=nums[i];
            res[i]=mul;
        }
        mul=nums[n-1];
        res[n-1]=res[n-2];

        for(int i=n-2;i>=0;i--){
            if(i==0){
                res[i]=mul;
            }else{
                res[i]=res[i-1]*mul;
                mul*=nums[i];
            }
        }
        return res;
    }
};
