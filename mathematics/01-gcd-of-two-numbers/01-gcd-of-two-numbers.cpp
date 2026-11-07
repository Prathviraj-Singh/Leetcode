
class Solution {
public:
    int findGCD(int num1, int num2) {
        int num3 = min(num1, num2);
        int ans = 1;
        for (int i = 1; i<=num3; i++){
            if (num1%i==0 && num2%i==0){
                ans = i;
            }
        }
        return ans;
    }
};
