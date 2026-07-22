class Solution {
public:
    vector<int> findNSE(vector<int>& nums){

        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }

            ans[i] = !st.empty() ? st.top() : n;

            st.push(i);
        }

        return ans;
    }

    vector<int> findPSEE(vector<int>& nums){

        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }

            ans[i] = !st.empty() ? st.top() : -1;

            st.push(i);
        }

        return ans;
    }

    vector<int> findNGE(vector<int>& nums){
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }

            ans[i] = !st.empty() ? st.top() : n;

            st.push(i);
        }

        return ans;
    }

    vector<int> findPGEE(vector<int>& nums){
        
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=0; i<n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }

            ans[i] = !st.empty() ? st.top() : -1;

            st.push(i);
        }

        return ans;
    }


    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();
        long long sumMin = 0;
        long long sumMax = 0;
        long long range = 0;

        vector<int> nse = findNSE(nums);
        vector<int> psee = findPSEE(nums);
        vector<int> nge = findNGE(nums);
        vector<int> pgee = findPGEE(nums);

        for(int i=0; i<n; i++){
            int leftMin =  i - psee[i];
            int rightMin = nse[i] - i;

            long long freqMin = leftMin*rightMin*1LL;

            sumMin += freqMin*nums[i]*1LL;

            int leftMax = i - pgee[i];
            int rightMax = nge[i] - i;

            long long freqMax = leftMax*rightMax*1LL;

            sumMax += freqMax*nums[i]*1LL;
            range = (sumMax - sumMin) *1LL;

        }
            return range;

    }
};
