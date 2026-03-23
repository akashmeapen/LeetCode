class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int bulls = 0;
        int n = secret.size();
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
            {
                bulls++;
            }
            else
            {
                a[secret[i]]++;
                b[guess[i]]++;
            }
        }
        int cows = 0;
        for (auto e : b)
        {
            if (a[e.first] != 0 && e.second != 0)
            {
                cows += min(a[e.first], e.second);
            }
        }
        string res = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return res;
    }
};