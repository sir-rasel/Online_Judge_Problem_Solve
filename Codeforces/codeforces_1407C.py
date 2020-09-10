n = int(input())
arr = [0] * n

l, r = 1, n
for i in range(1, n):
    print("?", l, r, flush=True)
    x = int(input())

    print("?", r, l, flush=True)
    y = int(input())

    if x > y:
        arr[l - 1] = x
        l += 1
    else:
        arr[r - 1] = y
        r -= 1

arr[l - 1] = n
print("!", *arr, flush=True)