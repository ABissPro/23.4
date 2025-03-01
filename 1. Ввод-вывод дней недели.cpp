#include <iostream>
#define DAY_0 "Monday"
#define DAY_1 "Tuesday"
#define DAY_2 "Wednesday"
#define DAY_3 "Thursday"
#define DAY_4 "Friday"
#define DAY_5 "Saturday"
#define DAY_6 "Sunday"

//макрос для получения строки дня недели
#define GET_DAY_NAME(day) DAY_#day

int main() {
    int day;

    std::cout << "Enter the day of the week as a number (0-6): ";
    std::cin >> day;

    if (day >= 0 && day <= 6) {
        const char* dayName = " ";
        switch (day) {
        case 0: dayName = DAY_0; break;
        case 1: dayName = DAY_1; break;
        case 2: dayName = DAY_2; break;
        case 3: dayName = DAY_3; break;
        case 4: dayName = DAY_4; break;
        case 5: dayName = DAY_5; break;
        case 6: dayName = DAY_6; break;
        }
        std::cout << "The day of the week is: " << dayName << std::endl;
    }
    else {
        std::cout << "Invalid input! Please enter a number between 0 and 6." << std::endl;
    }
}
