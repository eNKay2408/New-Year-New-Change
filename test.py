t = int(input())

a = input()
b = ""
res = 1

while t > 1:
    t -= 1
    x = input()
    if x != a:
        b = x
        res -= 1
    else:
        res += 1

if res > 0:
    print(a)
else:
    print(b)
