class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // initialize karo left, right , boat 
        // sort karo taaki pata lag sake min and max ka
        // two pointer approach lagao
        // condition true hoga to boat ka count =1 kar dena aur badhate jaana 1 se condition true ho to 
        // greedy approach follow kar raha hai
        
        sort(people.begin(),people.end());
        int left=0;
        int right=people.size()-1;
        int count=0;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                left++;
                right--;
            }
            else{
                right--;
            }
            count++;
        }
        return count;
        
    }
};