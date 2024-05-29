#include <iostream>
#include<cmath>
using namespace std;

void paint_calc(int height, int width, int cover) {
    int num_of_cans;
    num_of_cans = ((height * width)) / 5;
    cout << "You'll need " << ceil(num_of_cans)  << " cans of paint." << endl;
}

int main() {
    int test_h, test_w;
    cout << "Enter the height: " << endl;
    cin >> test_h;
    cout << "Enter the width: " << endl;
    cin >> test_w;
    int coverage = 5;

    int height, width, cover;
    // Keyword arguments
    paint_calc(height=test_h, width=test_w, cover=coverage);
    return 0;
}