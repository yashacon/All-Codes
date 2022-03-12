t = int(input())
while t:
    n=int(input())
    k=int(input())
    if n == k:
        print(0)
    elif n > k:
        a1 = min((n - k), k)
        if n % 2 == 0 and (k == (n // 2)):
            print((2 * a1) - 1)
        else:
            print(2 * a1)
    else:
        a2 = min((n - (k % n)), k % n)
        if n == 2 and k % 2 != 0:
            print(1)
        if (n == 2 and k % 2 == 0):
            print(0)
        if ((k // n) == 0):
            print(0)
        elif ((n % 2 == 0) and (k%n) == (n // 2)):
            print((2 * a2) - 1)
        else:
            print(2 * a2)
    t-=1
