#include <iostream> //библиотечный заголовочный файл для работы с потоками ввода-вывода
#include <ctime> //библиотека для работы со временем и датой
using namespace std; //использовать пространство имен std
int i;
void push(int*& arr,int &n); 
int Sr_arif(int *arr,int n); 
int Max(int *arr,int n); 
int main(){ //выражение,показывающее,что в программе присутсвует главная функция,без неё компилятор выдаст ошибку
    srand(time(NULL));//srand-установка базы генератора псевдослучайных чисел.time ( NULL ) ,которая считывает текущее время на компьютере и возвращает кол-во секунд прошедших от полуночи 1 января 1970 преобразоаных в тип unsigned int
    int n;
    cout<<"Укажите количество элементов"<<endl;
    cin>>n;
    int *arr= new int[n];
    for (i = 0; i < n; i++)
    {
       arr[i]=rand()%100-50;
    }

    cout<<"Массив до вставки"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
    cout<<"Среднее арифметическое до вставки"<<endl<<Sr_arif(arr,n)<<endl;
    push(arr,n);
    cout<<"Среднее арифметическое после вставки"<<endl<<Sr_arif(arr,n)<<endl;
    cout<<"Массив после вставки"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
    delete [] arr;  
    return 0; 
}

int Max(int *arr,int n){
    int maxi=-51;
    for ( i = 0; i < n; i++)
    {
        if (maxi<arr[i])
        {
            maxi=arr[i];
        }
        
    }
    return maxi;
}

int Sr_arif(int *arr,int n){
    int p=0;
    for ( i = 0; i < n; i++)
    {
        p+=arr[i];
    }
    p/=n;
    return p;
    
}

void push(int*& arr,int &n){
   /* for (i = 0; i < *pn; i++)
    {
        if (arr[i]>0)
        {
            (*pn)++;
            for (int j = *pn-1; j >i; j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i+1]=0;  
        }   
    } */
    int count=0;
    for(i=0; i<n;i++){
        if (arr[i]>0)
        {
            count++;
        }
    }
    int m=n+count;
    int *b=new int[m];
    for (int i = 0,j=0; i < n; i++)
    {
        b[j]=arr[i];
        if (arr[i]>0)
            b[++j]=0;
        ++j;
    }
    delete [] arr;
    arr=b;
    n=m;   
}

