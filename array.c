#include<stdio.h>
#include<string.h>
struct lib
{
    int book_price;
    char book_name[50];
};

int main(){
    struct lib book[2];
    int key_name;
    for(int i = 0; i<2; i++){
        printf("Enter book name for book %d:\n", i+1);
        scanf("%s", book[i].book_name);
        printf("Enter book price for book %d:\n", i+1);
        scanf("%d", &book[i].book_price);
    }
//retrive data from array 
    printf("search the book: ");
    scanf("%s", key_name);

    for(int i = 0; i<2; i++){
        if(strcmp(book[i].book_name, key_name) == 0){
            printf("book name: %s,\nbook price: %d;", book[i].book_name, book[i].book_price);
        }
    }

    return 0 ;
}