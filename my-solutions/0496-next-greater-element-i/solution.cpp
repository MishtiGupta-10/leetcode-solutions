class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans;

        stack<int> st;
        vector<int> res(m);

        unordered_map<int, int> mp;

        for(int j=0; j<m; j++){
            mp[nums2[j]] = j;
        }

        for(int j=m-1; j>=0; j--){
            while(!st.empty() && st.top()<=nums2[j]){
                st.pop();
            }

            if(st.empty()){
                res[j] = -1;
            }
            else{
                res[j] = st.top();
            }

            st.push(nums2[j]);
        }

        for(int i=0; i<n; i++){
            if(mp.find(nums1[i]) != mp.end()){
                ans.push_back(res[mp[nums1[i]]]);
            }
        }

        return ans;
    }
};
