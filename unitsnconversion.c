/*

kms to miles
inches to foot
cms to foot
pounds to kgs
inches to meters

*/

#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("\n1. Kms to Miles\n2. Inches to Foot\n3. Cms to Foot\n4. Pounds to Kgs\n5. Inches to Meters\n");
        printf("Enter the input characters(q to quit): ");
        scanf(" %c", &input);

        printf("\nEnter quantity in term of first unit: ");
        scanf("%f", &first);

        switch (input)
        {
        case 'q':
            printf("Quitting the program......");
            goto end;
            break;

        case '1':
            second = first * kmsToMiles;
            printf("%f Kms is equals to Miles %f \n", first, second);
            break;
        
        case '2':
            second = first * inchesToFoot;
            printf("%f Inches is equals to %f Foot\n", first, second);
            break;
        
        case '3':
            second = first * cmsToInches;
            printf("%f Cms is equals to %f Inches\n", first, second);
            break;
        
        case '4':
            second = first * poundToKgs;
            printf("%f Pounds is equals to %f Kgs \n", first, second);
            break;
        
        case '5':
        second = first * inchesToMeters;
            printf("%f Inches is equals to %f Meters\n", first, second);
            break;
        

        default:
            break;
        }
    }
end:

    return 0;
}