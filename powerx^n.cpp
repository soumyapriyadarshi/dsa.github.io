#include <iostream>
#include <vector>
using namespace std;

//vector fuction calling.
double powerSet(double x, int y) {
	int binaryForm = y;
	double ans = 1;

	if(binaryForm < 0){
		x = 1/x;
		binaryForm = -binaryForm;
	}

	while(binaryForm > 0){
		if(binaryForm % 2 == 1){
			ans *= x;
		}
		x *= x;
		binaryForm/=2;
	}

	cout << ans;
}	

//main function.
int main(){
	vector<int> nums;

	double x;
	int y;
	cin >> x;
	cin >> y;

	powerSet(x, y);
}