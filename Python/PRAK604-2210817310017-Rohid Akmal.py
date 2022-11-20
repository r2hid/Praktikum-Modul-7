bintang = 0; pagar = 0
pesan1 = input(); pesan2 = input()
i1 = len(pesan1); i2 = len(pesan2)
if i1 != i2 :
    print("\nPanjang kalimat berbeda, pesan palsu\n")
else :
    for i in range(i2):
        if(pesan1[i] == pesan2[i]):
            if(pesan1[i] == ' '):
                print(" ", end=' ')
            else:
                print("*", end=' ')
                bintang += 1
        else:
            print("#", end=' ')
            pagar += 1
    print("\n* = ", bintang)
    print("# = ", pagar)
if(bintang >= pagar):
    print("Pesan Asli")
else:
    print("Pesan Palsu")