#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
       if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
       {
             cout << argv[1]<<endl;// вывод второй строки из массива указателей на строки(нумерация в строках начинается с 0 )
       } else
               {
                 cout << "Not arguments" << endl;
               }
       system("pause");
}
