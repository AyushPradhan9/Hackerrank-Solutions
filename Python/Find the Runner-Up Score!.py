if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    arr.sort(reverse=True)
    high=arr[0]
    for i in range(n):
        if high != arr[i]:
            print(arr[i])
            break