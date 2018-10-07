#ifndef MY_VECTOR_H
#define MY_VECTOR_H


#include <iostream>


class My_Vector {

    private:

        int val_x_m;
        int val_y_m;

    public:

        My_Vector();

        My_Vector(int val_x, int val_y);

        int add(int val1, int val2);

        int subtract (int val1, int val2);

        double cosine();

        int scalar_product(int scale);

        void multiply_by_scalar(int scale);

        int get_val_x();

        int get_val_y();

};

#endif