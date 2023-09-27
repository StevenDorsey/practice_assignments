# practice_assignments
Each folder in this repo is an old programming assignment, used to challenge what I remember about C++ programming.

## CPP_Assn1 Programming Assignment:
Problem:
Write a C++ program that will output information about you to the computer screen.
Make the computer format the output like this (with a blank line between each item):
> Name: <your_name>
>
> Major: <your major, spelled out, no acronyms>
>
>  Favorite Movie: <with title in double quotes, include the release year>


Replace the <…> with your own information. Here’s the output from my program:
> Name: Jill Seaman
>
> Major: Computer Science
> 
> Favorite Movie: “The Princess Bride” 1987
Note: It's ok if the last line is long and wraps onto the next line in your output.


## CPP_Assn2 Programming Assignment
**Problem:** Your friends are trying to lose weight and build muscle and want to calculate some
statistics about their daily food intake. Write a C++ program that will calculate these
statistics.

There are three main macronutrients: carbohydrates, fat, and protein.
Each gram of carbohydrate is 4 calories.
Each gram of fat is 9 calories.
Each gram of protein is 4 calories.

**Input:** The user should be prompted to input the amount of carbohydrates, fat, and
protein in grams consumed that day. These will be whole numbers.

**Processing:** Your friends want to know: the total number of grams consumed and
the total number of calories consumed. They also want to know the percent of total
calories contributed by each of the macronutrients. For example, if 800 calories are
from carbohydrate, 800 calories are from fat, and 400 calories are from protein, then
40% were from carbohydrate, 40% were from fat, and 20% were from protein. And
finally, they want to know the Protein:Energy Ratio. This is the number of grams of
protein divided by the sum of the number of grams of fat and carbohydrate.

**Output:** The program should print the statistics described above. All output should be
clearly labeled and percentages should include a percent sign (%). Percentages and
the Protein:Energy Ratio should be formatted to exactly 1 decimal place.

**Sample output:**
> Please enter the amount of carbohydrate in grams: 200
> Please enter the amount of fat in grams: 90
> Please enter the amount of protein in grams: 100
> Total Grams : 390
> Total Calories : 2010
> Percent of calories from each macronutrient:
> Carbohydrate: 39.8%
> Fat: 40.3%
> Protein: 19.9%
> Protein:Energy Ratio : 0.3

**Additional Requirements:**
• Your program must compile and run, otherwise you will receive a score of 0.
• Use appropriate data types. Use int unless you know the value could have non-zero digits after the decimal point.
• Don’t worry if your output values are off by 0.1. This is due to a rounding error.
• Your program must output the correct values given any valid input values.

**Style:**
See the Style Guidelines document on the class website. In particular:
• Include the Header comments, like last time, including a good description
• Variables: Use meaningful variable names and use camel case. Each variable declaration must be on a separate line with a descriptive comment.
• Named constants: use these for numeric literals, and use uppercase and underscores in their names.
• Source code lines should be less than 80 characters in length, and the program statements should be indented appropriately.

## CPP_Assn3 Programming Assignment
**Problem:**
Your have been asked by a mobile phone service provider to write a program that will
calculate the amount of the voice portion of a customer’s monthly bill. Write a C++
program that will calculate the amount of the bill given which voice plan the customer
subscribes to and how many minutes they used during the month.

The mobile phone service provider offers the following voice plans:
Package A: 450 minutes for $39.99. .45/minute for each additional minute.
Package B: 900 minutes for $59.99. .40/minute for each additional minute.
Package C: Unlimited minutes for $69.99.

**Input:**
Use the following menu to prompt the user for the customer’s voice plan:
> ______________________________________________________
> | Voice Plans:                                       |
> | A. The 450 minute plan                             |
> | B. The 900 minute plan                             |
> | C. The unlimited plan                              |
> | Enter which voice plan the customer subscribes to: |
> ______________________________________________________
Then ask the user to input the number of voice minutes used in the month.
For both inputs, use an if statement to perform input validation. The user should select
only A, B, or C from the menu, and the minutes should be between 0 and 44640
(inclusive). If their input is invalid, output an error message and exit the program (do
not ask the user to re-enter the value).

**Processing:**
Compute the amount of the monthly bill according to the plan descriptions above.
Additionally, for package A customers compute how much money they would have saved this month 
a) if they had purchased package B instead and 
b) if they had purchased package C instead. 

For package B customers, compute how much money
they would have saved this month if they had purchased package C instead.

**Output:**
Display the amount of the monthly bill with a dollar sign and formatted to 2 decimal
places. Also if the customer would have saved any money by purchasing another plan
(as calculated above) output the amount of savings for the other plan(s). If the
savings are 0 or negative for a given plan, no message should be printed.

Sample output:
> ___________________________________________________________________
> | Voice Plans:                                                    | 
> | A. The 450 minute plan                                          | 
> | B. The 900 minute plan                                          | 
> | C. The unlimited plan                                           | 
> | Enter which voice plan the customer subscribes to: B            | 
> | Enter the total number of minutes used during the month: 875    | 
> | The amount due for the month is $59.99                          | 
> ___________________________________________________________________
> | Voice Plans:                                                    |
> | A. The 450 minute plan                                          |
> | B. The 900 minute plan                                          |
> | C. The unlimited plan                                           |
> | Enter which voice plan the customer subscribes to: A            |
> | Enter the total number of minutes used during the month: 501    |
> | The amount due for the month is $62.94                          |
> | Amount saved if you were on Plan B: $2.95                       |
> ___________________________________________________________________
> | Voice Plans:                                                    | 
> | A. The 450 minute plan                                          | 
> | B. The 900 minute plan                                          | 
> | C. The unlimited plan                                           | 
> | Enter which voice plan the customer subscribes to: D            | 
> | Enter the total number of minutes used during the month: 303    | 
> | The voice plan entered is invalid.                              | 
> ___________________________________________________________________
> | Voice Plans:                                                    | 
> | A. The 450 minute plan                                          | 
> | B. The 900 minute plan                                          | 
> | C. The unlimited plan                                           |        
> | Enter which voice plan the customer subscribes to: A            | 
> | Enter the total number of minutes used during the month: 44641  | 
> | That is not a valid amount for the minutes.                     | 
> ___________________________________________________________________

**Additional Requirements:**
• Your program must compile and run, otherwise you will receive a score of 0.
• Use appropriate data types. Use int unless you know the value could have non-zero digits after the decimal point.
• Your program must output the correct values given any valid input values.

**Style:**
See the Style Guidelines document on the class website. In particular:
• Named constants: use these for numeric literals, and use uppercase and
underscores in their names. 
Hint: there are several in this program.
