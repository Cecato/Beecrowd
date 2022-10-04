list = input().split(" ")

x, y = list
x = int(x)
y = int(y)

result = x - ( y*(x//y) )

print(result)