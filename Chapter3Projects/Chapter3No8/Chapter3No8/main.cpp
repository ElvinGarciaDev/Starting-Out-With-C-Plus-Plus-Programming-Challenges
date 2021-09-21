/*
The Yukon Widger Company manufactures widgets that weigh 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. T he program should ask the user how much the pallet
weighs by itseU and with the widgets stacked on it.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //Variable for widget
    const double one_widget_weight = 12.5;
    //Variable for user input
    double pallet_weight_only,
        pallet_weight_with_widget,
        widget_weight,
        num_widgets;

    //Get user input for pallet weight
    cout << "How much does the pallet weight? ";
    cin >> pallet_weight_only;
    //Get user input for pallet weight with widget
    cout << "How much does the pallet weigh with widgets included? ";
    cin >> pallet_weight_with_widget;

    //Calculate how many stacked on pallet
    widget_weight = pallet_weight_with_widget - pallet_weight_only;
    num_widgets = widget_weight / one_widget_weight;


    //Display calculations
    cout << setprecision(2) << fixed << right << endl;
    cout << "Individual widget weight " << setw(8) << " = " << one_widget_weight << endl;
    cout << "Pallet weight " << setw(19) << " = " << pallet_weight_only << endl;
    cout << "Pallet weight with widgets " << setw(6) << " = " << pallet_weight_with_widget << endl;
    cout << "Widget weight " << setw(19) << " = " << widget_weight << endl;
    cout << "Number of widgets " << setw(15) << " = " << num_widgets << endl;


    return 0;
}
