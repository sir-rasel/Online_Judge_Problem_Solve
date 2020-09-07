for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    
    flag, zero, one = True, 0, 0
    for i in range(k):
        letter = None
        for j in range(i,n,k):
            if s[j] != '?':
                if letter and s[j] != letter:
                    flag = False
                    break
                letter = s[j]
        if letter:
            zero += 1 if letter == '0' else 0
            one += 1 if letter == '1' else 0
    
    if max(zero, one) > k // 2:
        flag = False
    
    print("YES" if flag else "NO")