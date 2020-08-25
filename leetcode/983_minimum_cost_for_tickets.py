class Solution(object):
    def mincostTickets(self, days, costs):
        in_days = {d: True for d in days}
        max_day = max(days)
        dp = [0] * (max_day + 1)
        dp[0] = 0

        for i in range(len(dp)):
            if in_days.get(i):
                pass1 = dp[i - 1] if i - 1 > 0 else 0 #(3)
                pass7 = dp[i - 7] if i - 7 > 0 else 0
                pass30 = dp[i - 30] if i - 30 > 0 else 0
                
                dp[i] = min(pass1 + costs[0], pass7 + costs[1], pass30 + costs[2])
            else:
                dp[i] = dp[i - 1]
        
        return dp[max_day]