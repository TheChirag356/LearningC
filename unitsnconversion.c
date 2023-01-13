/*

kms to miles
inches to foot
cms to foot
pounds to kgs
inches to meters

*/

#include<stdio.h>

int main(){
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;



    while(1)
    {
        printf("\n1. Kms to Miles\n2. Inches to Foot\n3. Cms to Foot\n4. Pounds to Kgs\n5. Inches to Meters\n");
        printf("Enter the input characters(q to quit): ");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program......");
            goto end;
            break;
        case '':
        break;

        default:
            break;
        }

    }
    end:


    return 0;
}