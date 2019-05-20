<!DOCTYPE html>
<html lang="en">
<head>
<title>How many days is the current month?</title>
</head>
<body>
<h1>How many days is the current month?</h1>
<p><?php
	$year = date("Y");
	$month = date("n");
	$daysOfMonth = 31;
	switch($month) {
		case 4:
		case 6:
		case 9:
		case 11:
			$daysOfMonth = 30;
			break;
		case 2:
			$daysOfMonth = 28;
			// date('L') is too simple ;-)
			if(($year % 400 == 0) || (($year % 100 != 0) && ($year % 4 == 0))) {
				$daysOfMonth = 29;
			};
			break;
	};
	echo "This month has ", $daysOfMonth, " days.";
?></p>
</body>
</html>
