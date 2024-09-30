#include<stdio.h > 
 #include <string.h>
 struct student  { 
      char name  [24]  ; 
       int rollno  ; 
         float  marks ; 
       
 } ; 
  int  main  ()  { 
     struct student stu1= {"Aditya", 23 , 89 } ; 
    struct student  stu2 , stu3 ;  
     strcpy(stu2.name,"Johnny") ; 
      stu2 .rollno = 34 ; 
       stu2 .marks = 45 ; 
          scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.marks);

    // Output the values of the structure fields using printf
  
    
    printf( "stu1 : %s || %d  || %.2f\n", stu1.name , stu1.rollno,stu1.marks)  ; 
    printf( "stu2 : %s  || % d || %.2f\n ", stu2.name , stu2.rollno,stu2.marks); 
       scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.marks);

    // Output the values of the structure fields using printf
    printf("stu3: %s || %d || %.2f\n", stu3.name, stu3.rollno, stu3.marks);
 

  }
   
  