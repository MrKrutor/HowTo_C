#include <windows.h>
#include <stdio.h>

int main() {
	printf("Hello World");
	return 0;
}
// ConsoleApplication1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.              
#include <iostream>

int main()
{
    if (!false)
    {
        std::cout << "If 1" << std::endl;
        int y;
        int x = 9;
        x = 5 + 8;
        std::cout << x << std::endl;
        x = 5 - 8;
        std::cout << x << std::endl;
        x = 5 * 8;
        std::cout << x << std::endl;
        int a0 = 0;
        int a1 = 1;
        int a2 = 2;
        int a3 = 3;
        std::cout << "a0 =" << a0 << "; a1 =" << a1 << "; a2 =" << a2 << "; a3 =" << a3 << std::endl;
        std::cout << x << std::endl;

        std::cout << "Hello, world!" << std::endl;
        //������� �� ��������� ������...
        std::cout << "Hello, world!" << std::endl;
    }
    else if (!false)
    {
        int a = 9;
        int b = 10;
        int c = 11;
        int d = 12;
        printf("%d %d %d %d", a, b, c, d);
    }
    else if (!false)
    {
        std::cout << "If 2" << std::endl;
        int a = 6;
        a = a - 3;
        std::cout << a << std::endl; // �1
        int b = a;
        std::cout << b << std::endl; // �2
        // � ���� ������ a + b �������� r-value 
        std::cout << a + b << std::endl; // �3
        std::cout << a << std::endl; // �4
        int c = 0;
        std::cout << c << std::endl; // �5
    }
    else if (!false)
    {
        int a = 7;
        std::cout << "a is " << a << a << a << a << a;
    }
    else if (!false)
    {
        std::cout << "Enter a number: "; // ������ ������������ ������ ����� �����
        int a = 0;
        std::cin >> a; // �������� ���������������� ����� � ��������� ��� � ���������� a
        std::cout << "You entered " << a << std::endl;
    }
    return 0;
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.