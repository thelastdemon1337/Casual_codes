day = 0
squats = 0
total = 0

while day <= 6:
    day += 1
    squats = int(input("How many squats did you do  on day {}: ".format(day)))
    total += squats

avg = total/day
print("In the last {} days, You did an average of {} squats".format(day,avg))
