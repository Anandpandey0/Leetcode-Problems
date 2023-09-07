#First Approach


class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        x = 0
        i = 1
        while(i <= n):
            if n % i == 0:
                x += 1
            if(x == k):
                return i
            i += 1
        return -1        

        
#BEst Approach


class Solution:
    def kthFactor(self, n: int, k: int) -> int:
      
        for i in range(1,n // 2 + 1):
            if n % i == 0:
                k -=1
            if k == 0:
                return i

        if k == 1:
            return n
        return -1      

        
        