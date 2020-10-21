for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    if len(set(arr)) == 1:
        print('NO')
    else:
        rootVal = arr[0]
        secondRoot = None

        print('YES')
        for i in range(1, len(arr)):
            if arr[i] != rootVal:
                secondRoot = i
                print(1, i + 1)
        
        for i in range(1, len(arr)):
            if arr[i] == rootVal:
                print(i + 1, secondRoot + 1)
