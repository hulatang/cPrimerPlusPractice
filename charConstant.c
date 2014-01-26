/* charConstant.c tries to assign a 32bits char_constant to a 
 * char variable, this is because c stores char_constant in a 32bit int,
 * but a char variable is stored in a 8-bit unit.
 * so we try to see what will happen.
 */

//======================================
/* after this experiment, I know that this attempt is legal in c,
 * although i got a warning tells me that i'm trying to assign a 32-bit int
 * to a 8-bit variable.
 * but this programme can be complied , and it runs
 * the output of is is just : E, which is the last char of the char constant, 
 * also it is the last 8-bit of the 32-bit
 */

#include <stdio.h>
int main(void)
{
	char aChar ; //assign a char type variable aChar
	aChar = 'FATE'; // 'FATE' is a char constant, maybe it is stored in 32bit

	printf("the char variable aChar is: %c\n",aChar);
}

