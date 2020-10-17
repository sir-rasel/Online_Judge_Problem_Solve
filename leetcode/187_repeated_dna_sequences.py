class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        seen = set()
        repeat = set()
        
        for i in range(len(s) - 9):
            tmp = s[i:i + 10]
            
            if tmp in seen:
                repeat.add(tmp)
            else:
                seen.add(tmp)
        return repeat