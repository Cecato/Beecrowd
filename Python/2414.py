list = input().split(" ")

num = 1
maior = 0

while num != 0:
    num = int(input())

    if( num > maior): maior = num

print(maior)