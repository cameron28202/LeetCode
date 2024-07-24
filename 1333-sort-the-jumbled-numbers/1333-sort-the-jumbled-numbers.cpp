class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> pairs;

        for(int i = 0; i < nums.size(); ++i){
            int num = nums[i];
            int jumbled_num = 0;
            int place = 0;
            if(num == 0){
                pairs.push_back({mapping[0], i});
                continue;
            }
            while(num != 0){
                int curr_digit = num % 10;
                jumbled_num += mapping[curr_digit] * pow(10, place);
                num /= 10;
                place += 1;
            }
            pairs.push_back({jumbled_num, i});
        }
        sort(pairs.begin(), pairs.end());
        vector<int> ans;
        for(auto pair: pairs){
            ans.push_back(nums[pair.second]);
        }
        return ans;
    }
};