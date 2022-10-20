#include <stdio.h>
#include <math.h>
#define PI 3.142857
//functions prototype
double perimeter(double shape); //calculates the perimeter of a selected shape
double area (double shape);//calculates the area of a selected shape
double volume (double shape);//calculates the volume of a selected shape
//main
int main()
{
   //Perimeter, Area or Volume
   int choice;// Variable choice will be used to store the selection of what calculation the user wants to perform, and to store what shape the user wants to calculate
   while(1)
   {
    printf("Welcome to the Geometry Calculator\nDo you want to calculate:\n1.Perimeter\n2.Area\n3.Volume\nEnter your choice <1-3>\n");
    scanf("%d",&choice);// stores user input into choice
        switch(choice)//uses choice value<1-3> to switch between different options to find which problem the user wants the calculator to solve
    {
        case 1://Is selected if the user wants to calculate the perimeter of a shape
            printf("Perimeter\nWhich shape would you like to calculate\n1.Square\n2.Rectangle\n3.Parallelogram\n4.Triangle\n5.Trapezoid\n6.Circle\nEnter your choice <1-6>\n");//Informs the user to type 1-6 for their desired shape
            scanf("%d",&choice);//Stores the user input of what shape they want to use as a integer value<1-6>
            printf("%.2f\n",perimeter(choice));//Calls the function perimeter and passes the shape to calculate, then prints the result that is returned
            break;
        case 2://Is selected if the user wants to calculate the area of a shape
            printf("Area\nWhich shape would you like to calculate\n1.Square\n2.Rectangle\n3.Parallelogram\n4.Triangle\n5.Trapezoid\n6.Circle\n7.Cylinder\nEnter your choice <1-7>\n");
            scanf("%d",&choice);//Stores the user input of what shape they want to use as a integer value<1-7>
            printf("%.2f\n",area(choice));//Calls the function area and passes the shape to calculate, then prints the result that is returned
            break;
        case 3://Is selected if the user wants to calculate the volume of a shape
            printf("Volume\nWhich shape would you like to calculate\n1.Cube\n2.Rectangular Prism\n3.Triangular Pyramid\n4.Sphere\n5.Cylinder\n6.Cone\nEnter your choice<1-6>\n");
            scanf("%d",&choice);//Stores the user input of what shape they want to use as a  integer value<1-6>
            printf("%.2f\n",volume(choice));//Calls the function volume and passes the shape to calculate, then print the result that is returned
            break;
        default://Is selected if the user input a integer that is not between 1-3
            printf("Invalid selection: %d\n",choice);
            break;//restarts the calculator
    }
       printf("Would you like to use the calculator again?\n1.Yes 2.No\nEnter your choice<1-2>\n");
        scanf("%d",&choice);//Stores user input if they want to use the calculator again as a integer value<1-2>
        if(choice==2){//If the user does not input integer 1 the calculator will stop
            printf("Thank you for using the calculator!");
            break;//stops the calculator
        }
   }

}
//functions
double perimeter(double shape)
{
    int k = shape;//K will be used to store the desired shape and turns shape into integer so it can be used in switch
    float x,width,length,base,side_1,side_2,side_3,radius;//variable x is used to return result, all the other variables are used to store user input for sizes to calculate perimeter
    switch(k)//Uses shape choice value<1-6> to switch between different options to find what shape the user wants to calculate the perimeter
    {
    case 1:// Calculates the perimeter of a square side*4
        printf("Please input the length of the square:\n");
        scanf("%f",&width);//stores user input in variable width
        x = width*4;//stores the result the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 2:// Calculates the perimeter of a Rectangle
        printf("Please input the width then length of rectangle\n");
        scanf("%f%f",&width,&length);// stores user input in variable width and length
        x = 2*(width+length);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 3:// Calculates the perimeter of a parallelogram
        printf("Please input the base size and then the side size of parallelogram\n");
        scanf("%f%f",&base,&side_1);//stores user input in variable base and side_1
        x = 2*(base+side_1);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 4:// Calculates the perimeter of a triangle
        printf("Please input the size of all 3 sides of triangle\n");
        scanf("%f%f%f",&side_1,&base,&side_2);//stores user input in variable side_1 base and side_2
        x = side_1+base+side_2;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 5:// Calculates the perimeter of a Trapezoid
        printf("Please input the size of all 4 sides of trapezoid\n");
        scanf("%f%f%f%f",&base,&side_1,&side_2,&side_3);//stores user input in variable base side_1 side_2 side_3
        x = base+side_1+side_2+side_3;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 6:// Calculates the perimeter of a Circle
        printf("Please input the radius of circle\n");
        scanf("%f",&radius);//stores user input in radius
        x = radius*PI;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    default:
        printf("Invalid selection: %d\n",k);//Is selected if the user input a integer that is not between 1-6
        break;
    }
}
double area(double shape)
{
    int k = shape;//K will be used to store the desired shape and turns shape into integer so it can be used in switch
    float x,width,length,height,base,side_1,side_2,side_3,radius;//variable x is used to return result, all the other variables are used to store user input for sizes to calculate perimeter
    switch(k)//Uses shape choice value<1-7> to switch between different options to find what shape the user wants to calculate the area
    {
    case 1:// Calculates the area of a square using side^2
        printf("Please input the size of one of the square's side\n");
        scanf("%f",&side_1);//stores user input in variable side_1
        x = (side_1*side_1);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 2:// Calculates the area of a Rectangle using w*l
        printf("Please input the sizes of the rectangle's length and then width\n");
        scanf("%f%f",&width,&length);//stores user input in variable width length
        x = width*length;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 3:// Calculates the area of a parallelogram b*h
        printf("Please input the sizes of parallelogram's base and then height");
        scanf("%f%f",&base,&height);//stores user input in variable base height
        x = base*height;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 4:// Calculates the area of a triangle using b*h
        printf("Please input the triangle's base and then height\n");
        scanf("%f%f",&base,&height);//stores the user input in variable base height
        x = base*height;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 5:// Calculates the area of a Trapezoid using (a+b/2)*h
        printf("Please input the trapezoid's bottom base, then top base, and then height\n");
        scanf("%f%f%f",&base,&side_1,&height);//stores the user input in variable base side_1 height
        x = ((base+side_1)/2.00)*height;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 6:// Calculates the area of a Circle using pi*r^2
        printf("Please input the circle's radius\n");
        scanf("%f",&radius);//stores the user input in variable radius
        x = PI*(radius*radius);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 7:// Calculates the area of a Cylinder using 2*pi*r*h+2*pi*r^2
        printf("Please input the cylinder's radius and then height\n");
        scanf("%f%f",&radius,&height);//stores the user input in variable radius and height
        x = (2*PI*radius*height)+(2*PI*(radius*radius));//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    default:
        printf("Invalid selection: %d\n",k);//Is selected if the user input a integer that is not between 1-7
        break;
    }
}
double volume(double shape)
{
    int k = shape;//K will be used to store the desired shape and turns shape into integer so it can be used in switch
    float x,width,length,height,base,side_1,side_2,side_3,radius;//variable x is used to return result, all the other variables are used to store user input for sizes to calculate perimeter
    switch(k)//Uses shape choice value<1-6> to switch between different options to find what shape the user wants to calculate the volume
    {
    case 1:// Calculates the volume of a cube using edge^3
        printf("Please input one of the cube's edge size\n");
        scanf("%f",&width);//stores user input in variable width
        x = pow(width,3);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 2:// Calculates the volume of a rectangular prism using width*length*height
        printf("Please input the rectangular prism's width, then length, and then height\n");
        scanf("%f%f%f",&width,&length,&height);//stores user input in variable width length height
        x = width*length*height;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 3:// Calculates the volume of a triangular pyramid using 1/3*base area*height
        printf("Please input the triangular pyramid's base area and then height\n(*TIP: You can use the triangle are calculator to find the base area)\n");
        scanf("%f%f",&base,&height);//stores user input in variable base height
        x = (1/3.0)*base*height;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 4:// Calculates the volume of a sphere using 4/3*PI*radius^3
        printf("Please input the sphere's radius\n");
        scanf("%f",&radius);//stores user input in variable radius
        x = (4/3.0)*PI*pow(radius,3);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 5:// Calculates the volume of a cylinder PI*radius^2*height
        printf("Please input the cylinder's radius and then height\n");
        scanf("%f%f",&radius,&height);//stores user input in variable radius height
        x = PI*pow(radius,2)*height;//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    case 6:// Calculates the volume of a cone using PI*radius^3*(height/3)
        printf("Please input the cone's radius and then height\n");
        scanf("%f%f",&radius,&height);//stores user input in variable radius height
        x = PI*pow(radius,2)*(height/3.00);//stores the result of the equation in variable x
        return(x);//returns the result stored in x variable
        break;
    default:
        printf("Invalid selection: %d\n",k);//Is selected if the user input a integer that is not between 1-6
        break;
    }
}
