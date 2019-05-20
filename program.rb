require 'date'

date_now      = DateTime.now
year_now      = date_now.strftime("%Y").to_i
month_now     = date_now.strftime("%-m").to_i
days_of_month = 31

case month_now
when 4, 6, 9, 11
    days_of_month = 30
when 2
    days_of_month = 28
    # leap? or gregorian_leap? is too simple ;-)
    if (year_now % 400 == 0) || ((year_now % 100 != 0) && (year_now % 4 == 0))
        days_of_month = 29
    end
end

puts "This month has " + days_of_month.to_s + " days."
