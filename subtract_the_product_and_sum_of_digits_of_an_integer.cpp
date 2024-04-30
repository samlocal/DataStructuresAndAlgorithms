// leetcode link -> https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

    class Solution
    {
    public:
        int subtractProductAndSum(int n)
        {
            int product = 1;
            int sum = 0;

            while (n != 0)
            {
                int lastDigit = n % 10;
                sum += lastDigit;
                product *= lastDigit;
                n = n / 10;
            }

            return product - sum;
        }
    };