#include<stdio.h>

int main(){
    char c='a';
    char b='z';
   for (c = 'a'; c <= b; c += 3) 
    {
         printf("%c ", c);
    }
    
}