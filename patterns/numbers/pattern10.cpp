#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = 1;

        while(j <= i) {

            switch(i) {

                case 1:
                    cout << 'A' << " ";
                    break;

                case 2:
                    cout << 'B' << " ";
                    break;

                case 3:
                    cout << 'C' << " ";
                    break;

                case 4:
                    cout << 'D' << " ";
                    break;
            }

            j++;
        }

        cout << endl;

        i++;
    }

    return 0;
}