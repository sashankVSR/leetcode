class Solution {
public:
    int numberOfSpecialChars(string word) {

       bool lowerCase[26] = {false};
       bool upperCase[26] = {false};

        for(int i = 0; i < word.length(); i++){
            char ch = word[i];

            if(islower(ch)){
                lowerCase[ch - 'a'] = true;
            }
            if(isupper(ch)){
                upperCase[ch - 'A'] = true;
            }
        }

        int count = 0;

        for(int i = 0; i < 26; i++){
            if(lowerCase[i] && upperCase[i]){
                count++;
           
        }
        }
        return count;
    }
};