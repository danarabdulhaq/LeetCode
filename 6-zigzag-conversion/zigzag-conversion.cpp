class Solution {
public:
    string convert(string s, int numRows) {
        if (s.empty())
            return "";
        if (s.size() == 1)
            return s;
        if (numRows == 1)
            return s;

        int len = s.length();
        int flag = 1;
        vector<string> vec(numRows);

        int j = 0;
        for (int i = 0; i < len; i++) {
            vec[j] += s[i];
            if (flag)
                j++;
            else
                j--;

           if(j == numRows) j = numRows-2, flag = false;
            if(j<0) j =1, flag = true;  

        }

         string res;
        for(int i=0;i<vec.size();i++)
        {
            res+= vec[i];
        }
        return res; 

    }
};