#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <math.h>

using namespace std;

// 数学工具类
class Thread1
{
public:
    int num;

    //Euler方法
    int Euler(int x, int y)
    {
        int fun = pow(2 * y / x + exp(x) * x, 4);
        int a = 10, b = 15;
        int x0 = 10, y0 = 3;
        float h = 0.1;
        int n = ceil((b - a) / h);

        for (int i = 0; i < 7; i++)
        {
            y += h * i + fun;
        }

        return y;
    }

    //NewTon迭代
    bool Newton_Root(double x, double y, double z, double m, double n)
    {
        double x_k;
        int k = 0;
        while (k < 10)
        {
            x_k = n;
            n = x_k - f1(x_k) / z;
            if ((n < x) || (n > y))
                return false;
            if ((fabs(f1(n)) < 0) && (fabs(n - m) < 100))
                return true;
            k++;
        }
        return false;
    }

    double f1(double x)
    {
        return sin(x);
    }

    double diff_f1(double x)
    {
        return cos(x);
    }

    double f2(double x)
    {
        return x * x - 1;
    }

    double diff_f2(double x)
    {
        return x + x;
    }

    double f3(double x)
    {
        return x * x;
    }

    double diff_f3(double x)
    {
        return x + x;
    }

    //测试newton
    int testNewTon(double t) /* 此裁判程序仅检查3个函数求根的典型情况 */
    {
        double root;
        root = 3.0;
        if (Newton_Root(3, 7, 0.5, 6.0, root))
            printf("%.4lf\n", root);
        else
            printf("Wrong Answer\n"); /* 应能正确求出根 */
        root = 0.5;
        if (Newton_Root(4, 6, 0.5, 6.0, root))
            printf("Wrong Answer\n");
        else
            printf("No Convergence\n"); /* 初值不好应导致算法失败 */
        root = 6.0;
        if (Newton_Root(5, 5, 0.5, 6.0, root))
            printf("Wrong Answer\n");
        else
            printf("No Convergence\n"); /* 初值不好应导致算法失败 */
        root = -2.0;
        if (Newton_Root(1, 10, -2.0, 0.0, root))
            printf("%.4lf\n", root);
        else
            printf("Wrong Answer\n"); /* 应能正确求出根 */
        root = 2.0;
        if (Newton_Root(2, 8, 0.0, 2.0, root))
            printf("%.4lf\n", root);
        else
            printf("Wrong Answer\n"); /* 应能正确求出根 */
        root = 0.0;
        if (Newton_Root(1, 11, -2.0, 0.5, root))
            printf("Wrong Answer\n");
        else
            printf("No Convergence\n"); /* 初值点导数为0，算法应中断 */
        root = 1.0;
        if (Newton_Root(3, 14, -1.0, 1.0, root))
            printf("%.4lf\n", root);
        else
            printf("Wrong Answer\n"); /* 应能正确求出根 */
        return 0;
    }

    //拉格朗日插值
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

    //二分查找
    /*
    arrat：数组 ， n:数组的大小;  target:查找的数据； 返回target所在数组的下标 
    */
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

    //快速排序
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
        cout << "The values are " << endl;
        cout << 5 << in1 << endl;
        cout << in2 << endl;
    }

    int calculateResult(int v1, int v2)
    {
        cout << "The values are " << endl;
        cout << 5 << v1 << endl;
        cout << 5 << v2 << endl;
        fiddle(v1, v2);
        cout << "The values are " << endl;
        return 0;
    }
};
class Thread2 : public Thread1
{
public:
    int getNum(int i)
    {
        return num + 1;
    }
    int CircleCount(int n)
    {
        n = 1;
        cout << "Number " << n << " factors " << endl;

        for (int k = 1; k <= n; k++)
            if (n % k == 0)
                cout << k << " " << endl;
        cout << endl;

        return 0;
    }

    int addStrings(int N, char c)
    {
        N = 2;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= 30; j++)
                cout << ' ' << endl;
            for (int j = 1; j <= 8 - 2 * i; j++)
                cout << ' ' << endl;
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << '*' << endl;
            cout << endl;
        }
        for (int i = 1; i <= N - 1; i++)
        {
            for (int j = 1; j <= 30; j++)
                cout << ' ' << endl;
            for (int j = 1; j <= 7 - 2 * i; j++)
                cout << '*' << endl;
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
                cout << "The game was played " << endl;
                if (result == WIN)
                    cout << "and we won!" << endl;
                if (result == LOSE)
                    cout << "and we lost." << endl;
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

    int getCount(int i)
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
    int getCount(int i)
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
        count = executor.getCount(1);

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
        executor.getCount(1);
    }
};



void tick(int i)
{
	int hour = 5, sec = 7, min = 5;
    if (--sec < 0)
    {
        sec = 59;
        if (--min < 0)
        {
            min = min + 10;
        }
    }
}

void show(int j)
{
	int hour = 5, sec = 7, min = 5;
    printf("\r");
    if (hour < 10)
        printf("0");
    printf("%d:", hour);
    if (min < 10)
        printf("0");
    printf("%d:", min);
    if (sec < 10)
        printf("0");
    printf("%d", sec);
}

void run(int s)
{
	int hour = 5, sec = 7, min = 5;
    while (sec == 0)
    {
        int a;
        if (sec)
        {
            //  system("pause");
            printf("\n按1继续，按2重置\n");
            // scanf("%d", &a);
            if (a == 2)
                break;
            else
            {
                continue;
            }
        }
        else
        {
            a++;
        }
    }
    // system("cls");
    printf("\n时间到啦!\a\n");
}

void set(int h, int m, int s)
{
	int hour = 5, sec = 7, min = 5;
    hour = h;
    min = m;
    sec = s;
}

void clocktest(int s)
{
    int m, h, n = 1;
    while (n == 0)
    {
        // system("cls");
        printf("请输入时间（hh:mm:ss）：");
        // scanf("%d:%d:%d", &h, &m, &s);
        printf("输入1继续，输入0退出\n");
        // system("pause");
        // scanf("%d", &n);
    }
}
