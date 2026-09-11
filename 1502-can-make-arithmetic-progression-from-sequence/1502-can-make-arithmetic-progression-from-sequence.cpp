class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans=arr[1]-arr[0];
        int count=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==ans){
                count++;
            }
        }
        if(count==arr.size()-1){
            return true;
        }
        else{
            return false;
        }
        return 0;
    }
};