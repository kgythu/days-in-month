const date      = new Date();
const year      = date.getFullYear();
const month     = date.getMonth() + 1;
var daysOfMonth = 31;

switch(month) {
	case 4:
	case 6:
	case 9:
	case 11:
		daysOfMonth = 30;
		break;
	case 2:
		daysOfMonth = 28;
		if((year % 400 === 0) || ((year % 100 !== 0) && (year % 4 === 0))) {
			daysOfMonth = 29;
		}
		break;
}
$(function() {
    $("#daysOfMonth").html(daysOfMonth);
    console.log('This month has ' + daysOfMonth + ' days.');
});
