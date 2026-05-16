//Credit - Apna college

//Patterns
// Outter loop and inner loop

#include <iostream>
using namespace std;

int main (){


    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j =0; j < n; j++){
    //         cout << j +1 ;
    //     }
    //     cout << endl;
    // }

    // ---------->

        // 123456
        // 123456
        // 123456
        // 123456
        // 123456
        // 123456

    //  int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j =0; j < n; j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // }


    // ------------->>>    ******
    //                     ******
    //                     ******
    //                     ******
    //                     ******
    //                     ******

    //  int n, k = 1;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    // ----------------->>>> Enter a number : 3
    //                         1 2 3 
    //                         4 5 6 
    //                         7 8 9 



    // RIGHT ANGLE TRINGLE

    // Floyd's Triangle Pattern

    // int n, k = 1;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j = 0; j <= i; j++){
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    // ------------>>> Enter a number : 5
    //                     1 
    //                     2 3 
    //                     4 5 6 
    //                     7 8 9 10 
    //                     11 12 13 14 15 

            // int n;
            // cout << "Enter a number : ";
            // cin >> n;

            // for ( int i=0; i<n;i++){
            //     for (int j = 0; j<=i ; j++){
            //         cout << i + 1<< " " ;
            //     }
            //         cout << endl;
            // }

           // Output ----------->>> Enter a number : 6
                    // 1 
                    // 2 2 
                    // 3 3 3 
                    // 4 4 4 4 
                    // 5 5 5 5 5 
                    // 6 6 6 6 6 6 


            //           int n;
            // cout << "Enter a number : ";
            // cin >> n;

            // for ( int i=0; i<n;i++){
            //     for (int j = 0; j<=i ; j++){
            //         cout << j + 1<< " " ;
            //     }
            //         cout << endl;
            // }

            // Output -------->>> Enter a number :  6
            //         1 
            //         1 2 
            //         1 2 3 
            //         1 2 3 4 
            //         1 2 3 4 5 
            //         1 2 3 4 5 6 

// Right angle tringle with numbers iin reverse order

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j = i+1; j> 0; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Output ------------>>>> Enter a number : 6
    //                         1 
    //                         2 1 
    //                         3 2 1 
    //                         4 3 2 1 
    //                         5 4 3 2 1 
    //                         6 5 4 3 2 1 


    //REVERSE TRIANGLE
    //  int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j = 0; j < n -i; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // } 

    // Output ------------->>>

    // Enter a number : 6
    //             * * * * * * 
    //             * * * * * 
    //             * * * * 
    //             * * * 
    //             * * 
    //             * 

        // int n;

        // cout << "Enter a number : ";
        // cin >> n;

        // for (int i = 0; i<n ; i++){
        //     for (int j = 0; j< n - i; j++){
        //         cout << j+1<< " ";
        //     }
        //     cout << endl;
        // }


        // Output ------>>> Enter a number : 6
        //                 1 2 3 4 5 6 
        //                 1 2 3 4 5 
        //                 1 2 3 4 
        //                 1 2 3 
        //                 1 2 
        //                 1 

        //   int n;

        // cout << "Enter a number : ";
        // cin >> n;

        // for (int i = 0; i<n ; i++){
        //     int k = n;
        //     for (int j = 0; j< n - i; j++){
        //         cout << k << " ";
        //         k--;
        //     }
        //     cout << endl;
        // }

        // OR

        
    //   int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // for (int i = 0; i<n; i++){
    //     for (int j = 0; j < n -i; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

        // Output ---------->>>    6 5 4 3 2 1 
        //                         6 5 4 3 2 
        //                         6 5 4 3 
        //                         6 5 4 
        //                         6 5 
        //                         6 



        // Inverted Triangle Pattern

        // int n;
        // cout << " Enter a Number : ";
        // cin >> n;

        // for (int i = 0; i<n; i++){
        //     for (int j = 0; j< i; j++){
        //         cout << "  ";
        //     }
        //     for (int k = 0 ; k<n-i; k++){
        //         cout << i + 1 << " ";
        //     }
        //         cout << endl;
        // }


        // Output ------------>>>  Enter a Number : 6
        //                             1 1 1 1 1 1 
        //                               2 2 2 2 2 
        //                                 3 3 3 3 
        //                                   4 4 4 
        //                                     5 5 
        //                                       6
            

//  int n;
//         cout << " Enter a Number : ";
//         cin >> n;

//         for (int i = 0; i<n; i++){
//             for (int j = 0; j< i; j++){
//                 cout << " ";
//             }
//             for (int k = 0 ; k<n-i; k++){
//                 cout << i + 1 << " ";
//             }
//                 cout << endl;
//         }

    //    Output ---------->>>>  Enter a Number : 6
    //                                    1 1 1 1 1 1 
    //                                     2 2 2 2 2 
    //                                      3 3 3 3 
    //                                       4 4 4 
    //                                        5 5 
    //                                         6 


    //  int n;
    //     cout << " Enter a Number : ";
    //     cin >> n;

    //     for (int i = 0; i<n; i++){
    //         for (int j = 0; j< n-i-1; j++){
    //             cout << " ";
    //         }
    //         for (int k = 0 ; k<=i; k++){
    //             cout << i + 1 << " ";
    //         }
    //             cout << endl;
    //     }

        // Output ------------>>>> Enter a Number : 6
        //                          1 
        //                         2 2 
        //                        3 3 3 
        //                       4 4 4 4 
        //                      5 5 5 5 5 
        //                     6 6 6 6 6 6 

        // int n;
        // cout<< " Enter a number : ";
        // cin >> n;

        // for (int i =0 ; i<n; i++){
        //     for (int j =0; j< n-i-1 ; j++){
        //         cout << "  ";
        //     }
        //     for ( int k = 0; k<= i; k++){
        //         cout << k+1 << " ";
        //     }
           
        //     for ( int l = i-1; l>=0 ; l--){
        //         cout << l+1<< " ";
        //     }
        //      cout << endl;
        // }


        // Output ------------->>>>  Enter a number : 6
        //                                 1 
        //                               1 2 1 
        //                             1 2 3 2 1 
        //                           1 2 3 4 3 2 1 
        //                         1 2 3 4 5 4 3 2 1 
        //                       1 2 3 4 5 6 5 4 3 2 1 


        // Hollow Diamond pattern  

        int n;
        
        cout<< "Enter a number : ";
        cin >> n;

        for (int i = 0; i< n; i++){
            for (int j =0; j< n-i; j++){
                cout << " ";
            }
            for (int k = 0; k<=i; k++){
                cout << "*"<< " ";
            }
            for (int l = 0; l<i; l++){
                cout << "*"<< " ";
            }
            cout << endl;

        }









    return 0;
}