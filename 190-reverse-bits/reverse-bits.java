class Solution {
    public int reverseBits(int n) {

        int solution=0;
        for(int i=0;i<32;i++){
            solution<<=1;
            solution=solution|(n&1);
            n>>=1;
        }
        return solution;

    
        
    }
}