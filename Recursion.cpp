//Lab 2 Mohammadzadeh, Hiva Thursday

#include<iostream>
#include<fstream>

using namespace std;

//Function prototypes
double PowerFunc(int base, int power);
int SeriesFrom1ToN(int number);
int SeriesFromNTo1(int number);
void SumChoice(int choice);


int main()
{
    
    int choice, base, power;
  
    cout << fixed<< showpoint<< setprecision(2);
    cout << "Welcome To The Menu! \n";
    while (1)
    {
       cout << "\nEnter 1-4\n"
                "1. Calculate the power \n"
            << "2. Sum of the squares for the first n terms of the series from 1 to n\n"
            << "3. Sum of the squares for the first n terms of the series from n to 1\n"
            << "4. To quit \n"<< endl;

        cin >> choice;

        if (choice == 4)
            break;

        switch (choice)
        {

        case 1:
            try {
                cout << "Enter the values of the base : " <<endl;
                cin >> base;
                cout << "Enter the values of the power : "<< endl;
                cin >> power;
                cout << "Result is: " << setprecision(2) << PowerFunc(base, power) << endl;
            }
            catch (int e)
            {
                cout << "Can't do 0 to a negative power." << endl;
            }
            break;

        case 2:
            SumChoice(choice);
            
            break;

        case 3:
            SumChoice(choice);

            break;

        default: cout << endl << "Please enter valid choice ( between 1 to 4 )\n";
            cin.clear();
            cin.ignore(255, '\n');
        }

    }

    cout << "\n";
    return 0;
}
void SumChoice(int choice)
{
    int number, sum;
    
    if (choice == 2) {
        do
        {
            cout << "the number of terms (above zero): \n";
            cin >> number;


        } while (number <= 0);

        sum = SeriesFrom1ToN(number);
        cout << " = " << sum << "\n";
    }
    else if (choice == 3) {
        do
        {
            cout << "the number of terms (above zero): \n";
            cin >> number;


        } while (number <= 0);

        sum = SeriesFrom1ToN(number);
        cout << " = " << sum << "\n";
    }
        


}
double PowerFunc(int base, int power)
{
    
    if (base == 0 && power < 0) {
        throw 1;
    }
    else
    {
        if (power == 0)
            return 1;
        else if (power == 1)
            return base;
        else if (power == -1)
            return 1 / base;
        else if (power < 0)
        {
            power *= -1;
            return 1 / ( base * PowerFunc(base, power - 1));
        }
        else if (power > 0)
            return base * PowerFunc(base, power - 1); // recursive call;
        else return 0;
    }
    
}

int SeriesFrom1ToN(int number)
{
    int answer;
    // base case
    if (number == 1)
    {
        cout << "1 ";
        return 1;

    }

    answer = number * number + SeriesFrom1ToN(number - 1); // recursive call

    // printf statement after recursive call
    cout << "+ " << "(" << number << "*" << number << ")" << " ";
    return answer;

}

int SeriesFromNTo1(int number)
{
    int answer;
    // base case
    if (number == 1)
    {
        cout << "1 ";
        return 1;

    }

    /* print statement before recursive call */
    cout << "(" << number << "*" << number << ")" << " + ";

    answer = number * number + SeriesFromNTo1(number - 1); // recursive call

    return answer;

}

/*
Test Data: 

Welcome!

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

hfsjkhfjksgkdsj

Please enter valid choice ( between 1 to 4 )

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

7

Please enter valid choice ( between 1 to 4 )

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
0
Enter the values of the power :
0
Result is: 1

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
0
Enter the values of the power :
1
Result is: 0

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
0
Enter the values of the power :
-1
Can't do 0 to a negative power.

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
-3
Enter the values of the power :
-3
Result is: -0.037037

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
2
Enter the values of the power :
-3
Result is: 0.125

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
4
Enter the values of the power :
0
Result is: 1

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
2
Enter the values of the power :
2
Result is: 4

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

1
Enter the values of the base :
1
Enter the values of the power :
9
Result is: 1

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

2
the number of terms :
6
1 + (2*2) + (3*3) + (4*4) + (5*5) + (6*6)  = 91

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

2
the number of terms :
5
1 + (2*2) + (3*3) + (4*4) + (5*5)  = 55

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

2
the number of terms :
5
1 + (2*2) + (3*3) + (4*4) + (5*5)  = 55

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

3
the number of terms :
5
(5*5) + (4*4) + (3*3) + (2*2) + 1  = 55

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

3
the number of terms :
9
(9*9) + (8*8) + (7*7) + (6*6) + (5*5) + (4*4) + (3*3) + (2*2) + 1  = 285

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

2
the number of terms :
9
1 + (2*2) + (3*3) + (4*4) + (5*5) + (6*6) + (7*7) + (8*8) + (9*9)  = 285

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

2
the number of terms :
-3
Please Enter a number greater than zero.

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

3
the number of terms :
-4
Please Enter a number greater than zero.

1. Calculate the power
2. Sum of the squares for the first n terms of the series from 1 to n
3. Sum of the squares for the first n terms of the series from n to 1
4. To quit

 */
