#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(long n) {
        int i;
        double ans=1;
            for(i=1;i<=32;i++){
                
                if(ans==n){
                    return true;
                }
                ans=ans*2;
                
            }
            return false;
    }
};