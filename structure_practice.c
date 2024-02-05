// Enter address (house , block , city , state) of 3 peoples
#include <stdio.h>
#include <stdio.h>

struct people
{
    int house;
    int block;
    char city[100];
    char state[100];
};

void printInfo(struct people add);
int main()
{

    struct people add[3];
    printf("Enter Info for person 1 : ");
    scanf("%d",&add[0].house);
    scanf("%d",&add[0].block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);

    printf("Enter Info for person 2 : ");
    scanf("%d",&add[1].house);
    scanf("%d",&add[1].block);
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);
    printf("Enter Info for person 3 : ");
    scanf("%d",&add[2].house);
    scanf("%d",&add[2].block);
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);

    printInfo(add[0]);
    printInfo(add[1]);
    printInfo(add[2]);
     return 0;
}

void printInfo(struct people add)
{
    printf("The address of a person house no. %d ,block no. %d , city %s, and state %s \n",add.house,add.block,add.city,add.state);
}
 