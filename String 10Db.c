/* if the string "Alice in wonder land" is fed to the scanf statement
scanf("%s%s%s%s", str1,str2,str3,str4) what will be contents of the array str1,str2,str3,str4
*/

#include <stdio.h>

int main(void) {
	char str1[20],str2[20],str3[20],str4[20];
	scanf("%s%s%s%s",str1,str2,str3,str4);
	printf("%s\n %s\n %s\n %s", str1,str2,str3,str4);
	return 0;
}

