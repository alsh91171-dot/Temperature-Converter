#include <iostream>
using namespace std;
int main()
{
    double celcius, farenheit, kelvin, temp;
    int choice1, choice2, choice3;
    char T1 = '\0', T2 = '\0';
    bool hasTemp = false;
    cout << "__________TEMPERATURE CONVERTER__________" << endl
         << endl;
    do
    {
        cout << "1.Choose the temperature scale you want to convert from" << endl;
        cout << "2.Choose the temperature scale you want to convert to" << endl;
        cout << "3.Enter the temperature value you want to convert" << endl;
        cout << "4.Press enter to get converted value" << endl;
        cout << "5.Exit " << endl;
        cout << "Enter your choice" << endl;
        cin >> choice1;
        switch (choice1)
        {
        case 1:
            cout << "Choose your temperature scale" << endl;
            cout << "1.Celcius" << endl;
            cout << "2.Farenheit" << endl;
            cout << "3.Kelvin" << endl;
            cin >> choice2;
            switch (choice2)
            {
            case 1:
                T1 = 'C';
                break;
            case 2:
                T1 = 'F';
                break;
            case 3:
                T1 = 'K';
                break;
            }
            break;
        case 2:
            cout << "Choose your desired tempeature scale" << endl;
            cout << "1.Celcius" << endl;
            cout << "2.Farenheit" << endl;
            cout << "3.Kelvin" << endl;
            cin >> choice3;
            switch (choice3)
            {
            case 1:
                T2 = 'C';
                break;
            case 2:
                T2 = 'F';
                break;
            case 3:
                T2 = 'K';
                break;
            }
            break;
        case 3:
            cout << "Enter the temperature value you want to convert" << endl;
            cin >> temp;
            hasTemp = true;
            break;
        case 4:
            if (T1 == '\0' || T2 == '\0' || !hasTemp)
            {
                cout << "Please make sure you have selected both temperature scales and entered a temperature value before converting." << endl;
                break;
            }
            if (T1 == 'C' && T2 == 'F')
            {
                farenheit = (temp * 9 / 5) + 32;
                cout << "The converted value of " << temp << " Celcius to Farenheit is:" << farenheit << endl;
            }
            else if (T1 == 'C' && T2 == 'K')
            {
                kelvin = temp + 273.15;
                cout << "The converted value of " << temp << " Celcius to Kelvin is :" << kelvin << endl;
            }
            else if (T1 == 'F' && T2 == 'C')
            {
                celcius = (temp - 32) * 5 / 9;
                cout << "The converted value of " << temp << " Farenheit to Celcius is :" << celcius << endl;
            }
            else if (T1 == 'F' && T2 == 'K')
            {
                kelvin = (temp - 32) * 5 / 9 + 273.15;
                cout << "The converted value of " << temp << " Farenheit to Kelvin is :" << kelvin << endl;
            }
            else if (T1 == 'K' && T2 == 'C')
            {
                celcius = temp - 273.15;
                cout << "The converted value of " << temp << " Kelvin to Celcius is :" << celcius << endl;
            }
            else if (T1 == 'K' && T2 == 'F')
            {
                farenheit = (temp - 273.15) * 9 / 5 + 32;
                cout << "The converted value of " << temp << " Kelvin to Farenheit is:" << farenheit << endl;
            }
            if (T1 == T2)
            {
                cout << "The converted value of " << temp << " " << T1 << " to " << T2 << " is: " << temp << endl;
            }
            break;
        case 5:
            cout << "EXITING THE PROGRAM" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice1 != 5);
    return 0;
}