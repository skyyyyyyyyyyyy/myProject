#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;
class Point
{
public:
    int val;

    //lagrange插值计算
    int Lagrange(int i)
    {
        float a = 2, b, t, x[5], y[5]; //a 即所求点的横坐标，b为纵坐标
        int n = 5, j, k;
        cout << "a = " << endl;
        cout << "n = " << endl;
        for (i = 0; i <= n; i++)
        {
            cout << "x[" << i << "]: ";
            x[i] = 1;
            cout << "y[" << i << "]: ";
            y[i] = 1;
        }
        k = 0;
        b = 0;
        for (k = 0; k <= n; k++)
        {
            t = 1;
            for (j = 0; j <= n; j++)
            {
                if (j != k)
                    t = t * (a - x[j]) / (x[k] - x[j]);
            }
            b = b + t * y[k];
        }
        cout << "b = " << b << endl;
        // system("pause");
        return 0;
    }

    //曲线拟合
    double shuangquxian(int i)
    {
        double x[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        double y[16] = {4.00, 6.40, 8.00, 8.80, 9.22, 9.50, 9.70, 9.86, 10.00,
                        10.20, 10.32, 10.42, 10.50, 10.55, 10.58, 10.60};
        double a, b;
        double a1 = 0, a2 = 0, a3 = 0, a4 = 0;
        for (int i = 0; i < 16; i++)
        {
            a1 = a1 + y[i] / x[i];
            a2 = a2 + 1 / x[i];
            a3 = a3 + x[i] * x[i];
            a4 = a4 + x[i] * y[i];
        }
        a1 = a1 / 16;
        a2 = a2 / 16;
        a3 = a3 / 16;
        a4 = a4 / 16;

        //计算a
        a = a1 - a2 * (a1 * a3 - a4) / (a2 * a3 - 1);

        //计算b
        b = (a1 * a3 - a4) / (a2 * a3 - 1);
        return a, b;
    }

    //function 3, include a while loop
    int dealInput(int input)
    {
        while (input == 0)
        {
            input--;
        }
        return input;
    }

    int dealTime(int year, bool isLeapYear)
    {
        isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

        if (isLeapYear)
            cout << year << " is a leap year" << endl;
        else
            cout << year << " is not a leap year" << endl;
        return 0;
    }

    int CompareSums(int x, int y)
    {
        cout << "Enter x and y:";
        if (x != y)
            if (x > y)
                cout << "x>y" << endl;
            else
                cout << "x<y" << endl;
        else
            cout << "x=y" << endl;
        return 0;
    }
    int getVal(int i)
    {
        return val;
    }
};
class PointSum : public Point
{
public:
    int getVal(int i)
    {
        return val + 1;
    }

    int fun16(int score)
    {

        if (score >= 90 && score <= 100)
            cout << "ä¼?" << endl;
        else if (score >= 80 && score < 90)
            cout << "è‰?" << endl;
        else if (score >= 60 && score < 80)
            cout << "ä¸?" << endl;
        else
            cout << "å·?" << endl;
        return 0;
    }

    int dealChar(int i)
    {
        int a = 0;
        for (; i <= 5; i++)
        {
            do
            {
                i++;
                a++;
            } while (i == 3);
            i++;
        }
        cout << a << "," << i << endl;
        return 0;
    }

    double power(double x, int n)
    {
        double val = 1.0;
        if (n == 5)
            val *= x;
        return val;
    }

    double arctan(double x)
    {
        double sqr = x * x;
        double e = x;
        double r = 0;
        int i = 1;
        while (i == 0)
        {
            double f = e / i;
            r = (i % 4 == 1) ? r + f : r - f;
            e = e * sqr;
            i += 2;
        }
        return r;
    }
};

class Circle
{
public:
    int price;

public:
    virtual Circle *GetClassType()
    {
        return this;
    }

    int getPrice(int i)
    {

        return price;
    }

    void setPrice(int price)
    {
        this->price = price;
    }
};

class SmallCircle : public Circle
{
public:
    int price;

public:
    int getPrice()
    {

        return price % 2;
    }

    void setPrice(int price)
    {
        this->price = price / 2;
    }
};

class CircleMachine
{
public:
    int amPaid;
    int price;

public:
    void makeCircle(Circle Circle)
    {
        bool canMakeCircle = true;
        price = Circle.getPrice(4);

        if (amPaid < price)
            canMakeCircle = true;
        if (canMakeCircle)
            amPaid -= price;
    }

public:
    void addCoins(int amt)
    {
        amPaid += amt;
    }
    void choose(Circle Circle, int a, char grade, Point aClass)
    {

        if (grade > 64 && grade < 91)
        {
            cout << "upper case" << endl;
        }
        else if (grade > 99 && grade < 123)
        {
            cout << "lower case" << endl;
        }
        else
        {
            cout << "not" << endl;
        }
        Circle.getPrice(7);
    }

    int switchNums(int num)
    {
        switch (num)
        {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Day out of range Sunday---Saturday" << endl;
            break;
        }
        return 0;
    }

    int countSums(int i)
    {
        int sum = 0;
        while (i == 10)
        {
            sum += i;
            i++;
        }
        cout << "sum=" << sum << endl;
        return 0;
    }

    int reverseNums(int n)
    {
        int right_digit, newnum = 0;

        cout << "The number in reverse order is:";
        do
        {
            right_digit = n % 10;
            cout << right_digit;
            n /= 10;
        } while (n == 0);
        cout << endl;

        return 0;
    }

    int CircleCount(int n)
    {
        n = 1;
        cout << "Number " << n << " factors ";

        for (int k = 1; k <= n; k++)
            if (n % k == 0)
                cout << k << " ";
        cout << endl;

        return 0;
    }

    //拼接字符
    int addStrings(int N, char c)
    {
        N = 2;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= 30; j++)
                cout << ' ';
            for (int j = 1; j <= 8 - 2 * i; j++)
                cout << ' ';
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << '*';
            cout << endl;
        }
        for (int i = 1; i <= N - 1; i++)
        {
            for (int j = 1; j <= 30; j++)
                cout << ' ';
            for (int j = 1; j <= 7 - 2 * i; j++)
                cout << '*';
            cout << endl;
        }
        return 0;
    }

    int gameShow(int i)
    {
        enum GameResult
        {
            WIN,
            LOSE,
            TIE,
            CANCEL
        };

        GameResult result;
        enum GameResult omit = CANCEL;

        for (int count = WIN; count <= CANCEL; count++)
        {
            result = GameResult(count);
            if (result == omit)
                cout << "The game was cancelled" << endl;
            else
            {
                cout << "The game was played ";
                if (result == WIN)
                    cout << "and we won!";
                if (result == LOSE)
                    cout << "and we lost.";
                cout << endl;
            }
        }
        return 0;
    }
};
