class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int>v;
        int count=0;
        int d=nums.size()-1;
        int i=0;
        int x=nums[0];
       while(i<=d){
           while(x>0){
            v.push_back(x%10);
            x=x/10;
           }
            i++;
            x=nums[i];
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==digit){
                count++;
            }
        }
        return count;
    }
};