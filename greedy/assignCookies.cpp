class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());
        int current = 0;
        int total = 0;
        for (int i = 0; i < g.size(); i++){
            if (current < s.size() && g[i] <= s[current]){
                total++;
                current++;
            }
        }
    return total;
    }
};
