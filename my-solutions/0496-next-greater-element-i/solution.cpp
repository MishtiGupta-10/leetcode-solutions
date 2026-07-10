class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans;

        ans = nums2;

        int n = nums1.size();
        int m = nums2.size();


        for(int i = m-1; i>=0; i--){
            while(!st.empty() && (st.top() <= nums2[i])){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(nums2[i]);
        }

        unordered_map<int, int> mp;

        for(int i=0; i<m; i++){
            mp[nums2[i]] = ans[i];
        }

        for(int i=0; i<n; i++){
            nums1[i] = mp[nums1[i]];
        }

        return nums1;
    }
};
