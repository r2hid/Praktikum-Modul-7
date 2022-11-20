b1, b2 = map(int, input().split())
if b1 == b2 :
    angka1 = list(map(int, input().split()))
    angka2 = list(map(int, input().split()))
    baris1 = []
    baris2 = []
    a = 0
    baris1.append(angka1[a : a + b1])
    baris2.append(angka2[a : a + b2])
    for i in range(0, b1) :
        print(baris1[0][i] * baris2[0][i], end=' ')
else :
    print("Jumlah tidak sama")