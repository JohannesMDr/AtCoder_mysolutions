import numpy as np
N = int(input())
P = np.array(list(map(int, input().split())))

Q = np.array(list(range(200000+1)))
ans = 0
idx = 0
for n in range(N):
    if P[n] > ans:
        print(ans)
    else:
        Q = np.setdiff1d(Q, P[idx:n+1])
        idx = n
        ans = Q[0]
        print(ans)
