H, W = map(int, input().split())
S = [input() for _ in range(H)]

ans = 0
for h in range(H):
    for w in range(W):
        if (S[h][w] == '.'):
            if (h+1 < H):
                if (S[h+1][w] == '.'):
                    ans += 1
            if (w+1 < W):
                if (S[h][w+1] == '.'):
                    ans += 1
print(ans)