/***************************************************
 * Author:      Steven Dorsey
 * Date:        09/26/2023
****************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

float give_Cost_A(int);
float give_Cost_B(int);
float give_Cost_C();

int main()
{
    char vce_plan;
    int num_minutes;
    bool selected(false);
    
    do 
    {
        // stuff goes here
        cout << "\nVoice Plans: \n";
        cout << "A. The 450 minute plan\n";
        cout << "B. The 900 minute plan\n";
        cout << "C. The unlimited plan\n";
        cout << "Enter which voice plan the customer subscribes to: ";
        cin >> vce_plan;

        if (vce_plan == 'A')
        {
            cout << "\nEnter the number of minutes used in the month: ";
            cin >> num_minutes;
            
            if (0 <= num_minutes && num_minutes < 44641)
            {
                // Plan A section
                selected = true;
                float cost, cost_B, cost_C, savings;

                cost = give_Cost_A(num_minutes);
                cout << fixed << setprecision(2) << "\nThe amount due for the month is $" << cost << endl;

                cost_B = give_Cost_B(num_minutes);
                savings = (cost - cost_B);

                // Output savings > $0
                if (savings > 0)
                {
                    cout << fixed << setprecision(2) << "\nAmount saved if you were on Plan B: $" << savings << endl;
                }
            }
            else 
            {
                cout << "\nInvalid number of minutes. Please enter a value between 0 ^ 44,640.\n\n";
            }

        }
        else if (vce_plan == 'B')
        {
            cout << "\nEnter the number of minutes used in the month: ";
            cin >> num_minutes;
            
            // Plan B section
            if (0 <= num_minutes && num_minutes < 44641)
            {
                selected = true;
                float cost, cost_C, savings;

                cost = give_Cost_B(num_minutes);
                cout << fixed << setprecision(2) << "\nThe amount due for the month is $" << cost << endl;
                
                cost_C = give_Cost_C();
                savings = cost - cost_C;

                // Output savings > $0
                if (savings > 0)
                {
                    cout << fixed << setprecision(2) << "\nAmount saved if you were on Plan C: $" << savings << endl;
                }
            }
            else 
            {
                cout << "\nError: Invalid number of minutes. Please try again.\n\n";
            }
        }
        else if (vce_plan == 'C')
        {
            // Plan C section
            if (0 <= num_minutes && num_minutes < 44641)
            {
                selected = true;
                float cost;

                cost = give_Cost_C();
                cout << fixed << setprecision(2) << "\nThe amount due for the month is $" << cost << endl;
            }
            else 
            {
                cout << "Error: Invalid number of minutes. Please try again.\n\n";
            }
        }
        else 
        {
            // Default error for input 1
            cout << "Invalid Input. Please enter one of the options depicted in the menu.\n\n";
            system("pause");
        }
    } while(!selected);
}

float give_Cost_A(int minutes)
{
    if ( minutes > 450 )
    {
        // Cast the number of minutes to a float value for math reasons
        float temp = static_cast<float>(minutes);

        // Take the number of minutes exceeding the plan
        temp -= 450;

        // Calculate the total cost + excessive number of minutes
        return (temp * 0.45) + 39.99;
    }
    else 
    {
        // Return the standard monthly cost of the plan
        return 39.99;
    }
}

float give_Cost_B(int minutes)
{
    if ( minutes > 900 )
    {
        // Cast the number of minutes to a float value for math reasons
        float temp = static_cast<float>(minutes);

        // Take the number of minutes exceeding the plan
        temp -= 900;

        // Calculate the total cost + excessive number of minutes
        return (temp * 0.40) + 59.99;
    }
    else 
    {
        // Return the standard monthly cost of the plan
        return 59.99;
    }
}

float give_Cost_C( )
{
    // Return the standard monthly cost of the plan
    return 59.99;
}