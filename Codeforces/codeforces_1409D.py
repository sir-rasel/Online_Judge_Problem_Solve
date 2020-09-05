for _ in range(int(input())):
    n, x = map(int, input().split())

    move, power = 0, 1
    while sum(map(int,str(n))) > x:
        digit = (n // power) % 10
        add = power * ((10 - digit) % 10)
        n += add
        move += add
        power *= 10

    print(move)