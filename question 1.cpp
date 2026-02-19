#include <iostream>
using namespace std;

int main()
 {
    int numbers[10]; 
    int maxValue, minValue;

    for (int i = 0; i < 10; i++)
	 {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    maxValue = numbers[0];
    minValue = numbers[0];

    for (int i = 1; i < 10; i++)
	 {
        if (numbers[i] > maxValue)
            maxValue = numbers[i];
            
        if (numbers[i] < minValue)
            minValue = numbers[i];
    }

    cout << "\nMaximum value is: " << maxValue << endl;
    cout << "Minimum value is: " << minValue << endl;

    return 0;
}
