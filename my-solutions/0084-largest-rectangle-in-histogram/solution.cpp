class Solution {
public:

    vector<int> NSE(vector<int>& heights){
        int n = heights.size();
        stack<int> st;

        vector<int> ans(n);

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }

            if(st.empty()){
                ans[i] = n;
            }
            else{
                ans[i] = st.top();
            }

            st.push(i);
            
        }

        return ans;
    }

    vector<int> PSEE(vector<int>& heights){
        int n = heights.size();
        stack<int> st;

        vector<int> ans(n);

        for(int i=0; i<n; i++){
            while(!st.empty() &&heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        vector<int> nse = NSE(heights);
        vector<int> psee = PSEE(heights);

        int maxArea = 0;

        for(int i=0; i<n; i++){

            int nse_idx = nse[i];
            int psee_idx = psee[i];

            int width = nse_idx - psee_idx - 1;
            int area = width*heights[i];

            maxArea = max(maxArea, area);
        }

        return maxArea;
        
    }
};
