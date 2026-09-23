class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int x=1;
        int count=0;
        int i=0;
       while(count<k){
        if(i<arr.size() && x==arr[i]){
            i++;
        }
        else{
            count++;
        if(count==k){
            return x;
        }
       }
        x++;
       }
       return 0;
    }
};