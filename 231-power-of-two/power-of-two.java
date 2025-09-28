class Solution {
    public boolean isPowerOfTwo(int n) {

        if(n==0)return false;
        if(n==1)return true;


        while(n%2==0){
            n/=2;
        }

        return n==1;

        
    //     int sum=1;
    //     for(int i=1;i<=n;i++){
    //         sum=sum*2;
    //         if(sum==n){
    //             return true;
    //         }
    //         else if(sum>n){
    //             break;
    //         }
    // }

    // return false;

    }
}