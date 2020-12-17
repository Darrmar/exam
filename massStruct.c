#include <stdio.h>
#include <stdlib.h>

typedef struct dataf {
  int day;
  int month;
  int year;
} data;

int main() {
    int i, n;
    printf("number of dates: ");
    scanf("%d", &n);
    data* myData = (data*) calloc(n, sizeof(data));

    for (i = 0; i < n; i++){
        printf("Day:");
        scanf("%d", &myData[i].day);

        printf("Month:");
        scanf("%d", &myData[i].month);

        printf("Year:");
        scanf("%d", &myData[i].year);
    }
    for (i = 0; i<n; i++){
        printf("%d", myData[i].day);
        printf(".");
        printf("%d", myData[i].month);
        printf(".");
        printf("%d", myData[i].year);
        printf("\n");
    }
    free(myData);

    return 0;
}
