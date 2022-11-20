ordo = int(input())
matrik1 = []
print("Matriks A")
for i in range(0, ordo):
    isi1 = list(map(int, input().split()))
    matrik1.append(isi1[0: ordo])
matrik2 = []
print("Matriks B")
for i in range(0, ordo):
    isi2 = list(map(int, input().split()))
    matrik2.append(isi2[0: ordo])
print("\nMatriks A x B")
for i in range(0, ordo):
    for j in range(0, ordo):
        hsl = 0
        for k in range(0, ordo):
            hsl += matrik1[i][k] * matrik2[k][j]
        print(hsl, end=' ')
    print()