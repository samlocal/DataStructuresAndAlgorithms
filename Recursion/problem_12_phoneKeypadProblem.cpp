/*
class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans,
               string mapping[]) {
        // base case
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }

        // taking the number
        int number = digit[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output = "";
        int index = 0;

        solve(digits, output, index, ans, mapping);
        return ans;
    }
};*/