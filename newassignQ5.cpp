#include <iostream>
using namespace std;
int main()
{
    float grams, readings;
    int num;
    cout << "(1) Carbon Monoxide" << endl
         << "(2) Hydrocarbons" << endl
         << "(3) Nitrogen Oxides" << endl
         << "(4) Nonmethane Hydrocarbons" << endl;
    cout << "Enter pollutant number 1,2,3,4" << endl;
    cin >> num;
    cout << "Enter number of grams emitted per mile" << endl;
    cin >> grams;
    cout << "Enter odometer readings" << endl;
    cin >> readings;
    switch (num)
    {
    case 1:
    {

        if (grams > 3.4 && readings <= 50000 || grams > 4.2 && readings > 50000 && readings < 100000)
            cout << "Emission exceeded permitted level of 3.4 grams/mile";

        else if (grams < 3.4 && readings <= 50000 || grams < 4.2 && readings > 50000 && readings < 100000)
            cout << "Emissions not exceeded";

        else
            cout << "Emissions not exceeded";

        break;
    }
    case 2:
    {
        if (grams > 0.31 && readings <= 50000 || grams > 0.39 && readings > 50000 && readings < 100000)
            cout << "Emission exceeded permitted level of 0.31 grams/mile";

        else if (grams < 0.31 && readings <= 50000 || grams < 0.39 && readings > 50000 && readings < 100000)
            cout << "Emissions not exceeded";

        else
            cout << "Emissions not exceeded";

        break;
    }
    case 3:
    {

        if (grams > 0.4 && readings <= 50000 || grams > 0.5 && readings > 50000 && readings < 100000)
            cout << "Emission exceeded permitted level of 0.31 grams/mile";

        else if (grams < 0.4 && readings <= 50000 || grams < 0.5 && readings > 50000 && readings < 100000)
            cout << "Emissions not exceeded";

        else
            cout << "Emissions not exceeded";

        break;
    }
    case 4:
    {
        if (grams > 0.25 && readings <= 50000 || grams > 0.39 && readings > 50000 && readings < 100000)
            cout << "Emission exceeded permitted level of 0.31 grams/mile";

        else if (grams < 0.25 && readings <= 50000 || grams < 0.5 && readings > 50000 && readings < 100000)
            cout << "Emissions not exceeded";

        else
            cout << "Emissions not exceeded";

        break;
    }
    default:
    {
        cout << "enter valid option";
        break;
    }
    }
}