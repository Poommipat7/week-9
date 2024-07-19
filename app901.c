    #include<stdio.h>
// 2.callMessage Sub function
void callpostcode(){
int postcode[] = {23000, 24000, 25000, 26000, 27000, 29000};
//int count = sizeof(postcodes): //4 byte * 5 element = 20
int count = sizeof(postcode) / sizeof(postcode[0]);

printf("count:%d\n", count);

for (int i = 0; i <= count - 1; i++)
{
    printf("Post code:%d", postcode[i]);
}
}
// 3.student Sub function
void student() {}