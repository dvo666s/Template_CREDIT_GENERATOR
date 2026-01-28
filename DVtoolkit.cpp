#include <iostream>
#include <array>

// rand
#include <cstdlib>
#include <ctime>
// 

// h files
// #include <

// 
using namespace std;


int menu()
{   // ================= MENU ================= start
    bool running = true;
    int i = 0 ,key;
    char circle; 
        while(running)
            {    
                    if(i == 3) 
                    { // circle menu remover

                        cout << "|                                \n";          
                        cout << "=   do you want continue (y/n)   \n";      
                        cout << "|\t\t\t\t |\n -> ";
                        cin >> circle;
                    
                        if(circle == 'y' || circle == 'Y')
                        {
                        i = 0;
                        }
                        else if(circle == 'n' || circle == 'N')
                        {
                            running = false;
                            break;
                        }
                        
                        else if(circle != 'y' && circle != 'Y' && circle != 'n' && circle != 'N')
                        cout << "Invalid input \n";

                    } // circle menu remover

                i++;
                cout << "=\tUsage > 3\\"<< i <<" < Count\t =\n";
                cout << "=                                =\n";      
                cout << "=     1 => [ START         ]     =\n";
                cout << "=     0 => [ Exit          ]     =\n";
                cout << "|\t\t\t\t |\n -> ";
                cin >> key;
                if(key == 1 || key == 0)
                {
                    running = false;
                    circle = 'y';
                }
            }
    return key;
}   // ================= MENU ================= end

int calculator() // 0 calculater start
{
    bool running = true;
    int key2 , r = 0 , key;
    double num[2];
    array<char , 4> operators = {
        '+',
        '-',
        '*',
        '/'
    };
        if(r == 0)
            {
            cout << "|                                |\n";
            cout << "=        CHOOSE THE METHOD       =\n";
            }
            r++;
            key = menu();
    switch(key)
        {
            case 1:
                while(running)
                    {
                        cout << "|                                |\n";
                        cout << "=     0 => [       +       ]     =\n";
                        cout << "=     1 => [       -       ]     =\n";
                        cout << "=     2 => [       x       ]     =\n";
                        cout << "=     3 => [       /       ]     =\n";
                        cout << "=     4 => [ Exit          ]     =\n";
                        cout << "|\t\t\t\t |\n -> ";
                        cin >> key2;
                                switch (key2)
                                    {
                                    case 0:
                                        cout << "|\t\t\t\t |\n= num " << operators[0] << " num \n|\t\t\t\t |\n -> ";
                                        cin >> num[0];
                                        cout << "|\t\t\t\t |\n -> ";
                                        cin >> num[1];
                                        cout << "|\t\t\t\t |\n= " << num[0] << " " << operators[0]
                                            << " " << num[1] << " = " << num[0] + num[1] << "\n";
                                    break;
                                    case 1:

                                        cout << "|\t\t\t\t |\n= num " << operators[1] << " num \n|\t\t\t\t |\n -> ";
                                        cin >> num[0];
                                        cout << "|\t\t\t\t |\n -> ";
                                        cin >> num[1];
                                        cout << "|\t\t\t\t |\n= " << num[0] << " " << operators[1]
                                            << " " << num[1] << " = " << num[0] - num[1] << "\n";
                                    break;
                                    case 2:
                                        cout << "|\t\t\t\t |\n= num " << operators[2] << " num \n|\t\t\t\t |\n -> ";
                                        cin >> num[0];
                                        cout << "|\t\t\t\t |\n -> ";
                                        cin >> num[1];
                                        cout << "|\t\t\t\t |\n= " << num[0] << " " << operators[2]
                                            << " " << num[1] << " = " << num[0] * num[1] << "\n";
                                    break;
                                    case 3:
                                        cout << "|\t\t\t\t |\n= num " << operators[3] << " num \n|\t\t\t\t |\n -> ";
                                        cin >> num[0];
                                        cout << "|\t\t\t\t |\n -> ";
                                        cin >> num[1];
                                            if(num[1] == 0)
                                                {
                                                    cout << "Error: division by zero\n";
                                                    continue;
                                                }
                                        cout << "|\t\t\t\t |\n= " << num[0] << " " << operators[3]
                                            << " " << num[1] << " = " << num[0] / num[1] << "\n";
                                    break;
                                    case 4:
                                        running = false;
                                        cout << "|\t\t\t\t |\n=          [ EXIT          ]\n|\t\t\t\t |\n";
                                    break;
                                    }
                    }
            break;
            case 0:
                cout << "|\t\t\t\t |\n=          [ EXIT          ]\n|\t\t\t\t |\n";
            break;
        }
    
    return 0;
} // 0 calculater end

int calculate_kilobytes() // kilobytes cal start
{
    bool running = true;
    double kilobytes;
    int key;
    while(running)
        {
            key = menu();
                switch(key)
                    {
                        case 1:
                            cout << "|\t\t\t\t |\n=    TYPE NUMBER OF KILOBYTES    =";
                            cout << "\n|\t\t\t\t |\n -> ";
                            cin >> kilobytes;
                            cout << "|\t\t\t\t |\n= " << kilobytes << " kilobytes";
                            kilobytes *= 1024;
                            cout << "\n= " << kilobytes << " bytes";
                            cout << "\n= " << kilobytes * 8 << " bits\n";
                        break;
                        case 0:
                            running = false;
                            cout << "|\t\t\t\t |\n=          [ EXIT          ]\n|\t\t\t\t |\n";
                        break;
                    }
        }
    return 0;
} // kilobytes cal end

int calculate_life() // life cal start
{  
    bool running = true;
    int r = 0 , age, key;
    long months, weeks, days, hours, minutes;
    long long second = 60;

    while (running)
    {
        if(r == 0)
            {
            cout << "=               AGE CAL          =\n";
            }
            r++;
            int key = menu();
        switch (key)
        {
        case 1:

            cout << "|\t\t\t\t |\nenter your age\n|\t\t\t\t |\n -> ";
            cin >> age;
            months = age * 12;
            weeks = age * 52;
            days = age * 365;
            hours = days * 24;
            minutes = hours * 60;
            second = minutes * 60;


            cout << "|\t\t\t\t |\n= year: " << age;
            cout << "\n= month: " << months;
            cout << "\n= week: " << weeks;
            cout << "\n= days: " << days;
            cout << "\n= hours: " << hours;
            cout << "\n= minute: " << minutes;
            cout << "\n= second: " << second << "\n";

            break;

        case 0:

            running = false;
            cout << "|\t\t\t\t |\n=          [ EXIT          ]\n|\t\t\t\t |\n";

            break;
        }

    } // life cal end

    return 0;
}

int credit() // credit start
{
int key;
// ================= RANDOM DATA ================= start
    
    array<long long, 10> ranges {
        1000,10000, // credit id
        100000,10000000, // money
        1,12, // month
        27,35, // years
        100,200 // cvv
    };
    const int num = 4;
    array<long long, num> creditData; // cridet _ date _ date2 _ CVV

    array<int , 2> rangeIndex = {2,3};
    for(int i = 0; i < num; i++)
    {
        creditData[i] = ranges[rangeIndex[0]] + std::rand() % ( ranges[rangeIndex[1]] - ranges[rangeIndex[0]] ); //rangeIndex[0] => low_dist - rangeIndex[1] => high_dist
        rangeIndex[0] += 2 ,rangeIndex[1] += 2;
    } // ara[0] = cridet - ara[1] = date - ara[2] = date2 - ara[3] = CVV
    
    
    array<int , 4> id;
    for(int j = 0 ; j < 4 ; j++)
    {
        id[j] = ranges[0] + std::rand() % ( ranges[1] - ranges[0] );
    }
// ================= RANDOM DATA ================= end
bool running = true;
int r = 0;
string name;
    while(running)
        {
            if(r == 0)
            {
            cout << "|         CREDIT GENERATOR       |\n";
            }
            r++;
            int key = menu();
            switch (key)
            {
                case 1:
                cout << "|\n= Your name \n|\t\t\t\t |\n -> ";
                cin >> name;
                    cout << "|\t\t\t\t |\n= Name: " << name;
                    cout << "\n= ID: " << id[0] << " " << id[1] << " " << id[2] << " " << id[3];
                    cout << "\n= Date: " << creditData[2] << "/" << creditData[1];
                    cout << "\n= CVV: " << creditData[3];
                    cout << "\n= Cridets: " << creditData[0] << "\n|\n";
                break;

                case 0:
                    running = false;
                    cout << "|\t\t\t\t |\n=          [ EXIT          ]\n|\t\t\t\t |\n";
                break;
            }
        }
    return 0;
} // credit end

int main()
{ // manin start
    srand(time(nullptr));
    int key;
    bool running = true;
    while (running)
    {
        cout << "==================================\n";
        cout << "=             ENTRY POINT        =\n";
        cout << "=     0 => [ Calculator    ]     =\n";
        cout << "=     1 => [ Kilobytes cal ]     =\n";
        cout << "=     2 => [ Life cal      ]     =\n";
        cout << "=     3 => [ Credit card   ]     =\n";
        cout << "=     4 => [ Exit          ]     =\n";
        cout << "|\t\t\t\t |\n -> ";
        cin >> key;

        switch (key)
        {
        case 0:
            calculator();
            break;
        case 1:
            calculate_kilobytes();
            break;
        case 2:
            calculate_life();
            break;
        case 3:
            credit();
            break;
        case 4:
            running = false;
            cout << "|     0 => [ Exit          ]     |\n";
            cout << "==================================\n";
            break;
        }
    }
return 0;
} // manin end
