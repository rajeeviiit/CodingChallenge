Time : O(log(n))
Space : O(1)
class HappyNumber {
public:
   # return the squared sum of digits of given number n.
    int numSquareSum(int n)        
    { 
        int squareSum = 0; 
        while (n) 
        { 
            squareSum += (n % 10) * (n % 10); 
            n /= 10; 
        } 
        return squareSum; 
    } 
   # return true if number is happy number
    bool isHappy(int n) {            # 
        int slow, fast; 
        slow = fast = n; 
        do
        { 
          # move slow by one iteration
            slow = numSquareSum(slow); 
          # move fast by two iteration
            fast = numSquareSum(numSquareSum(fast)); 
        } 
        while (slow != fast); 
        # if both number meet at 1 then return true
        return (slow == 1);

        }
};
