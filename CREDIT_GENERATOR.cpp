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
    int i = 0 , key;
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
                            key = 0;
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

int main()
    { // credit start
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
int key;
string name;
    while(running)
        {
            if(r == 0)
            {
            cout << "|         CREDIT GENERATOR       |\n";
            }
            r++;
            if(key == 0)
                {
                    running = false;
                    break;
                }
            key = menu();
            switch (key)
            {
                case 1:
                cout << "|\n= Your name \n|\t\t\t\t |\n -> ";
                cin >> name;
                    cout << "|\t\t\t\t |\n= Name: " << name;
                    cout << "\n= ID: " << id[0] << " " << id[1] << " " << id[2] << " " << id[3];
                    cout << "\n= Date: " << creditData[2] << "/" << creditData[1];
                    cout << "\n= CVV: " << creditData[3];
                    cout << "\n= Cridets: " << creditData[0] << "\n";
                break;

                case 0:
                    // running = false;
                    cout << "|\t\t\t\t |\n=          [ EXIT          ]\n|\t\t\t\t |\n";
                break;
            }
        }
    return 0;
} // credit end
