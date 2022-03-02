year = int(input("Enter the year:"))
if(year%100==00):
    if(year%400==0):
        print("{} is a leap year".format(year))
elif(year%4==0):
    print("{} is a lear year".format(year))
else:
    print("{} is not a leap year".format(year))

  