class Solution
{
public:
    string intToRoman(int num)
    {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string result = "";

        for (int i = 0; i < 13; i++)
        {
            while (num >= values[i])
            {
                result += symbols[i];
                num -= values[i];
            }
        }

        return result;
    }
};

// Time complexity: O(1) - The number of symbols is constant (13), so the loop runs a fixed number of times.
// i got stuck at the adding 400 and 90 etc. included them because they are special cases in Roman numerals. For example, 400 is represented as "CD" (500 - 100) and 90 is represented as "XC" (100 - 10). By including these special cases in the values and symbols arrays, we can handle them correctly when converting the integer to a Roman numeral.