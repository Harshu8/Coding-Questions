// GFG: XOR Game
// link: https://practice.geeksforgeeks.org/problems/xor-game2143/1

class Solution{
public:
    int xorCal(int k){
        // code here
        
        if( k == 1 )
            return 2;
        if( (k&(k+1)) == 0 )
        {
            return k>>1;
        }
        return -1;
    }
};
