import java.util.Calendar;

public class Program
{
	public static void main(String[] args) {
		int year = Calendar.getInstance().get(Calendar.YEAR);
		int month = Calendar.getInstance().get(Calendar.MONTH) + 1;
		int daysOfMonth = 31;
		switch(month) {
		    case 4:
		    case 6:
		    case 9:
		    case 11:
		    	daysOfMonth = 30;
		    	break;
		    case 2:
		    	daysOfMonth = 28;
		    	if((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
    				daysOfMonth = 29;
				};
				break;
		};
		System.out.println("This month has " + daysOfMonth + " days.");
	}
}
