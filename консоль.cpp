#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
       if (argc > 1)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
       {
             cout << argv[1]<<endl;// ����� ������ ������ �� ������� ���������� �� ������(��������� � ������� ���������� � 0 )
       } else
               {
                 cout << "Not arguments" << endl;
               }
       system("pause");
}
