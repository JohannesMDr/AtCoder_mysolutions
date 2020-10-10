import numpy as np
N = int(input())
P = [int(i) for i in input().split()]

Q = [False] * 200001
ans = 0
for p in P:
    Q[p] = True
    if p == ans:
        while Q[ans]:
            ans += 1
    print(ans)
