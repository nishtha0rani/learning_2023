/* Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.  */

    #include <stdio.h>
    struct Box{
    double l, w, h;
    };

     double calcVolume(struct Box* box){
       return box->l * box->w * box->h;
    }
    double surfaceArea(struct Box* box){
       return 2 * (box->l * box->w + box->w * box->h + box->h * box->w);
    }
    int main(){
        struct Box box;
        struct Box* boxptr = &box;
        printf("Enter the length, Width and height of the box: ");
        scanf("%lf%lf%lf", &(boxptr-> l), &(boxptr-> w), &(boxptr-> h));
        double volume = calcVolume(&box);
        // double area = surfaceArea(&box);
        printf("Volume of Box is %.2f", volume);
        // printf("\nSurface Area of Box is %.2f", area);


        return 0;
    }