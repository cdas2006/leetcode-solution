class Solution {
public:
    bool isPalindrome(string s) {

        if (s.empty())
            return true;

        int n = s.size();
        vector<char> store;

        int i = 0;

        while (n--) {
            if (s[i] >= 65 && s[i] <= 90)
            {
                store.push_back(s[i] + 32);
                i++;
            }

            else if (s[i] >= 97 && s[i] <= 122) {
                store.push_back(s[i]);
                i++;
            }

            else if (s[i]>=48 && s[i]<=57)
            {
                store.push_back(s[i]);
                i++;
            }

            else
                i++;
        }

         i = 0;
         int j = store.size() - 1;

        while (i < j) {
            if (store[i] != store[j])
                return false;

                i++;
                j--;
        }

        return true;
    }
};