#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, r, result;
    
    cout << "Enter value for a: "<< endl;
    cin >> a;
    cout << "Enter value for b: "<< endl;
    cin >> b;
    cout << "Enter value for c: "<< endl;
    cin >> c;
    cout << "Enter value for d: "<< endl;
    cin >> d;
    cout << "Enter value for r: "<< endl;
    cin >> r;
    result = (4.0 / (3.0 * (r + 34.0)))
       - 9.0 * (a + b * c)
       + ((3.0 + d * (2.0 + a)) / (a + b * d));
    cout<<result;
    return 0;
}