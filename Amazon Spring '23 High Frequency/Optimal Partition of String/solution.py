class Solution:
    def partitionString(self, s: str) -> int:

        hash = [False] * 26

        i = 0
        ans = 1
        while i < len(s):
            n = ord(s[i]) - ord('a')
            if hash[n] == True:
                hash = [False] * 26
                ans += 1
            hash[n] = True
            i += 1
        return ans

        