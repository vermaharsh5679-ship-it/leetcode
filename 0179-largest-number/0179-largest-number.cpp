class Solution {
public:
    string largestNumber(vector<int>& nums) {
      vector<string>vec;
      vec.reserve(nums.size()); // isse bina faltu element dale space ban jayegi
      for(int num:nums){
        vec.push_back(to_string(num)); // kyunki hame string hi chahiye
      }
      // isse custom sort bolte h aaj hi sikha isme lamda expression ka use karenge sort me har ek elemnt ko concat se chekc karlenge kyunki string h tio a+b se concat hobga na ki sum so jist combination se sabse bada banega wo aage aajayega 
        sort(vec.begin(),vec.end(),
        [](auto &a,auto &b){         
            return a+b > b+a;
        });
        string c="";
        for(string x:vec){
            c+=x;
        }
        if(c[0]=='0'){    // ek edge case tha vector me teen zero honge to answer 0 aayega hamare approach se 000 aa rha tha to edge case
            return "0";
        }
return c;
    }
};