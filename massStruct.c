#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include <string.h>
#include <locale.h>

typedef struct data {
  int day;
  int month;
  int year;
};

int main()
{
    struct data myData[] = {17, 12, 2020, 16, 12, 2020, 15, 12, 2020};
    int n = sizeof(myData)/sizeof(myData[0]);
    for(int i=0; i<n; i++)
    {
        printf("Day:%i \t Month: %i \t Yer:%i \n", myData[i].day, myData[i].month, myData[i].year);
    }
    return 0;
}

