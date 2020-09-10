from math import gcd

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)

    ans = list()
    ans.append(arr[0])
    c = arr[0]
    arr[0] = 0
    for i in range(1, n):
        idx, maxx = None, -1
        for j in range(n):
            if arr[j] == 0:
                continue

            g = gcd(c, arr[j])
            if g > maxx:
                maxx = g
                idx = j

        ans.append(arr[idx])
        c = maxx
        arr[idx] = 0

    print(*ans)