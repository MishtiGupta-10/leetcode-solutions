class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        for(int i=1; i<=n; i++){
            bool divisibleby3 = i%3 == 0;
            bool divisibleby5 = i%5 == 0;

            if(divisibleby3 && divisibleby5){
                answer.push_back("FizzBuzz");
            }
            else if(divisibleby3){
                answer.push_back("Fizz");
            }
            else if(divisibleby5){
                answer.push_back("Buzz");
            }
            else {
                answer.push_back(to_string(i));
            }
        }

        return answer;
    }
};
