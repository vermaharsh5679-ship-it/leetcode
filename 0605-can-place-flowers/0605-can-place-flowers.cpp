class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=1;
        int total=0;
       for(int i=0;i<flowerbed.size();i++){
        if(flowerbed[i]==0)
        count++;
        else{
        total+=(count-1)/2;
        count=0;
        }
       }
       count++;
       total+=(count-1)/2;
       return total>=n;
    }

};