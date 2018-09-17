    #include <stdio.h>
struct st{
   static int a;
    char c;
};

int main()
{

    a=5;
    printf("%d ",st.a);

    return 0;
}
