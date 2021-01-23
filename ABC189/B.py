def main():

    N, X = map(int, input().split())
    vp = [map(int, input().split()) for _ in range(N)]
    v, p = [list(i) for i in zip(*vp)]

    now = 0
    for i in range(N):
        now += (v[i] * p[i])
        if (now > (X * 100)):
            print(i+1)
            return
    print("-1")
main()
