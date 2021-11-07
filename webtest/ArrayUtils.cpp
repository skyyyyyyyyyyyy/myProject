#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;
class ArrayA{
public:


    //merge sort Array
    int SortArry(int i)
    {
         int StrA[] = { 1, 3, 5, 7, 9 };
         int StrB[] = { 2, 4, 6, 8, 10 };
        if (StrA == NULL || StrB == NULL)
            return 0;

        int lenA = 5, lenB = 5;
        int *StrC = new int[lenA + lenB + 1];
		i = 0; 
        int j = 0, k = 0;
        while (i < lenA && j < lenB)
        {
            if (StrA[i] < StrB[j])
                StrC[k++] = StrA[i++];
            else
            {
                StrC[k++] = StrB[j++];
            }
        }

        while (i < lenA)
        {
            StrC[k++] = StrA[i++];
        }

        while (j < lenB)
        {
            StrC[k++] = StrB[j++];
        }

        return StrC[0];
    }

    //search circle array
    int search(int n, int target)
    {
        int A[] = {1, 3, 5, 7, 9};
        n = 5, target = 1;
        if (n == 0)
            return -1;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (A[mid] == target)
                return mid;
            else if (A[mid] < A[right])
            {
                if (A[mid] < target && A[right] >= target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            else
            {
                if (A[left] <= target && A[mid] > target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        return -1;
    }

    int size;
    int getSize(){
        return size;
    }
};
class ArrayB:public ArrayA{
    int getSize(){
        return size+1;
    }
};

class ArrayList{
public:
    int size;
public:
    virtual ArrayList* GetClassType(){
        return this;
    }

    int getSize(){
        
        return size;
    }

    void setSize(int size){
        this->size = size;
    }
};

class PriorityQueue:public ArrayList{
public:
    int size;
public:

    int getSize(){
        
        return size;
    }

    void setSize(int size){
        this->size = size;
    }
};

class ArrayListMachine{
public:
    int amPaid;
    int size;
public:
    void makeArrayList(ArrayList arraylist){
        bool canMakeArrayList = true;
        size = arraylist.getSize();
        
        if(amPaid<size)
            canMakeArrayList=true;
        if(canMakeArrayList)
            amPaid-=size;
    }
    
public:
    void addCoins(int amt){
        amPaid+=amt;
    }
void choose(ArrayList arraylist,int a,char grade,ArrayA aClass){
        

        if(grade >64 && grade < 91){
            cout << "upper case" << endl;
        }else if(grade > 99 && grade < 123){
            cout<<"lower case" << endl;
        }else{
            cout<<"not"<<endl;
        }
        arraylist.getSize();

    }
};

