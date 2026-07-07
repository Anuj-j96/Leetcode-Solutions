class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        int original=x;
        while (x > 0) {

            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        if(original==reverse){
            return true;
        }
        else{
          return  false;
        }
    }
};