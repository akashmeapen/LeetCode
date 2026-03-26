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

/*
Steps:
- Function Purpose
Converts an integer (num) into its Roman numeral representation.
Result Variable
string Roman = "";
This stores the final Roman numeral as you build it step by step.
- Mapping Structure
A vector<pair<int, string>> is used to map integer values to Roman symbols.
Ordered Values (Important!)
The vector is arranged in descending order (1000 → 1), ensuring we always use the largest possible value first (greedy approach).
-  Special Cases Included
Values like 900 (CM), 400 (CD), 90 (XC), etc., are explicitly included to handle subtractive notation.
-   Loop Through Mapping
A for loop iterates over each (value, symbol) pair in the vector.
- Greedy Subtraction
Inside the loop, a while condition checks:
while (num >= current value)
→ Keep subtracting as long as possible.
- Building the Result
Each time the condition is true:
Append the Roman symbol to Roman
Subtract the value from num
- Repeat Until Zero
The process continues until num becomes 0, meaning fully converted.
- Return Result
The final Roman numeral string is returned.

*/