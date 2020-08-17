def my_function():
  print("Hello from a function")
  
def sub(A1):
    res = set()
    pre = {0}
    for x in A1:
        pre = {x | y for y in pre} | {x}
        res |= pre
    return len(res)

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if len(a)*(len(a)+1)/2 == sub(a):
        print("YES")
    else:
        print("NO")