class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int allowedcheck[26] = {0};

        for (char c : allowed){
            allowedcheck[c - 'a'] = 1;
        }
         int count = 0;

         for (string word : words){
            bool valid = true;

            for(char c : word){
                if(allowedcheck[c - 'a'] == 0){
                    valid = false;
                    break;
                }
            }
            if (valid){
                count++;
            }
         }
         return count;
    }
};