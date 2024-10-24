#include <stdio.h>
#include <string.h>


struct book{
    char title [30];
    char author [30];
    int publicationYear;
    char ISBN[13];
    float price;
    }Book;
    
    int main (){
        strcpy(Book.title,"introduction to C program");
        strcpy(Book.author,"John Smith");
        Book.publicationYear=2022;
        strcpy(Book.ISBN ,"9780131103627");
        Book.price=49.99;
        
        printf("Book title:%s\nBook author:%s\nPublication year:%d\nISBN:%s\nPrice:%.2f\n",Book.title,Book.author,Book.publicationYear,Book.ISBN,Book.price);
        
     
        printf("Enter Book Title:");
        scanf("%s",&Book.title);
        
        printf("Enter Book Author:");
        scanf("%s",&Book.author);
        
        printf("Enter year of publication:");
        scanf("%d",&Book.publicationYear);
        
        printf("Enter book ISBN:");
        scanf("%s",&Book.ISBN);
        
        printf("Enter Book Price:");
        scanf("%f",&Book.price);
        
        printf("Book Title:%s\nBook Author:%s\nBook publication year:%d\nBook ISBN:%s\nBook price:$%.2f\n",Book.title,Book.author,Book.publicationYear,Book.ISBN,Book.price);
        
       return 0;
    }