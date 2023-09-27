/*************************************************
 * Author:          Steven Dorsey
 * Date:            09/25/2023
**************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int give_total_grams(int, int, int);
int give_total_calories(int, int, int);

int mult_by_factor(int, int);
float mult_by_factor(float, int);

void print_caloric_statistics(int, int, int, int, int);

int main() 
{
    int     carbs, fats, proteins, tot_grams, tot_calories;
    float   carbs_perc, prot_perc, grams_perc, ratio;

    cout << "Please enter the amount of carbohydrate in grams: ";
    cin >> carbs;

    cout << "Please enter the amount of fat in grams: ";
    cin >> fats;

    cout << "Please enter the amount of protein in grams: ";
    cin >> proteins;

    cout << "\n";

    // Calculate Total Grams
    tot_grams = give_total_grams(carbs, fats, proteins);
    cout << "Total Grams \t:" << tot_grams << endl;

    // Calculate Total Calories
    tot_calories = give_total_calories(carbs, fats, proteins);
    cout << "Total Calories : " << tot_calories << endl;

    // Print Caloric Statistics
    print_caloric_statistics(carbs, fats, proteins, tot_grams, tot_calories);

    return 0;
}

int give_total_grams(int carbs, int fats, int proteins)
{
    return carbs + fats + proteins;
}

int give_total_calories(int carbs, int fats, int proteins)
{
    return ( mult_by_factor(carbs,4)  + mult_by_factor(fats,9) + mult_by_factor(proteins,4) );
}

int mult_by_factor(int target, int factor)
{
    return target * factor;
}

float mult_by_factor(float target, int factor)
{
    return target * factor;
}

void print_caloric_statistics(int carbs, int fats, int proteins, int tot_grams, int tot_calories)
{
    cout << "\nPercent of calories from each macronutrient:";

    float f_carbs, f_fats, f_prots, f_grams, f_cals;
    float carbs_perc, fats_perc, proteins_perc, protein_ratio;

    f_carbs = static_cast<float>(carbs);
    f_fats  = static_cast<float>(fats);
    f_prots = static_cast<float>(proteins); 
    f_grams = static_cast<float>(tot_grams);
    f_cals  = static_cast<float>(tot_calories);

    // Calculate percentage of carbs
    carbs_perc = mult_by_factor(f_carbs, 4) / f_cals * 100;
    
    // Calculate percentage of fats
    fats_perc = mult_by_factor(f_fats, 9) / f_cals * 100;
    
    // Calculate percentage of proteins
    proteins_perc = mult_by_factor(f_prots, 4) / f_cals * 100;
    
    protein_ratio = f_prots / (f_carbs + f_fats);

    cout << "\nCarbohydrate: \t";
    cout << fixed << setprecision(1)  << carbs_perc <<"%\n";
    
    cout << "Fat: \t\t";
    cout << fixed <<  setprecision(1)  << fats_perc << "%\n";
    
    cout << "Protein: \t";
    cout << fixed <<  setprecision(1) << proteins_perc << "%\n";
    
    cout << "\nProtein:Energy Ratio : " << protein_ratio << endl << endl;
}