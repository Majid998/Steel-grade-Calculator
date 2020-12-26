/* A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.
Author Majid Mujahid Hussain dated 26th December 2020 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hardness = 0, tensile_strength = 0;
    float carbon_content = 0;
    printf("Hello world!\n");
    //printf("hardness = %d,\nTensile strength = %d,\nCarbon content = %d\n",hardness, tensile_strength,carbon_content);

    printf("Please enter the Hardness of the steel:\n");
    scanf("%d", &hardness);
    //printf("hardness = %d,\nTensile strength = %d,\nCarbon content = %d\n",hardness, tensile_strength,carbon_content);

    printf("Please enter the Tensile Strength of the steel:\n");
    scanf("%d", &tensile_strength);
    //printf("hardness = %d,\nTensile strength = %d,\nCarbon content = %d\n",hardness, tensile_strength,carbon_content);

    printf("Please enter the Carbon content of the steel:\n");
    scanf("%f", &carbon_content);
    //printf("Hardness = %d,\nTensile strength = %d,\nCarbon content = %d\n",hardness, tensile_strength,carbon_content);

    if(hardness > 50&&carbon_content < 0.7&&tensile_strength > 5600)
    {
        printf("The Steel Grade is 10.");
    }
    else if(hardness > 50&&carbon_content < 0.7)
    {
        printf("The Steel Grade is 9.");
    }
    else if(carbon_content < 0.7&&tensile_strength > 5600)
    {
        printf("The Steel Grade is 8.");
    }
    else if(hardness > 50&&tensile_strength > 5600)
    {
        printf("The Steel Grade is 7.");
    }
    else if(hardness > 50||carbon_content < 0.7||tensile_strength > 5600)
    {
        printf("The Steel Grade is 6.");
    }
    else
    {
        printf("The Steel Grade is 5. ");
    }

    return 0;
}
