conteiner = input().split(" ")
navio = input().split(" ")

a, b, c = conteiner
x, y, z = navio

a = int(a)
b = int(b)
c = int(c)

x = int(x)
y = int(y)
z = int(z)

if( (a > x) or (b > y) or ( c > z) ): result = 0
else: result = ((x * y)//(a * b))*(z//c)

print(result)