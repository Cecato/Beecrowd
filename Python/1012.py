abc = input().split(" ")

a, b, c = abc
pi = 3.14159
a = float(a)
b = float(b)
c = float(c)

triangulo = (a* c)/2
circulo = pi * (c * c)
trapezio = c * (a + b) / 2
quadrado = b * b
retangulo = a * b


print("TRIANGULO: %0.3f"%triangulo)
print("CIRCULO: %0.3f"%circulo)
print("TRAPEZIO: %0.3f"%trapezio)
print("QUADRADO: %0.3f"%quadrado)
print("RETANGULO: %0.3f"%retangulo)
