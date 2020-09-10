for _ in range(int(input())):
    n = int(input())
    one = list(map(int, input().split()))

    one = len([x for x in one if x == 1])
    zero = n - one

    if zero >= n // 2:
        print(zero)
        print(*(["0"] * zero))
    else:
        if one % 2 == 1:
            one -= 1
        print(one)
        print(*(["1"] * one))