/*this is the leetcode solution 3 using arr[26] and 1pointer as max wont be able to solve this we have to initialize the left and right variable*/
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            vector<int> arr(128, 0);
            int left = 0, right = 0, maxi = 0;
            
            while (right < s.size()) {
                char ch = s[right];
                arr[ch]++;
                
                while (arr[ch] > 1) {
                    arr[s[left]]--;
                    left++;
                }
                
                maxi = max(maxi, right - left +1);
                right++;
            }
            
            return maxi;
        }
    };
    