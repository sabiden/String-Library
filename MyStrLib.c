#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//Shaik Abiden
//Pd 10 Systems
//10-4-16
//StrLib Work

int mystrlen(char *p){
  int counter = 0;
  while(*p){
    counter++;
    p++;
  }
  return counter;
}

char * mystrcpy(char *dest, char *source){
  while(*source){
    *dest = *source;
    dest++;
    source++;
  }
  *(dest) = 0;
  return dest;
}

char * sternkitty( char *dest, char *source, int n){
  while(*dest){
    dest++;
  }
  while(source && n){
    *dest = *source;
    dest++;
    source++;
    n--;
  }
  *(dest) = 0;
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  while(*s1 + 1 && *s2){
    if(*s1<*s2){
      return -1;
    }
    if(*s1>*s2){
      return 1;
    }
    s1++;
    s2++;
  }
  if(*s1 == *s2){
    return 0;
  }
  if(*s1<*s2){
      return -1;
  }
  if(*s1>*s2){
    return 1;
  }
}

char * mystrchr( char *s, char c ){
  while (*s){
    if(*s == c){
      return s;
    }
    s++;
  }
  return;
}
      

int main(){


  printf("\n\n\n------LET THE TESTING BEGIN------\n\n\n");



  printf("\n-----TESTING STRLEN-----\n\n");
  char test[] = "This is a test";
  printf("The string is: 'This is a test'\n");
  printf("testing mystrlen: %i versus the actual strlen: %i \n", mystrlen(test), strlen(test));

  printf("\n-----TESTING STRCPY-----\n\n");
  char b[100] = "sdjifhajkshdfuasdjkfhasgdfjagsdfgakjsf";
  char OG[100] = "Behold, the orignal string itself";
  mystrcpy(b,OG);
  printf("testing mystrcpy: %s \n", b);
  strcpy(b,OG);
  printf("tetsing the actual strcpy: %s \n", b);

  printf("\n-----TESTING STRCAT-----\n\n");
  char l[100] = "My name is: ";
  char m[100] = "Shaik Abiden asasdasda";
  char u[100] = "My name is: ";
  char v[100] = "Shaik Abiden asasdasda";
  sternkitty(l,m,14);
  printf("testing sternkitty (my strcpy fxn): %s \n", l);
  strncat(u,v,14);
  printf("testing actual strncat using identical strings: %s \n", u);
  


  printf("\n-----TESTING STRCMP-----\n\n");

  char x[5] = "abc";
  char y[10] = "abcdefg";
  char z[15] = "bcsd";
  char g[15] = "bcsd";


  printf("First for when the first string is greater than the second\n");
  printf("testing mystrcmp: %i \n", mystrcmp(y,x));
  printf("testing actual strcmp: %i \n", strcmp(y,x));
  printf("Not sure why the actual fxn returns a 100 but the man page says to  a positive value, so I guess it's still technically correct\n\n");
  
  printf("Next for when the first string is equal than the second\n");
  printf("testing mystrcmp: %i \n", mystrcmp(g,z));
  printf("testing actual strcmp: %i \n\n", strcmp(g,z));
  
  printf("And for when the first string is less than the second\n");
  printf("testing mystrcmp: %i \n", mystrcmp(z,y));
  printf("testing actual strcmp: %i \n", strcmp(z,y));
						
  printf("\n-----TESTING STRCHR-----\n\n");

  char ch[] = "Bob is a bad boy";
  char t = 'a';
  char f = 'g';

  printf("First for when the char is in the string\n");
  printf("testing mystrchr: %p\n", mystrchr(ch,t));
  printf("testing actual strchr: %p\n", strchr(ch,t));
  
  printf("And for when the char isn't in the string\n");
  printf("testing mystrchr: %p\n", mystrchr(ch,f));
  printf("testing actual strchr: %p\n\n\n", strchr(ch,f));


}
