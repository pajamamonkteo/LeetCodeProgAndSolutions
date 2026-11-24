class Solution {
public:
    int reverse(int x) {

        int newNum = 0;

        while (x) {

            int digit = x % 10;
            //divide x by 10 before the computation
            x /= 10;
            //if newNum is greater than 2^31 -1 or if new Num == INT_MAX and the last digit is greater than 7 (so we dont have to build the number)
            if ( newNum > INT_MAX / 10 || (newNum == INT_MAX / 10 && digit > 7 )){
                return 0;
            }
            if ( newNum < INT_MIN / 10 || (newNum == INT_MIN / 10 && digit < -8 )){
                return 0;
            }
            //newNum gets multiplied by 10 + the new digit (mod 10 x, BEFORE x / 10)
            newNum = newNum * 10 + digit;
        }    
        return newNum;
    }
};