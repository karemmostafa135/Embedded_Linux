#include "stdio.h"
#include "div.h"
#include "add.h"
#include "sub.h"
#include "mult.h"
int main(){
int x=5;
int y=8;
printf("%d\n",add(x,y));
printf("%d\n",sub(x,y));
printf("%d\n",mult(x,y));
printf("%f\n",div(x,y));
return 0;
}
