class Solution {
public:
    int numberOfSteps(int num) {

        if(num == 0){
            return 0;
        }
        
        else if(num%2 == 0){
            num = num/2;
            return 1 + numberOfSteps(num);
        }
        else {
            num = num-1;
            return 1 + numberOfSteps(num);
        }

        return 0;
    }
};
