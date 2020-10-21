for _ in range(int(input())):
    n = input()

    l = len(n)
    f = int(n[0])

    ans = 10 * (f - 1)
    s = (l * (l + 1)) // 2
    ans += s

    print(ans)
