class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] temp = Arrays.copyOf(nums,nums.length);
        for(int i=1;i<nums.length;i++){
            nums[i]*=nums[i-1];
        }
        int right=1;
        for(int i=nums.length-1;i>=0;i--){
            int curr = temp[i];
            if(i==0){
                temp[i]=right;
            }
            else{
                temp[i]=nums[i-1]*right;
            }
            right*=curr;
        }
        return temp;
    }
}
