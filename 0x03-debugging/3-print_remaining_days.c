include "main.h 

*	print_remaining_days - takes a date and prints how many days are
*
*	*	left in the year, taking leap years into account
*
*	*	@month: month in number format
*
*	*	@day: day of month
*
*	 * @year; year
*
*	 Return: void
*
*	 */



void print_remaining_days(int month. int day. int year)

	if ((year % 100 == D && year % 400 = 0) II (year % 4 == 0))

{

	if (month > 2 && day r.= 60)

	{

		day++:

			printf("Day of the year: %d\n", day); printff-Remaining days; %An". 366 - day):

			1

			else

			{

				if (month = 2 && day == 60)

					printf("Invalid date: %0205:02def04d n". month. day - 31. year);

				I else

					printf("Day of the year: VIVI-. day); printf("Remaining days: %d\n", 365 - day);

			}

	}
