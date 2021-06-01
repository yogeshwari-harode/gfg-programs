#include<stdio.h>

void cone(int r, int l, int h)
{
    
	float pi=3.14;
	float Curved_surface_area,Total_surface_area,Volume_of_cone;
    
	Curved_surface_area=pi*r*l;
    
	Total_surface_area=pi*r*l+pi*r*r;
    
	Volume_of_cone=(pi*r*r*h)/3;
  
	printf("%.2lf %.2lf %.2lf", Curved_surface_area,Total_surface_area,Volume_of_cone);
  
}
