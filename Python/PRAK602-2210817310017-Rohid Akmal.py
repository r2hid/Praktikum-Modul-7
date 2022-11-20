k = int(input())
angka = list(map(int, input().split()))
zetsu = []
a = 0
for i in range(0, k) :
    zetsu.append(angka[a : a + k])
for i in range(0, k) :
    print(zetsu[0][i] * (i + 1), end=' ')