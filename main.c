#include <stdio.h>

void catHurricane(int windSpeed) {
    if (windSpeed < 74) {
        printf("Not a hurricane\n");
    } 
    else if (windSpeed < 96) {
        printf("Category 1 Hurricane\n");
    }
    else if (windSpeed < 111) {
        printf("Category 2 Hurricane\n");
    }
    else if (windSpeed < 130) {
        printf("Category 3 Hurricane\n");
    } 
    else if (windSpeed < 157) {
        printf("Category 4 Hurricane\n");
    } 
    else 
    {
        printf("Category 5 Hurricane\n");
    }

}

int main() {
    int windSpeed;

    while (1) {
        printf("Enter the wind speed: ");
        if (scanf("%d", &windSpeed) != 1 || windSpeed < 0) {
            printf("That is a invalid input, please try again.\n");
            while (getchar() != '\n'); 
        } else 
        
        {

          
            break;
        }
    }

    catHurricane(windSpeed);

    return 0;
}
