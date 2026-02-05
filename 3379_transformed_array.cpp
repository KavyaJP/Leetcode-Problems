class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer;

        for (int i = 0; i < n; i++) {
            int index_to_access = (i + nums[i]) % n;
            if (index_to_access < 0)
                index_to_access += n;

            answer.push_back(nums[index_to_access]);
        }

        return answer;
    }
};
