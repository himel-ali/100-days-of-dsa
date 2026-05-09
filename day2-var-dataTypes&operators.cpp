//Boiler Plate code ----->

// #include <iostream>
// using namespace std;

// int main () {

//     return 0;
// }

#include <iostream>
using namespace std;

int main () {

    // cout << " Himel\n Ali\n ";

    // //Variable

    //     //int
    //     // int age = 25;
    //     // cout<< sizeof(age)<<"\n";
    //     // cout<< age << "\n";

    //     //Char
    //     char grade = 'A';
    //     cout<< sizeof(grade)<<"\n";
    //     cout<< grade << "\n";


    //     //Float
    //     float PI = 3.14f; //variables whose value wont change in the future are identified by capital letters
    //     //writing f is necassary since computer would understand the value as double instead of float if we do not write it.
    //     cout<< sizeof(PI)<<"\n";
    //     cout<< PI << "\n";

    //     //Bool  true -> 1, false -> 0
    //     bool isSafe = true;
    //     cout<< sizeof(isSafe)<<"\n";
    //     cout<< isSafe << "\n";

    //     //Conversion ---> 
    //     float price = 100.99 ;
    //     cout << price << "\n" ;
    //     double newPrice = price;
    //     cout << newPrice << "\n" ;

    //     //Casting ----> explicit
    //     cout<< "explicit\n";
    //     float price2 = 100.99 ;
    //     cout << price2 << endl ;
    //     int newPrice2 = (int)price;  //(int) is neccassary for explicit 
    //     cout << newPrice2 << "\n" ;


    //     // Input in cpp ----->
    //     // cout<< "Input\n";
    //     // int age;
    //     // cout<< "enter your age ";
    //     // cin >> age;
    //     // cout<<"Your age is " << age << endl;

    //     // Cin and cout are global objects 

    //     ////Operators
    //     cout<<"arithmectic"<< endl;

    //         // Arithmetic ---> +, -, *, /, %
    //         int a = 5, b= 10;
    //         int sum = a + b;
    //         cout << sum << endl;

            //Relational -------> >, <, ==, >=, <=, !=
            //     cout<< (3<4)<<endl;
            //     cout<< (3>4)<<endl;
            //     cout<< (3==4)<<endl;

            // // Logaical OR -> ||, AND -> &&, NOT -> !
            // cout<< ((3<4)||(4<5))<<endl;
            //     cout<< ((3<4)&&(4<5))<<endl;
            //     cout<< !(3<4)<<endl;

            // Sum of two numbers
                double num1, num2, sum ;

                cout<< "Enter Num 1 : ";
                cin >> num1 ;
                
                cout<< "Enter Num 2 : ";
                cin >> num2 ;

                sum = num1 + num2;
               
                cout<< "Sum of the given two numbers are : "<< sum<<endl;




    return 0;
}


