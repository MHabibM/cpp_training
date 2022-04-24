#include <iostream>
using namespace std;

template <class T, class T1>
class calculator {
	private:
	public:
		T add(T x, T1 y){
			return x+y;
		}
		T sub(T x, T1 y){
			return x-y;
		}

		T div(T x, T1 y){
			return x/y;
		}
		T mult(T x, T1 y){
			return x*y;
		}
	};
	
int main (){
	
	calculator<float, float> calc;
	float x, y, res;
	char oper;
	cout << "Enter the first number" << endl;
	cin >> x;
	cout << "Enter the second number" << endl;
	cin >> y;
	cout << "choose one of listed operators:\n| * | / | + | - |\n" << endl;
	cin >> oper;
	cout << endl;
	switch (oper){
		case '*': res=calc.mult(x,y);
			  break;
		case '/': res=calc.div(x,y);
			  break;
		case '+': res=calc.add(x,y);
			  break;
		case '-': res=calc.sub(x,y);
			  break;
		default: cout << "operator is not correct" << endl;
			 return 1;
	}

	cout << res << endl;
	return 0;
}
