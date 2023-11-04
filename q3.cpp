# include <iostream>
using namespace std;

inline int addNumbers(int a,int b){
    int c = a + b;
    return c;

}

int multiplyNumbers (int x,int y,int z = 1){
    int c = x*y*z;
    return c;

}

int main() {
    int sum = addNumbers(5, 7);
    int product = multiplyNumbers(3, 4); 
    cout<<"The sum of numbers is: "<<sum<<endl;
    cout<<"The product of numbers is: "<<product<<endl;
    return 0;
}