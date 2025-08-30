class Solution {
public:
    int score(vector<string>& cards, char x) {
        int start=0;
        for(int i=0;i<cards.size();i++){
            for(int j=-1;j<cards.size();j--){
                if(cards[i][j]==x && cards[i][j]==x){
                    i++;
                    j++;
                    start++;
                }
            }
        }
        return start;
    }
};