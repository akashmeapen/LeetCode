#include <climits>
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freq[10] = {0};
        while(n>0){
            freq[n%10]++;
            n /= 10;
        }
        int min_freq = INT_MAX;
        int least_frequent_digit = -1;
        for(int i = 0; i < 10; i++) {
            if(freq[i] > 0 && freq[i] < min_freq) {
                min_freq = freq[i];
                least_frequent_digit = i;
            }
        }
        return least_frequent_digit;
    }
};