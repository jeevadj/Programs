#include<stdio.h>
class Bow{
    public:
       Bow(){
           printf("\nCOnstructor");
       }

       void display(){
           printf("\nDisplay Function...");
       }
};

class bow1 : public Bow{
    public :
       bow1(){
           printf("\nbow1");
       }

       void display(){
          
           printf("\nbow1 Display Function..");
       }
};
int main(){

    Bow c;
    bow1 b;
    c.display();
    b.display();
    

}