class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // initialize x1,x2,x3,x4
        // loop chalao i=2 se 
        // x ko coordinate [i][0];
        // y ko cordinate [i][1];
        // agar (x-x0) * (y1-y0) != (y-y0)*(x1-x0)
        //   return  false;
        // return true;
        int x0= coordinates[0][0];
        int y0= coordinates[0][1];
        int x1= coordinates[1][0];
        int y1= coordinates[1][1];
        for( int i=2; i<coordinates.size();i++){
            int x= coordinates[i][0];
            int y= coordinates[i][1];
            if((x-x0)*(y1-y0)!=(y-y0)*(x1-x0)){
                return false;
            }
        }
        return true;
    }
};