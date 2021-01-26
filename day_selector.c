#include <iostream>
#include <string>

enum days_of_week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int num_appointments[7]= {0, 0, 0, 0, 0, 0, 0};

days_of_week select_Day(std::string name_of_weekday)
{
	days_of_week day;
        if(name_of_weekday == "Sunday") 
	{
		day = Sunday;
	}
        else if (name_of_weekday == "Monday")
	{
		day = Monday;                                                                         }
        else if (name_of_weekday == "Tuesday")
	{                                                                                                     day = Tuesday;                                                                        }                                                                                             else if (name_of_weekday == "Wednesday")
	{                                                                                                     day = Wednesday;                                                                      }                                                                                             else if (name_of_weekday == "Thursday")
	{
		day = Thursday;                                                                       }
	else if (name_of_weekday == "Friday")
	{
		day = Friday;                                                                         }                                                                                             else if (name_of_weekday == "Saturday")	
	{
		day = Saturday;
	}
	return day;	
}

void make_appointment()
{
	std::string name_of_weekday;
	days_of_week day;
	std::cout << "Please enter the day you wish to book an appointment" << std::endl;
	std::cin >> name_of_weekday;
	day = select_Day(name_of_weekday);
	num_appointments[day]++;
}

void print_appointmentlist()
{
	std::cout << "Number of Appoints for each day" << std::endl;
	std::cout << "Sunday: " << num_appointments[0] << std::endl;
	std::cout << "Monday: " << num_appointments[1] << std::endl;
	std::cout << "Tuesday: " << num_appointments[2] << std::endl;
	std::cout << "Wednesday: " << num_appointments[3] << std::endl;
	std::cout << "Thursday: " << num_appointments[4] << std::endl;
	std::cout << "Friday: " << num_appointments[5] << std::endl;
	std::cout << "Saturday: " << num_appointments[6] << std::endl;
}

int main()
{
	int again = 0;
	while(again == 0)
	{
		make_appointment();
		print_appointmentlist();
		std::cout << "make another appointment?0/1? " << std::endl;
		std::cin >> again;
	}

}
