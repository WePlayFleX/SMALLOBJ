#include <iostream>

using namespace std;

class SmallObj
{
public:
	void setdata(int d)
	{
		somedata = d;
	}

	void showdata()
	{
		cout << "The field value is " << somedata << endl;
	}
private:
	int somedata;
};

int main()
{
	SmallObj s1, s2;
	s1.setdata(1066);
	s2.setdata(1776);
	s1.showdata();
	s2.showdata();

	system("pause");
	return 0;
}