class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX;
        int prof = 0;

        for(int p : prices){
            minn = min(minn,p);
            prof = max(p-minn,prof); 
        }
    return prof;
    }
};
