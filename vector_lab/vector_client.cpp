#include <iostream>
#include "vector.h"
#include "vector.cpp"

int main(){

   
  
    int option;
    int val_x;
    int val_y;
    int scale;
 
    std:: cout << "\nEnter x value for vector 1:";
    std:: cin >> val_x;

    std:: cout << "\nEnter y value for vector 1:";
    std:: cin >> val_y;
    
    My_Vector Vector1 (val_x, val_y);

    do {
        std:: cout << "\nEnter 1 to get cosine, enter 2 to get scalar product, enter 3 to get multiply_by_scalar, enter 4 to quit:";
        std:: cin >> option;

        switch(option){

            case 1:

                std:: cout << "\nThe cosine angle is: " << Vector1.cosine();
                break;

            case 2:
                std:: cout << "\nEnter a scale value:";
                std:: cin >> scale;
                std:: cout << "The result of the scalar product is:" << Vector1.scalar_product(scale);
                break;
            
            case 3:
                std:: cout << "\n Enter a scale value:";
                std:: cin >> scale;
                Vector1.multiply_by_scalar(scale);
                std:: cout << "\n The result of multiplying by a scale is:";
                std:: cout << "\n X value : "<< Vector1.get_val_x();
                std:: cout << "\n Y value : "<< Vector1.get_val_y();
                break;

            case 4:
                exit(1);

        }

    } while(1);


}