n = 2
total = 0

while(n):
    n -= 1

    pec = input().split(' ')
    x, y, z = pec

    total += float(y) * float(z)

print('VALOR A PAGAR: R$ %0.2f' %total)
