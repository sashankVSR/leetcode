class Solution {
public:
    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));

        auto f = [](int x){
            string s="";

            while(x){
                s=char('0'+x%2)+s;
                x/=2;
            }
            return s;
        };
        return f(y)+"-"+f(m)+"-"+f(d);
    }
};