
class Solution {
public:
    int no(string c) {
        if (c == "I")
            return 1;
        else if (c == "IV")
            return 4;
        else if (c == "V")
            return 5;
        else if (c == "IX")
            return 9;
        else if (c == "X")
            return 10;
        else if (c == "XL")
            return 40;
        else if (c == "L")
            return 50;
        else if (c == "XC")
            return 90;
        else if (c == "C")
            return 100;
        else if (c == "CD")
            return 400;
        else if (c == "D")
            return 500;
        else if (c == "CM")
            return 900;
        else
            return 1000;
    }

    string choose(int n) {
        if (n >= 1000)
            return "M";
        else if (n >= 900)
            return "CM";
        else if (n >= 500)
            return "D";
        else if (n >= 400)
            return "CD";
        else if (n >= 100)
            return "C";
        else if (n >= 90)
            return "XC";
        else if (n >= 50)
            return "L";
        else if (n >= 40)
            return "XL";
        else if (n >= 10)
            return "X";
        else if (n >= 9)
            return "IX";
        else if (n >= 5)
            return "V";
        else if (n >= 4)
            return "IV";
        else if (n >= 1)
            return "I";

        return "";
    }

    string intToRoman(int num) {
        string ans = "";

        while (num > 0) {
            string c = choose(num);
            ans += c;
            num -= no(c);
        }

        return ans;
    }
};
