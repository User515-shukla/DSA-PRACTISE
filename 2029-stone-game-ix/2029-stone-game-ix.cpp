class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        
        int n=stones.size();
        if(n==1)
          return false;
        int count[3]={0,0,0};
        for(int i=0; i<stones.size();i++){
            count[stones[i] %3]++;
        }
        if(count[0]%2==0){
            if(count[1]>0 && count[2]>0){
               return true; 
            }                
            else{
                return false;
            }
        }   
        else{
            if(abs(count[1]-count[2])>2){
                return true;
            }
            else{
                return false;
            }
        }  
    }
};