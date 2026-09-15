class Solution {
public:
    string largestNumber(vector<int>& nums) {
      vector<string>vec;
      vec.reserve(nums.size());
      for(int num:nums){
        vec.push_back(to_string(num));
      }
        sort(vec.begin(),vec.end(),
        [](auto &a,auto &b){
            return a+b > b+a;
        });
        string c="";
        for(string x:vec){
            c+=x;
        }
        if(c[0]=='0'){
            return "0";
        }
return c;
    }
};