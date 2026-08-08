class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastseen;
        int left = 0;
        int maxLen = 0;
        for(int right = 0; right < s.size(); right++){
            char c = s[right];
            if(lastseen.find(c) != lastseen.end() && lastseen[c] >= left){
                left = lastseen[c] + 1;
            }
            lastseen[c] = right;
            maxLen = max(maxLen, right - left + 1);


        }
        return maxLen;
    }
};