score = int(input("What's your score? "))
salary = int(input("How much do you make a month? "))
if score >= 700 and salary >= 2000:
  print("Accepted")
elif score < 700 and salary < 2000:
    print("Your score and salary is too low")
elif score < 700:
  print("VYour score is too low")
elif salary < 2000:
  print("Your salary is too low")
