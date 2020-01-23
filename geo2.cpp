#include <iostream>
#include <string>
using namespace std;

struct Point
{   int x;
	int y;
	//  Overload the << operator
	friend ostream & operator << (ostream & os, const Point p)
	{   os << p.x << "," << p.y;
	    return os;
	}
};

Point midpoint (const Point& a, const Point& b)
{   Point vec;
	vec.x = (a.x + b.x) / 2;
	vec.y = (a.y + b.y) / 2;
	return vec;
}

int main()
{   Point p1, p2;
    Point vec;
	int n;
	char choice;

	for (n = 0; n < 100; n++)
	{
		cout << "Enter 1st Point(x,y): ";
		cin >> p1.x >> p1.y;
		cout << "Enter 2nd Point(x,y): ";
		cin >> p2.x >> p2.y;
	    vec = midpoint (p1, p2);
		cout << "midpoint between" << p1 << " and " << p2 << " is " << vec << endl;
		cout << "Do you want to continue?: ";
		cin >> choice;
        if (choice == 'n')
		    break;
	}
}
