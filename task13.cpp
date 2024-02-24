#include<iostream>

class shape {

   public:
	void area () {}

};


class Circle : public shape {
	private:
	const double pi = 3.14;
	int a;
	public:
	Circle (int a1) {
	   a = a1;
	}
        double area () {
	    return pi * a * a; 
	}
};

class Rectangle : public shape {
private:
    int a;
    int b;
public:
    Rectangle(int a1,int b1) {
        b = b1;
	a = a1;
    }
    double area () {
       return a * b ;
      }
};


int main()
{
  int a;
  std::cout << "Enter the value,that we use to count shapes :" << std::endl;
  std::cin >> a;

  Circle ob2(a);
  std::cout << "Result of the Circle's area method :" << std::endl;
  std::cout << ob2.area()<< std::endl;;

  int b;
  std::cout << "Enter rectangle's second side :" << std::endl;
  std::cin >> b;
  Rectangle ob3(a,b);
  std::cout << "Result of the Circle's area method :" << std::endl;
  std::cout << ob3.area() << std::endl;;

}




