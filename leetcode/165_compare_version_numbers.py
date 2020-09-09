class Solution:
    def compareVersion(self, version1, version2):
        s1 = list(map(int, version1.split('.')))
        s2 = list(map(int, version2.split('.')))
        
        l1, l2 = len(s1), len(s2)
        if l1 < l2: 
            s1 += [0] * (l2 - l1) 
        else: 
            s2 += [0] * (l1 - l2)
            
        return (s1 > s2) - (s1 < s2)