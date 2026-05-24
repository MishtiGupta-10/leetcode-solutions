class Solution {
public:
    int numberOfDigits(int num){
        int count = 0;
        while(num!=0){
            num = num/10;
            count++;
            numberOfDigits(num);
        }
        return count;
    }
    
    int findNumbers(vector<int>& nums) {
        int even_count = 0;
        
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            count = numberOfDigits(nums[i]);
            if(count %2 == 0){
                even_count++;
            }
        }
        
        return even_count;
    }
};
