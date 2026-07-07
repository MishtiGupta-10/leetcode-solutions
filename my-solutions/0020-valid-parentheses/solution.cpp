class Solution {
public:
    bool isValid(string s) {
        stack <char> paran;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                paran.push(c);
            }

            else{
                if(c ==')'){
                    if(!paran.empty() && paran.top() == '(')
                        paran.pop();
                    else return false;
                }
                else if(c == ']'){
                    if(!paran.empty() && paran.top() == '[')
                        paran.pop();
                    else return false;
                }
                else if(c == '}'){
                    if(!paran.empty() && paran.top() == '{')
                        paran.pop();
                    else return false;
                }
            }
        }

        if(paran.empty()){
            return true;
        }

        return false;
    }
};
