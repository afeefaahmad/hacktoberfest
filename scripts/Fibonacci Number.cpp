class Solution {
public:
    int fib(int n) {
        if (n==1) return 1;
        if (n==0) return 0;
        
    int a=0,b=1,sum=0;
    while(n>1){
    sum=a+b;
    a=b;
    b=sum;
    
        n--;
    }
    return sum;    
    }
};
