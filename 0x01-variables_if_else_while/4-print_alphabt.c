#include <stdio.h>

int main () {
	   char ch;

	      for(ch = 'a' ; ch <= 'z' ; ch++) {
		     if (ch=='e') {
			    ch+0;
		     } else if (ch=='q') {
			    ch+0;
		     } else {
			    putchar(ch);
		     }
	      }
	      putchar('\n');
			       
	         
	         return(0);
}
