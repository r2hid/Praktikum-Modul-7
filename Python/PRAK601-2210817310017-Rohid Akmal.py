k, b = map(int, input().split())
angka = list(map(int, input().split()))
matrik = []
a = 0
for i in range(k) :
    matrik.append(angka[a : a + b])
    a = a + b
for k in matrik :
    for angka in k :
        print(angka, end=' ')
    print()