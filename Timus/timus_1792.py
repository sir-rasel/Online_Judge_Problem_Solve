def check(m):
    if (m[1]+m[2]+m[3])%2 == m[4] and \
	    (m[0]+m[2]+m[3])%2 == m[5] and \
		(m[0]+m[1]+m[3])%2 == m[6]:
        return True
    return False

n = list(map(int, input().split()))

for i in range(7):
    if check(n):
        break
    else:
        n[i] = (n[i] + 1) % 2
        if check(n):
            break
        n[i] = (n[i] + 1) % 2

print(*n)