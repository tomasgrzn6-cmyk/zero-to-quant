cislo = int(input("insert number:"))

while cislo % 1 != 0 or cislo < 0:
  print("the number can only be integer larger than zero")
  cislo = int(input("insert number:"))

podmienka = int(cislo ** 0.5) + 1

je_prvocislo = True
for i in range(2, podmienka): #we are only testing till the root without 1
  if cislo % i == 0:
    je_prvocislo = False
    break
if je_prvocislo:
  print("inserted number is prime.")
else:
  print("inserted number is composite.")
