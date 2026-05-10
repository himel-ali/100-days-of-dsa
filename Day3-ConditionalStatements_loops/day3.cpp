// Conditional Satements
//if-else syntax

#include <iostream>
using namespace std;


main () {
    // int validAge= 18, age ;
    // cout<<  "Enter Your age : ";
    // cin >> age ;

    // if (age >= validAge  ){
    //     cout<< "Ready to vote!!!" << endl;
    //     }

    //     else {
    //         cout << "Not ready to vote.";
    //     }


    //Odd or Even
    // int num;

    // cout << "Enter a Number : ";
    // cin >> num;
    
    // if ( num % 2 == 0){
    //     cout << "The given number "<< num<< " is even.";
    // } else {
    //     cout << "The given number "<< num<< " is odd.";
    // }

    //Grading system

    // float marks;
    // cout<< "Enter your marks : ";
    // cin>> marks;

    // if ( marks > 100 || marks < 0){
    //     cout<< "Invalid Marks entered.";
    // } else if ( marks >= 90 && marks <= 100  ){
    //     cout<< "Your grade is A";
    // } else if ( marks >= 80 && marks < 90 ){
    //     cout << "Your grade is B";
    // } else if ( marks >= 70 && marks < 80){
    //     cout << "Your grade is C";
    // } else if ( marks >= 60 && marks < 70){
    //     cout << "Your grade is D";
    // } else {
    //     cout << "Study Harder. ";
    // }


   // FInd Character lowercase or uppercase
    // char letter;
    // cout << "Enter a letter form english alphabet : ";
    // cin >> letter;
    
    // // int letterNum  =  letter;
    // // cout<< letterNum; C++ automatically compares characters by their ASCII value.

    // if ( letter >= 'A' &&  letter <= 'Z'){
    //     cout << " The Given letter is a Uppercase letter.";
    // } else if ( letter >= 'a' && letter <= 'z'){
    //     cout << " The Given letter is a Lowercase letter.";
    // }else {
    //     cout << "Invalid entry.";
    // }

     //Ternary Statement 
    //  int n;
    //  cout << "enter";
    //  cin >> n;
    //  cout << ( n >= 0?"pos":"neg");

    //LOOPS

     // While Loop
     // Print 1 to 50

    //  int i = 1;  // <--- Statement of initialization.
    //  int targetNum =50;
    // //  while (i <= targetNum){
    // //     cout<< i<<endl;
    // //     i++;
    // //  }

    //  // For Loop
    //  // print 1 to 50

    //  for (int j=1 ; j <= targetNum ; j+=4 ){
    //     cout << j<<endl;
    //  }


    //Sum of the numbers form 1 to n
    // int n, sum = 0;
    // cout << " Enter a number : ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     sum = sum + i;
    // } 
    // cout << sum;

    // Sum of all odd numbers from 1 to n
    // int n, sum = 0;
    // cout << "Enter a number : ";
    // cin >> n;
    // for ( int i = 1; i<=n ; i++ ){
    //     if ( i % 2 != 0){
    //         sum += i;
    //     }
    // } cout << "Sum of all odd number form 1 till the enterd digit is "<< sum ;

     // Sum of all even numbers from 1 to n
    // int n, sum = 0;
    // cout << "Enter a number : ";
    // cin >> n;
    // for ( int i = 1; i<=n ; i++ ){
    //     if ( i % 2 == 0){
    //         sum += i;
    //     }
    // } cout << "Sum of all even number form 1 till the enterd digit is "<< sum ;

    // Sum of all odd numbers from 1 to n using while loop
    // int n, sum = 0;
    // cout << "Enter a number : ";
    // cin >> n;
    // for ( int i = 1; i<=n ; i++ ){
    //     if ( i % 2 != 0){
    //         sum += i;
    //     }
    // } cout << "Sum of all odd number form 1 till the enterd digit is "<< sum ;

    // int n, i = 1,sum =0 ;
    // cout << "Enter a number : ";
    // cin >> n;
    // while ( i <= n){
    //     if (  i % 2 != 0){
    //         sum += i;
    //     }
    //     i++;

    // } 
    // cout << "Sum of all odd number form 1 till the entered digit is "<< sum ;


    // Do While Loop

    // int n, i=1 ;
    // cout << "Enter a number : ";
    // cin >> n;
    // do {
    //     if ( i % 2 == 0 ){
    //             cout << i<< endl;
    //     }
    //     i++;
    // } while ( i<=n  );



    //Check if a number is prime or not
    // int n, i = 2;
    // bool isPrime = true;

    // cout << "Enter a number : ";
    // cin >> n;
    
    // for ( i ; i<n ; i++){
    //       if ( n % i == 0){
    //         isPrime = false;
    //         break;
    //       } 
    // }

    // if ( isPrime && n >1 ){
    //     cout << n<< " is prime";
    // } else {
    //     cout << n<< " is not prime";
    // }
        

    // Nested Loops --- > Loop inside loop.

    // int n;
    // cout << "Enter a Number : ";
    // cin >> n;

    // for (int i = 1; i<=n ; i++){
    //     for (int j = 1; j<= n; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Sum of all numbers for 1 to n whhich are divisible by 3

//     int n, i = 1,sum =0 ;
//     cout << "Enter a number : ";
//     cin >> n;
//     while ( i <= n){
//         if (  i % 3 == 0){
//             sum += i;
//         }
//         i++;

//     } 
//    cout << "Sum of all multiples of 3 from 1 till "
//      << n << " is : " << sum;


    // Facorial of a number N

    int n, fact = 1;
    cout << "Enter a number : ";
    cin >> n;
    for ( int i = 1; i<=n ; i++ ){
        fact *= i;
    } 
    cout << "factorial of the given digit is : "<< fact ;





return 0;
}