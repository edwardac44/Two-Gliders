#include "stdio.h"
#include "math.h"

int main()
{

//Declaration of Variables
double Mass_air = 0.00; //Establish the mass of the airplane
double Mass_glide1 = 0.00; //Establish the mass of the first glider
double Mass_glide2 = 0.00; //Establish the mass of the second glider
double Force_prop = 0.00; //Establish the force of the propellor
double Acc = 0.00; //Establish the acceleration of the system
double Tension1 = 0.00; //Establish the tension in the first rope
double Tension2 = 0.00; //Establish the tension in the second rope

printf("Enter mass of airplane (kg) -> "); //Print statement asking for the airplanes mass
scanf( "%lf", &Mass_air); //respective scanf statement
printf("Enter mass of glider #1 (kg) -> "); //Print statement asking for the first gliders mass
scanf( "%lf", &Mass_glide1); //respective scanf statement
printf("Enter mass of glider #2 (kg) -> "); //Print statement asking for the second gliders mass
scanf( "%lf", &Mass_glide2); //respective scanf statement
printf("Enter force produced by propellers (N) -> "); //Print statement asking for the force
scanf("%lf", &Force_prop); //respective scanf statement

Acc = Force_prop / (Mass_air + Mass_glide1 + Mass_glide2); //Calculation for the acceleration
Tension1 = Acc * (Mass_glide1 + Mass_glide2); //Calculation for the first tension
Tension2 = Acc * (Mass_glide2); //Calculation for the second tension

printf("\nAcceleration: %.2lf m/s^2\n", Acc1); //Output Print statements
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf("Resulting tension on cable #1: %10.2lf Newtons\n", Tension1);
printf("Resulting tension on cable #2: %10.2lf Newtons\n", Tension2);
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

return(0);

}
