class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int count = candies.size();
        int max = 0 ;

        for(int i = 0 ; i< count ;i++){
            if(max < candies[i]){
                max = candies[i];
            }
        }
        vector<bool> resultBool(count);
        int x ;
        
        for(int i = 0 ; i < count ;i++){

         x = candies[i] + extraCandies;
        
        if(x >= max){

         resultBool[i] = true;
        }
        else 
         resultBool[i] = false;

        }

        return resultBool;
    }

};