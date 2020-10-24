class Solution:
    def bagOfTokensScore(self, tokens, P):
        tokens.sort()
        beg, end, S, max_S = 0, len(tokens) - 1, 0, 0
        while beg <= end:
            if tokens[beg] <= P:
                P -= tokens[beg]
                S += 1
                max_S = max(max_S, S)
                beg += 1
            elif S >= 1:
                P += tokens[end]
                S -= 1
                end -= 1
            else: break
        return max_S