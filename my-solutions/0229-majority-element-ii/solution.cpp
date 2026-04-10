class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int el1 = INT_MIN, el2 = INT_MIN;
        int count1 = 0, count2 = 0;

        for(int i=0; i<n; i++){
            if(count1==0 && el2!=nums[i]){
                el1 = nums[i];
                count1++;
            }
            else if(count2==0 && el1!=nums[i]){
                el2 = nums[i];
                count2++;
            }
            else if(nums[i] == el1){
                count1++;
            }
            else if(nums[i] == el2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1=0, count2=0;

        for(int i=0; i<n; i++){
            if(nums[i]==el1){
                count1++;
            }
            else if(nums[i]==el2){
                count2++;
            }
        }

        int min_occur = int(n/3) + 1;
        vector<int> result;

        if(count1>=min_occur){
            result.push_back(el1);
        }
        if(count2>=min_occur){
            result.push_back(el2);
        }

        return result;

    }
};
