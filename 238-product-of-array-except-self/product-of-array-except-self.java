class Solution {
    public int[] productExceptSelf(int[] nums) {


        // two looops

        int n = nums.length;

        int[] arr =  new int[n];

        int prefix=1;

        for(int i=0;i<n;i++){

            arr[i]=prefix;
            prefix*=nums[i];
        }

        int suffix=1;

        for(int j=n-1;j>=0;j--){
            arr[j]*=suffix;
            suffix*=nums[j];

        }


        return arr;
        
    }
}