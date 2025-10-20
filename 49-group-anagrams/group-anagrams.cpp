class Solution {
public:
    bool isAna(string s1,string s2){
        if(s1.length() != s2.length()){
            return false;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


            vector<bool> isused(strs.size(),false);

            vector<vector<string>> result;

            for(int i=0;i<strs.size();i++){

                if(!isused[i]){
                    vector<string> currentgroup;
                    currentgroup.push_back(strs[i]);
                    isused[i] = true;



                     for(int j=i+1;j<strs.size();j++){
                    if(!isused[j] && isAna(strs[i],strs[j])){
                        currentgroup.push_back(strs[j]);
                        isused[j]=true;
                    }


                }

            result.push_back(currentgroup);


                }

           




            }



            return result;

    }
};