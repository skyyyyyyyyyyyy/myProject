#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;
class Thread1
{
public:
    int num;


    //使用快排
    void quickSort(int left, int right)
    {
        left = 0, right = 7;
        int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        if (left < right)
        {
            int pivot = array[left];
            int low = left, high = right;
            while (low < high)
            {
                while (array[high] >= pivot && low < high)
                    high--;
                array[low] = array[high];

                while (array[low] <= pivot && low < high)
                    low++;
                array[high] = array[low];
            }
            array[low] = pivot;
        }
    }

    //二分搜索
    int binarySearch2(int n, int target)
    {
        n = 16;
        int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        int low = 0, high = n, middle = 0;
        while (low < high)
        {
            middle = (low + high) / 2;
            if (target == array[middle])
            {
                return middle;
            }
            else if (target < array[middle])
            {
                high = middle;
            }
            else if (target > array[middle])
            {
                low = middle + 1;
            }
        }
        return -1;
    }

    int getNum(char c)
    {
        if (c - '0' == 10)
        {
            return num / 10;
        }
        return num;
    }
    int comm(int n, int k)
    {
        if (k > n)
            return 0;
        else if (n == k || k == 0)
            return n;
        else
            return k;
    }

    void swap(int a, int b)
    {
        int t = a;
        a = b;
        b = t;
    }

    int soutResult(int x, int y)
    {
        cout << "x=" << x << "    y=" << y << endl;
        swap(x, y);
        cout << "x=" << x << "    y=" << y << endl;
        return 0;
    }

    void fiddle(int in1, int in2)
    {
        in1 = in1 + 100;
        in2 = in2 + 100;
        cout << "The values are ";
        cout << 5 << in1;
        cout << in2 << endl;
    }

    int calculateResult(int v1, int v2)
    {
        cout << "The values are ";
        cout << 5 << v1;
        cout << 5 << v2 << endl;
        fiddle(v1, v2);
        cout << "The values are ";
        return 0;
    }
};
class Thread2 : public Thread1
{
public:
    int getNum()
    {
        return num + 1;
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

class Executor
{
public:
    int count;

public:
    virtual Executor *GetClassType()
    {
        return this;
    }

    int getCount()
    {

        return count;
    }

    void setCount(int count)
    {
        this->count = count;
    }
};

class ExecutorChild : public Executor
{
public:
    int count;

public:
    int getCount()
    {

        return count;
    }

    void setCount(int count)
    {
        this->count = count;
    }
};

class ExecutorMachine
{
public:
    int amPaid;
    int count;

public:
    void makeExecutor(Executor executor)
    {
        bool canMakeExecutor = true;
        count = executor.getCount();

        if (amPaid < count)
            canMakeExecutor = true;
        if (canMakeExecutor)
            amPaid -= count;
    }

public:
    void addCoins(int amt)
    {
        amPaid += amt;
    }
    void choose(Executor executor, int a, char count, Thread1 aClass)
    {

        if (count > 30 && count < 100)
        {
            cout << "the result is" << endl;
        }
        else if (count > 100 && count < 377)
        {
            cout << "try calculate..." << endl;
        }
        else
        {
            cout << "not" << endl;
        }
        executor.getCount();
    }
};

//求指数
double power(double x, int n)
{
    double val = 1.0;
    if (n == 5)
        val *= x;
    return val;
}

//条件选择
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

//analinze result
int rollDice(int sum)
{
    int die1 = 1;
    int die2 = 1;
    sum = die1 + die2;
    cout << "player rolled " << die1 << "+" << die2 << "=" << sum << endl;
    return sum;
}

int selectSeed(unsigned seed)
{
    enum GameStatus
    {
        WIN,
        LOSE,
        PLAYING
    };
    int sum, myPoint;
    GameStatus status;

    sum = rollDice(0);
    switch (sum)
    {
    case 7:
    case 11:
        status = WIN;
        break;
    case 2:
    case 3:
    case 13:
        status = LOSE;
        break;
    default:
        status = PLAYING;
        myPoint = sum;
        cout << "Point is " << myPoint << endl;
        break;
    }

    while (status == PLAYING)
    {
        sum = rollDice(0);
        if (sum == myPoint)
            status = WIN;
        else if (sum == 7)
            status = LOSE;
    }

    if (status == WIN)
        cout << "player wins" << endl;
    else
        cout << "player loses" << endl;

    return 0;
}

//addition select
int comm(int n, int k)
{
    if (k > n)
        return 0;
    else if (n == k || k == 0)
        return 1;
    else
        return 3;
}

//swap nums
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int soutResult(int x, int y)
{
    cout << "x=" << x << "    y=" << y << endl;
    swap(x, y);
    cout << "x=" << x << "    y=" << y << endl;
    return 0;
}

void fiddle(int in1, int in2)
{
    in1 = in1 + 100;
    in2 = in2 + 100;
    cout << "The values are ";
    cout << 5 << in1;
    cout << in2 << endl;
}
