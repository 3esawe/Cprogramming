#include <stdio.h>
#include <string.h>

int balanced(char *str);

int main(int argc, char  *argv[]) {
  /* code */
  char pranth [20];
  if (argc < 2){
    printf("fuck you\n");
  }
  strcpy(pranth, argv[1]);

  if (balanced(pranth) == 1){
    printf("Ture...! \n" );
  }
  else{
    printf("Fuck you\n" );
  }
  return 0;
}

int balanced(char *str)
{
    int right_open = 0,left_close = 0;              /* Balance indicators. */
    char c;                      /* Current character. */
    int i = 0;                   /* Character index.   */
    /* Read characters. */
    while((c = str[i++]) != '\0'){
        if (c == '(') right_open++;         /* When '(' is read, increase right indicator. */
        if (c == ')') left_close++;         /* When ')' is read, increase left indicator. */
        /* Number of closing brackets is greater than that of the opening bracket */
        if (left_close > right_open)
            return 0;
    }
    if (right_open == left_close)
        return 1;
    else
        return 0;
}
