class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int n=arr.size();
        long first=LONG_MIN;
        long second=LONG_MIN;
        long third=LONG_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>first){
                third=second;
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second && arr[i]<first){
                third=second;
                second=arr[i];

            }
            else if(arr[i]>third && arr[i]<second){
                third=arr[i];
            }
        }  
       
        if(third==LONG_MIN){
             return first;
        }
        else{
            return third;
        }

    }
};