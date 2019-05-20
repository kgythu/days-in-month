import datetime

date_now = datetime.datetime.now()
year_now      = int(date_now.strftime("%Y"))
month_now     = int(date_now.strftime("%m"))

def long_month():
    return 31
 
def normal_month():
    return 30
 
def february():
    if (year_now % 400 == 0) or ((year_now % 100 != 0) and (year_now % 4 == 0)):
        return 29
    return 28
 
switcher = {
        4: normal_month,
        6: normal_month,
        9: normal_month,
        11: normal_month,
        2: february
    }

def get_days_of_month(arg):
    func = switcher.get(arg, long_month)
    return func()

days_of_month = get_days_of_month(month_now)
print("This month has " + str(days_of_month) + " days.")
