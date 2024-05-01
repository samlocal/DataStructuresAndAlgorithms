//leetcode link - >https://leetcode.com/problems/power-of-two/description/
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++)
        {
            if(n==pow(2,i)) return true;
        }
        return false;
    }
};
*/



//optimized 

/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=0;i<=30;i++)
        {
            if(n==ans) return true;
            if(ans<INT_MAX/2) ans*=2;                        
        }
        return false;
    }
};
*/


//Another Approach
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        
        int setBitCount=0;
        while(n!=0)
        {
            if(n&1==1) setBitCount++;
            n=n>>1;
        }
        if(setBitCount==1) return true;
        return false;
    }
};
*/