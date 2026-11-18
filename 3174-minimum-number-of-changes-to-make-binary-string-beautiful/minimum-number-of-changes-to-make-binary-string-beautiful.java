
class Solution {
    public int minChanges(String s) {
        int count = 0;
        char []a = s.toCharArray(); 
        for(int i=0 ;i<s.length();i+=2){
            if(a[i] != a[i+1]){
                count++;
            }
        }
        return count;
    }
}