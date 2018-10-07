#include <iostream>
#include "vector.h"
#include <cmath>
#define PI 3.14159265

My_Vector :: My_Vector(){

    val_x_m = 0;
    val_y_m = 0;

}

My_Vector:: My_Vector ( int val_x, int val_y){

    val_x_m = val_x;
    val_y_m = val_y;

}

int My_Vector:: add(int val1, int val2){

    int sum = val1 + val2;

    return sum;
}

int My_Vector:: subtract (int val1, int val2){

    int difference = val1 - val2;

    return difference;
}

double My_Vector:: cosine(){
    double h, i;

    double acosine, cosine;

    h = sqrt(add(pow(val_x_m,2), pow(val_y_m,2)));
    i= val_x_m/h;
    
    cosine = acos(i ) * 180.0/PI ;
   
    
    return cosine;

}

int My_Vector:: scalar_product(int scale){

    int scalar_product =  val_x_m * scale +  val_y_m * scale;

    return scalar_product;
}

void My_Vector:: multiply_by_scalar(int scale){


    val_x_m *= scale;
    val_y_m *= scale;

    
}

int My_Vector:: get_val_x(){

    return val_x_m;

}

int My_Vector:: get_val_y(){

    return val_y_m;
    
}
