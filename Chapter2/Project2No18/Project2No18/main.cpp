/*
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 58 percent of
them prefer citrus-flavored energy drinks. Write a program that displays the following:
ï The approximate number of customers in the survey who purchase one or more
energy drinks per week
ï The approximate number of customers in the survey who prefer citrus-flavored energy
drinks
*/


#include <iostream>
using namespace std;


int main()
{

    int num_surveyed = 16500;
    double percent_1_or_more = .15,
        percent_pref_citrus = .58,
        total_1_or_more = num_surveyed * percent_1_or_more,
        grand_total = total_1_or_more * percent_pref_citrus;

    cout << "The approximate # of customers in the survey who\n"
        << "purchase one or more energy drinks per week is " << total_1_or_more << endl;

    cout << "The approximate # of customers in the survey who\n"
        << "prefer citrus-flavored energy drins " << grand_total << endl;


}
