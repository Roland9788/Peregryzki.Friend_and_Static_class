#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <malloc.h> //���������� ��� ������� ��������� ������
#include <string.h>

using namespace std;
//class Point
//{
//	int x;
//	int y;
//public:
//
//	Point() 
//	{
//		x = 0;
//		y = 0;
//	}
//
//	void SetValue(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void Show()
//	{
//		cout << "(" << this->x << "." << this->y << ")";
//	}
//
//	void operator()(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//};

//class SomeClass
//{
//	int some;
//public:
//
//	//������������� ��������� new � delete
//	//����� ����� ������������ �������������� ��������� ������������ ������ ����������
//	
//	void* operator new(size_t size, const char* str = "New");
//	void operator delete(void* ptr);
//	//������������� ��������� new[] � delete[]
//
//	void* operator new[](size_t fullsize, const char* str = "New[]");
//	void operator delete[](void* ptr);
//};
//
//void* SomeClass::operator new(size_t size, const char* str)
//{
//	cout << endl << str << endl;
//	//�����, ��� ��������� ������ ������������ ����������� ������� void *malloc(size_t size); � �� ��������� size-���-�� ����, ������� ����� ��������. ���� ������ ����������, �� �� malloc ������������ ����� ������ ����������� ����� ������
//	void* ptr = malloc(size);
//	if (!ptr)
//	{
//		cout << "\n������ ��������� ������!!\n";
//	}
//	else
//	{
//		cout << "\n������ ������� ���������\n";
//	}
//
//	return ptr;
//}
//
//void* SomeClass::operator new[](size_t fullsize, const char* str)
//{
//	cout << "\n" << str << "\n";
//	//�����, ��� ��������� ������ ������������ ����������� ������� void *malloc(size_t size); � �� ��������� size-���-�� ����, ������� ����� ��������. ���� ������ ����������, �� �� malloc ������������ ����� ������ ����������� ����� ������
//	void* ptr = malloc(fullsize);
//	if (!ptr)
//	{
//		cout << "\n������ ��������� ������ ��� �������!!\n";
//	}
//	else
//	{
//		cout << "\n������ ��� ������� ������� ���������\n";
//	}
//
//	return ptr;
//}
//
//void SomeClass::operator delete(void* ptr)
//{
//	
//	//��� ������� ������ ������������ ������ void free(void* memoryblock) ������� free ������� ������ memoryblock-����� ������ ��������� ������
//
//	free(ptr);
//	cout << "\n������ �������\n";
//}
//
//void SomeClass::operator delete[](void* ptr)
//{
//
//	//��� ������� ������ ������������ ������ void free(void* memoryblock) ������� free ������� ������ memoryblock-����� ������ ��������� ������
//
//	free(ptr);
//	cout << "\n������ ������� �������\n";
//}

//class Rectangle
//{
//	int Width, Height;
//	char Symbol;
//	friend void friend_put(Rectangle* r, char s);
//public:
//	Rectangle(int Width, int Height, int Symbol)
//	{
//		this->Width = Width;
//		this->Height = Height;
//		this->Symbol = Symbol;
//	}
//
//	void display()
//	{
//		cout << endl << endl;
//		for (int i = 0; i < Height; i++)
//		{
//			for (int j = 0; j < Width; j++)
//			{
//				cout << Symbol << " ";
//			}
//			cout << endl;
//		}
//	}
//};
//
//void friend_put(Rectangle* r, char s)
//{
//	r->Symbol = s;
//}

//class Line;
//class Point;
//
//class Point
//{
//	float x, y;
//public:
//
//	Point(float x = 0, float y = 0)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	friend float uclon(Point, Line);
//};
//
//class Line
//{
//	float A, B, C;
//public:
//
//	Line(float A, float B, float C)
//	{
//		this->A = A;
//		this->B = B;
//		this->C = C;
//	}
//
//	friend float uclon(Point, Line);
//};
//
//float uclon(Point point, Line line)
//{
//	return line.A * point.x + line.B * point.y + line.C;
//}

//class Point
//{
//	int x, y;
//
//public:
//
//	Point(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void Show()
//	{
//		cout << "(" << x << "." << y << ")";
//	}
//
//	Point& operator+(int d)
//	{
//		Point point(0, 0);
//		point.x = x + d;
//		point.y = y + d;
//		return point;
//	}
//
//	int getx() const
//	{
//		return x;
//	}
//
//	int gety() const
//	{
//		return y;
//	}
//
//	void setx(int x)
//	{
//		this->x = x;
//	}
//
//	void sety(int y)
//	{
//		this->y = y;
//	}
//};
//
//Point& operator+ (int d, Point& z)
//{
//	Point point(0, 0);
//	point.setx(d + z.getx());
//	point.sety(d + z.gety());
//	return point;
//}

//class Banana;
//class Apple;
//
//class Apple
//{
//public:
//	void F_Apple(Banana ob);
//};
//
//class Banana
//{
//	int x, y;
//public:
//	Banana()
//	{
//		x = y = 777;
//	}
//	friend Apple;
//};
//
//void Apple::F_Apple(Banana ob)
//{
//	cout << ob.x << "\n";
//	cout << ob.y << "\n";
//}

//class Object
//{
//	char* str;
//public:
//	static int mun_obj;
//	Object(const char* s)
//	{
//		str = new char[strlen(s) + 1];
//		strcpy(str, s);
//		cout << "\n�������� " << str << "\n";
//		mun_obj++;
//	}
//
//	~Object()
//	{
//		cout << "\n������������ ������ " << str << "\n";
//		delete str;
//		mun_obj--;
//	}
//
//};
//int Object::mun_obj = 0;
//
//Object S1("\nFirst global Object\n");
//Object S2("\nSecond global Object\n");
//
//void f(const char* s)
//{
//	Object str(s);
//	cout << "���-�� ��������� �������-" << Object::mun_obj << "\n";
//	cout << "������ ������� f()" << "\n";
//}

//class Prim
//{
//	int numb;
//	static int stat;
//public:
//
//	Prim(int i)
//	{
//		numb = i;
//	}
//	static void func(int i, Prim* p = 0)
//	{
//		if (p)
//		{
//			p->numb = i;
//		}
//		else
//		{
//			stat = i;
//		}
//	}
//
//	static void show()
//	{
//		cout << "stat = " << stat << endl;
//	}
//
//	void show2()
//	{
//		cout << "numb = " << numb << endl;
//	}
//};
//int Prim::stat = 8;


int main()
{
	setlocale(LC_ALL, "Rus");

	//Point P;
	//P(2,3);
	//P.Show();
	//P.SetValue(2, 3);
	//P.Show();

	//SomeClass* x = new SomeClass;
	//SomeClass* y = new SomeClass[5];
	//delete x;
	//delete[] y;

	//Rectangle A(5, 3,'A');
	//Rectangle B(3, 5,'B');
	//A.display();
	//B.display();
	//friend_put(&A, 'a');
	//friend_put(&B, 'b');
	//A.display();
	//B.display();

	//Point point(2.5,8.4);
	//Line line(5.5, 3.3, 2.2);
	//cout << "\n���������: \n" << uclon(point, line);

	//Point A(3, 2);
	//A.Show();
	//Point B = A + 5;
	//B.Show();
	//Point C = 2 + A;
	//C.Show();

	//Banana b;
	//Apple a;
	//a.F_Apple(b);

	//cout << "\n���-�� �������� ������-" << Object::mun_obj << "\n";
	//Object M("Object in main()");
	//cout << "\n���-�� �������� ������-" << Object::mun_obj << "\n";
	//f("������ ��������� ������");
	//f("������ ��������� ������");
	//cout << "\n����� ��������� main() ���-�� �������� ������-" << Object::mun_obj << "\n";

	//Prim::show();
	//Prim::func(10);
	//Prim obj(23);
	//obj.show2();
	//Prim::func(20,&obj);
	//obj.show2();
	//obj.func(27, &obj);
	//obj.show2();




	return 0;
}