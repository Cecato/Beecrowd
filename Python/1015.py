import math

plinha = input().split(" ")
slinha = input().split(" ")

x1, y1 = plinha
x2, y2 = slinha

x1 = float(x1)
x2 = float(x2)
y1 = float(y1)
y2 = float(y2)

distancia = math.sqrt( ((x2 - x1)**2) + ((y2 - y1)**2) )

print("%0.4f"%distancia)