class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> anagrams;

        for(const string&s:strs){
            string key=s;
            sort(key.begin(),key.end());
            anagrams[key].push_back(s);
        }

        vector<vector<string>> results;

        for(auto const&[key,val]:anagrams)
{
    results.push_back(val);
}

return results;
        
    }

};