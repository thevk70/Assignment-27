// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
// #include <iostream>
// using namespace std;
// class Complex
// {
//    int a,b;
//    public:
//    Complex(int x = 0,int y = 0)
//    {
//      a = x, b = y;
//    }
//    void display()
//    {
//      cout<<"a = "<<a<<" b = "<<b<<endl;
//    }
//    Complex operator+(Complex obj)
//    {
//      Complex temp;
//      temp.a = a + obj.a;
//      temp.b = b + obj.b;
//      return temp;
//    }
//    Complex operator-(Complex obj)
//    {
//      Complex temp;
//      temp.a = a - obj.a;
//      temp.b = b - obj.b;
//      return temp;
//    }
//    Complex operator*(Complex obj)
//    {
//      Complex temp;
//      temp.a = a * obj.a;
//      temp.b = b * obj.b;
//      return temp;
//    }
//    void operator==(Complex obj)
//    {
//       a = obj.a;
//       b = obj.b;
//    }
// };
// int main()
// {
//     Complex obj1(1,2),obj2,obj3,obj4;
//     obj2 = obj1;
//     obj2.display();
//     obj3 = obj1 + obj2;
//     obj3.display();
//     obj4 = obj3 - obj1;
//     obj4.display();
//     obj4 = obj1 * obj2;
//     obj4.display();
//     return 0;
// }

// 2. Write a C++ program to overload unary operators that is increment and decrement.
// #include <iostream>
// using namespace std;
// class unary
// {
//     int a;
//     public:
//     unary(int x)
//     {
//         a = x;
//     }
//     void display()
//     {
//         cout<<"a = "<<a<<endl;
//     }
//     void operator++() //Pre increment
//     {
//         a = ++a;
//     }
//     void operator++(int) //Post Increment
//     {
//         a = a++;
//     }
//     void operator--() //Pre Decrement
//     {
//         a = --a;
//     }
//     void operator--(int) //Post Decrement
//     {
//         a = a--;
//     }
// };
// int main()
// {
//     unary obj1(1),obj2(2);
//     --obj1;
//     obj1.display();
//     ++obj2;
//     obj2.display();
//     obj1++;
//     obj1.display();
//     obj2++;
//     obj2.display();
//     return 0;
// }

// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend
// function.
// #include <iostream>
// using namespace std;
// class complex
// {
//     int a,b;
//     public:
//     complex(int x = 0,int y =0)
//     {
//         a = x,b = y;
//     }
//     void display()
//     {
//         cout<<"a = "<<a<<" b = "<<b<<endl;
//     }
//     friend complex operator+(complex obj1,complex obj2);
// };
// complex operator+(complex obj1,complex obj2)
// {
//     complex temp;
//     temp.a = obj1.a + obj2.a;
//     temp.b = obj1.b + obj2.b;
//     return temp;
// }
// int main()
// {
//     complex obj1(4,6),obj2(6,4),obj3;
//     obj3 = obj1 + obj2;
//     obj3.display();
//     return 0;
// }

// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
// #include <iostream>
// using namespace std;
// class Time
// {
//     int hr,min,sec;
//     public:
//      void normarlize()
//      {
//         min = min + sec / 60;
//         sec = sec % 60;
//         hr = hr + min / 60;
//         min = min % 60;
//      }
//     friend void operator==(Time , Time);
//     friend void operator>>(istream&,Time&);
//     friend void operator<<(ostream&,Time&);
// };
// void operator==(Time obj1,Time obj2)    //1. = = : To check whether two Times are the same or not.
// {
//     if(obj1.hr==obj2.hr && obj1.min==obj2.min && obj1.sec==obj2.sec)
//     cout<<"Times are same";
//     else
//      cout<<"Times are not same";
// }
// void operator>>(istream &din,Time &obj)   // 2. >> : To accept the time.
// {
//    cout<<"Enter Hours : ";
//    din>>obj.hr;
//    cout<<"Enter Minutes : ";
//    din>>obj.min;
//    cout<<"Enter Seconds : ";
//    din>>obj.sec;
// }
// void operator<<(ostream &dout,Time &obj)   // 3. << : To display the time.
// {
//     obj.normarlize();
//     dout<<"Hours : "<<obj.hr<<endl;
//     dout<<"Minutes : "<<obj.min<<endl;
//     dout<<"Second : "<<obj.sec<<endl;
//     dout<<endl;
// }
// int main()
// {
//     Time t1,t2;
//     cout<<"Enter First Time"<<endl;
//     cout<<"--------------------"<<endl;
//     cin>>t1;
//     cout<<"First Time"<<endl;
//     cout<<t1;
//     cout<<"Enter Second Time"<<endl;
//     cout<<"--------------------"<<endl;
//     cin>>t2;
//     cout<<"Second Time"<<endl;
//     cout<<t2;
//     t1==t2;
//     return 0;
// }

// 5. Consider following class Numbers
// class Numbers
// {
//      int x,y,z;
//  public:
//  // methods
// };
// Overload the operator unary minus (-) to negate the numbers.
// #include <iostream>
// using namespace std;
// class Numbers
// {
//   int x,y,z;
//   public:
//   Numbers(int a,int b = 0,int c = 0)
//   {
//     x = a, y = b, z = c;
//   }
//   void display()
//   {
//     cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
//   }
//   void operator-()
//   {
//     x = -x;
//     y = -y;
//     z = -z;
//   }
// };
// int main()
// {
//     Numbers obj(1,2,3);
//     -obj;
//     obj.display();
//     return 0;
// }

// 6. Create a class CString to represent a string.
//  a) Overload the + operator to concatenate two strings.
//  b) == to compare 2 strings.
// #include <iostream>
// #include <string.h>
// using namespace std;
// class CString
// {
//     char str[100];
//     int length;
// public:
//     void input()
//     {
//         cout<<"Enter string::"<<endl;
//         cin.getline(str, 100);
//     }
//     void display()
//     {
//         cout << "String :: " << str << endl;
//     }
//     CString operator+(CString obj)
//     {
//         CString temp;
//         strcpy(temp.str, str);
//         strcat(temp.str, obj.str);
//         return temp;
//     }
//     int operator==(CString &t)
//     {
//         int equalOrNot = 1;
//         for (int i = 0; str[i] != '\0'; i++)
//         {
//             if (str[i] != t.str[i])
//             {
//                 equalOrNot = 0;
//                 break;
//             }
//         }
//         return equalOrNot;
//     }
// };
// int main()
// {
//     CString s1, s2, s3;
//     s1.input();
//     s2.input();
//     s3 = s1+s2;
//     s3.display();
//     return 0;
// }

// 7. Define a C++ class fraction
// class fraction
// {
//  long numerator;
//  long denominator;
//  Public:
//  fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
// #include <iostream>
// using namespace std;
// class fraction
// {
//     long int nume,deno;
//     public:
//     void operator++()
//     {
//         nume = ++nume;
//         deno = ++deno;
//     }
//     void operator++(int)
//     {
//         nume = nume++;
//         deno = deno++;
//     }
//     void operator--()
//     {
//         nume = --nume;
//         deno = --deno;
//     }
//     void operator--(int)
//     {
//         nume = nume--;
//         deno = deno--;
//     }
//     void display()
//     {
//         cout<<nume<<"/"<<deno<<endl;
//     }
//     friend void operator<<(ostream&,fraction&);
//     friend void operator>>(istream&,fraction&);
// };
// void operator<<(ostream &pout,fraction &obj)
// {
//     pout<<"Numerator    :   "<<obj.nume<<endl;
//     pout<<"Denominator  :   "<<obj.deno<<endl;
// }
// void operator>>(istream &pin,fraction &obj)
// {
//     cout<<"Numenator::";
//     pin>>obj.nume;
//     cout<<"Denominator::";
//     pin>>obj.deno;
// }
// int main()
// {
//     fraction f1,f2;
//     cout<<"Enter 1st fraction Value"<<endl;
//     cin>>f1;
//     f1++;
//     cout<<"f1++ :   ";
//     f1.display();
//     ++f1;
//     cout<<"++f1 :   ";
//     f1.display();
//     cout<<"Enter 2nd fraction Value"<<endl;
//     cin>>f2;
//     f2++;
//     cout<<"f2++ :   ";
//     f2.display();
//     ++f2;
//     cout<<"++f2 :   ";
//     f2.display();
//     return 0;
// }

// 8. Consider a class Matrix
// Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
// #include <iostream>
// using namespace std;
// class Matrix
// {
//     int m[3][3];
// public:
//     void input()
//     {
//         cout<<"Enter elements of matrix::"<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cin >> m[i][j];
//             }
//         }
//     }
//     void display()
//     {
//         cout<<"Matrix::"<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cout<<m[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     void operator-()
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 m[i][j] = -m[i][j];
//             }
//         }
//     }
// };
// int main()
// {
//     Matrix obj;
//     obj.input();
//     -obj;
//     obj.display();
//     return 0;
// }

// 9. Consider the following class mystring
// Class mystring
// {
//  char str [100];
//  Public:
//  // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
// Lowercase and vice versa).
// #include <iostream>
// #include <string.h>
// using namespace std;
// class mystring
// {
//     char str[100];
//     public:
//     void operator!()
//     {
//        for (int i = 0; i < strlen(str); i++)
//        {
//           if (str[i] >= 'A' && str[i] <= 'Z')
//           {
//              str[i] = str[i] + 32;
//           }
//           else if(str[i] >= 'a' && str[i] <= 'z')
//           {
//             str[i] = str[i] - 32;
//           }
//        }
//     }
//     void input()
//     {
//         cout<<"Enter string ::"<<endl;
//         cin.getline(str,100);
//     }
//     void display()
//     {
//       cout<<"String :: "<<str<<endl;
//     }
// };
// int main()
// {
//     mystring s;
//     s.input();
//     !s;
//     s.display();
//     return 0;
// }

// 10. Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
// #include <iostream>
// using namespace std;
// class Matrix
// {
//     int a[3][3];
//     public:
//     void input()
//     {
//         cout<<"Enter all 9 elements of matrix::"<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cin>>a[i][j];
//             }
//         }
//     }
//     void display()
//     {
//         cout<<"Matrix::"<<endl;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     Matrix operator+(Matrix b)
//     {
//         Matrix temp;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 temp.a[i][j] = a[i][j] + b.a[i][j];
//             }
//         }
//         return temp;
//     }
// };
// int main()
// {
//     Matrix x,y,z;
//     x.input();
//     x.display();
//     y.input();
//     y.display();
//     z = x + y;
//     z.display();
//     return 0;
// }