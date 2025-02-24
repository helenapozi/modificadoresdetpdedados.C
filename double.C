#include <stdio.h>

int main (){
double numeropreciso =3.141592653589793;
long double numeromuitopreciso = 3.141592653589793236;

printf("numeropreciso(double):%.15f\n", numeropreciso);
printf ("numeromuitopreciso(longdouble):%.21lf\n", numeromuitopreciso);

return 0;

}
