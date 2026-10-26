class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0;
        long z = x;

         if (x < 0){
            return false;
        }

        while (x) {
            long digit = x % 10;
            x /= 10;
            y = y * 10 + digit;
        }

      
        if (y == z){
            return true;
        }
        else {
            return false;
        }
        
       
    }
    
};