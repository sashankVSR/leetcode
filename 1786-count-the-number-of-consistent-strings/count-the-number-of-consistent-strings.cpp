class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map<char, int> allowedmap;

        // Step 1: Mark allowed characters
        for(char c : allowed){
            allowedmap[c] = 1;
        }   // ✅ missing brace fixed here

        int count = 0;

        // Step 2: Check each word
        for(string word : words){
            bool valid = true;

            for(char c : word){
                if(allowedmap.find(c) == allowedmap.end()){
                    valid = false;
                    break;
                }
            }

            if(valid){
                count++;
            }
        }

        return count;
    }
};
