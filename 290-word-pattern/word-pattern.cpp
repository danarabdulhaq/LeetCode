class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
        map <string, char> map1;
        map <char, string> map2;
         vector<string> v;
        int len = s.size();

        string temp = "";

        for(int i = 0; i < len; i++){
            if(s[i] == ' '){
                v.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
            
        }

         v.push_back(temp);
        
        if(v.size() != pattern.size()){
            return false;
        }


         string t = "";
        
        for(int i = 0; i < v.size(); i++){

            if(map1.find(v[i]) == map1.end() and map2.find(pattern[i]) == map2.end()){
                    map1[v[i]] = pattern[i];
                    map2[pattern[i]] = v[i];
            }
            
            else{
                if(map1[v[i]] != pattern[i] or map2[pattern[i]] != v[i]){
                    return false;
                } 
            }
        }

        return true;

    }
};