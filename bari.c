#include <stdio.h>

int main(){
    int num_residents;
    int age;
    int senior_count = 0;
    int non_senior_count = 0;
    int total_age = 0;
    float average_age;

    printf("Enter number of residents to evaluate: ");
    scanf("%d", &num_residents);

    for(int i = 1; i <= num_residents; i++){
        printf("Enter age of resident %d:", i);
        scanf("%d", &age);
        total_age += age;

        if(age >=60){
            senior_count++;
            printf("Resident %d: Senior Citizen - ELIGIBLE\n", i);
        }
    }

    average_age = (float)total_age/num_residents;

    printf("\n--- SUMMARY---\n");
    printf("Total Senior Citizens: %d\n", senior_count);
    printf("Total Non-senior Citizens: %d\n", non_senior_count);
    printf("Avarage age: %.2f\n", average_age);

    return 0;
    
}