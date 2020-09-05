for _ in range(int(input())):
    n, k = map(int, input().split())
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))
    x.sort()

    left, right = [0] * n, [0] * n
    
    first = 0
    for i in range(n):
        while first < n and x[first] - x[i] <= k: 
            first += 1
        right[i] = first - i
    
    second = n - 1
    for i in range(n-1, -1, -1):
        while second >= 0 and x[i] - x[second] <= k: 
            second -= 1
        left[i] = i - second
    
    mx, ans = 0, 0
    for i in range(n):
        ans = max(ans, mx + right[i])
        mx = max(mx, left[i])
    
    print(ans)