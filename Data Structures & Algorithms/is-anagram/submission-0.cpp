class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> aa;
        unordered_map<char,int> aa2;
        for (char ss:s){
          aa[ss]++;
        }
        for (char tt:t){
          aa2[tt]++;
        }

        if (aa==aa2)return true;
        return false;
    } 
};
