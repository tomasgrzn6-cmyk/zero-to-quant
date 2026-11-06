n = int(input("How many elements of fibonacci sequence you want to see? "))
x, y = 1, 1

for _ in range(n):
  print(x, end=" ")
  x, y = y, x + y
golden_ratio = y / x
print(f"golden ratio: {golden_ratio}")
