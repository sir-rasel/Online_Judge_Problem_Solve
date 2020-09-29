from collections import deque

class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:     
        
        word_set = set(wordDict)
        visited = set()
        
        queue = deque()
        queue.append(s)
        
        while queue:
            s = queue.popleft()
            for word in word_set:
                if s.startswith(word):
                    new_str = s[len(word):]
                    if new_str == '':
                        return True
                    if new_str not in visited:
                        queue.append(new_str)
                        visited.add(new_str)
        return False