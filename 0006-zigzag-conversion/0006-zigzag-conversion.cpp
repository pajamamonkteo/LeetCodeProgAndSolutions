class Solution {
public:
    string convert(string s, int numRows) {
        int size = s.size();
        string result;
        result.reserve(size);
        int increment = (numRows - 1) * 2;
        if (numRows == 1){
            return s;
        }
        //loop thru rows then loop thru letters
        for (int row = 0; row < numRows ; row++){
            //the letter starts at the row index, and builds the new string based on the row + increment UNTIL the letter < size
            for (int letter = row; letter < size; letter += increment){
                result += s[letter];
                //declaring diagonal for cases where 0 < row < numrows - 1. diagonal must be less than size as a precondition 
                int diagonal = letter + increment - row * 2;
                if (row > 0 && row < (numRows - 1) && diagonal < size ){
                    result += s[diagonal];
                }
            }
        }
        return result;

    }
};