
#include <iostream>
#include <windows.h>

using namespace std;
HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    do
    {
        string whatYouWanna;
        cout << "To start write RUN to exit write EXIT: ";

        cin >> whatYouWanna;

        if (whatYouWanna == "RUN")
        {
                string endOrNot;
                int fenceLong, a, b, squareMeter;

                cout << "How many fence in meters is availible?: ";

                cin >> fenceLong;

                if (cin.fail() == 1)
                {

                    SetConsoleTextAttribute(consoleColor, 12);
                    cout << "It is not a number! Or to much fence!\nTry again!" << endl;
                    SetConsoleTextAttribute(consoleColor, 7);
                    break;
                }

                if (fenceLong >= 0)
                {
                    a = fenceLong / 3;
                    b = a;
                    cout << "a = " << a << " meters, b = " << b << " meters" << endl;
                   
                        squareMeter = a * b;
                        if (squareMeter < 0)
                        {
                            cout << "The area of your farm is HUGE!" << endl;
                            
                        }
                        else
                        {
                            cout << "The area of your farm is: " << squareMeter << " square meters" << endl;
                        }
                    while (true)
                    {
                        cout << "Try again? YES/NO ";
                        cin >> endOrNot;

                        if (endOrNot == "YES")
                        {
                            break;
                        }
                        else if (endOrNot == "NO")
                        {
                            goto endProgram;
                        }
                        else
                        {
                            SetConsoleTextAttribute(consoleColor, 12);
                            cout << "Wrong word!\nTry again and remember to write YES or NO in big letters" << endl;
                            SetConsoleTextAttribute(consoleColor, 7);
                            continue;

                        }
                    }

                }

                if (fenceLong < 0)
                {
                    SetConsoleTextAttribute(consoleColor, 12);
                    cout << "You do it wrong! \nTry again and remember! Do not use negative numbers!" << endl;
                    SetConsoleTextAttribute(consoleColor, 7);
                    continue;
                }
               
        }

        else if (whatYouWanna == "EXIT")
        {
        endProgram:

            cout << "BYE!" << endl;
            break;
        }

        else
        {
            SetConsoleTextAttribute(consoleColor, 12);
            cout << "It's not correct word!\nRemember to use big letters! " << endl;
            SetConsoleTextAttribute(consoleColor, 7);
            continue;
        }

    } while (true);

    return 0;

}

