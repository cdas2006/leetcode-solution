
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string sum = "";

        while (i >= 0 || j >= 0 || carry) {
            int bitA = (i >= 0) ? a[i] - '0' : 0;
            int bitB = (j >= 0) ? b[j] - '0' : 0;

            int total = bitA + bitB + carry;

            sum += '0' + total % 2;
            carry = total / 2;

            i--;
            j--;
        }

        reverse(sum.begin(), sum.end());
        return sum;
    }
};
