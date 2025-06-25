class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0, start = 0, index = 0, size = s.length();
        vector<int> arr(255, -2);

        while (index < size) {
            if(arr[s[index]] >= start) {
                start = arr[s[index]] + 1;
            }

            int count = index-start+1;
            if(count > max) max = count;

            arr[s[index]] = index;
            index++;
        }
        return max;
    }
};