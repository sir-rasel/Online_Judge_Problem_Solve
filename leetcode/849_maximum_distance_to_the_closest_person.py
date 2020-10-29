class Solution:
    def maxDistToClosest(self, seats: List[int]) -> int:
        left_gap = 0
        while seats[left_gap] != 1:
                left_gap += 1
       
        mid_gap = 0
        cur_gap = 0
        for i in range(left_gap, len(seats)):
            if seats[i] == 0:
                cur_gap += 1
            else:
                mid_gap = max(mid_gap, cur_gap)
                cur_gap = 0

        right_gap = cur_gap
        return max(left_gap, right_gap, (mid_gap + 1) // 2)