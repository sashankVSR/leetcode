class Solution {
public:
    int DigitProdduct(int num){
        int prod = 1;
        while(num > 0){
            prod = prod * (num % 10);
            if(prod == 0)
                return 0;
            num /= 10;
        }
    return prod;
    }
    int smallestNumber(int n, int t) {
        for(int num = n; num <= num + 10; num++){
            if(DigitProdduct(num) % t == 0){
                return num;
            }
        }
    return -1;
    }
};