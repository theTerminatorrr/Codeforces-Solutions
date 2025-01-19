def min_operations(arr):

    arr.sort()
    avg = arr[0]
    count = 1

    for i in range(1, len(arr)):
        if arr[i] == avg:
            count += 1
        else:
            break

    return len(arr) - count

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        print(min_operations(arr))