abc = input().split(" ")
abc = list(map(int, abc))
abc.sort(reverse=True)
print(abc[1])
