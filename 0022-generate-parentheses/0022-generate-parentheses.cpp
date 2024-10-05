class Solution {
private:
    vector<string> ans;

public:
    void th(int n, int open, int close, string& k, int idx) {
        if (idx == n * 2) {
            ans.push_back(k);
            return;
        }

        if (open < n) {
            k[idx] = '(';
            th(n, open + 1, close, k, idx + 1);
        }

        if (close < open) {
            k[idx] = ')';
            th(n, open, close + 1, k, idx + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        string k(2 * n, ' ');
        th(n, 0, 0, k, 0);
        return ans;
    }
};
