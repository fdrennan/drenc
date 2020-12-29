/////// SESSION TWO

#include <stdio.h>

int main()
{
    register int x; // register variable
    for (x = 1; x <= 15; x++)
    {
        printf("\n%d", x);
    }
    return 1;
}

/////// SESSION ONE

/*
#include <stdio.h>


// APPLICATION 5: Static Variables
extern void fun2();
int fun() { // Watch how does this error when static is added? : static int fun() {...}, it's because it is referenced in foo.c
    static int count = 0; // Retains it's value, not 0 but the increment. It's not reinitialized here. Faster
    int localVar = 0;
    count++;
    localVar++;
    printf("automatic=%d, static=%d\n", localVar, count);
    return count;
}

// APPLICATION 4
extern int count;
extern void write_extern();

// APPLICATION 3
char text[255][25]; // foo.c

// APPLICATION 2, updating the global i with foo from foo.c
int i = 5; // global
void foo(void); // coming from foo.c

int main() {



    for (int k = 0; k < 5; k++)
    {
        fun();
        fun2();
    }

    // APPLICATION 4
    count = 5; // Toggle me, its 50 in foo.c
    write_extern();

    // APPLICATION 2, updating the global i with foo from foo.c
    // foo changes i, defined in other file foo.c
    printf("%i ", i);
    foo();
    printf("%i\n", i);



    // APPLICATION 1, LOCAL VARIABLES
    auto int x; // local variable
    int m; // m in scope
    printf("Enter an integer less than 5.\n");
    scanf("%d", &m); // NOLINT(cert-err34-c)
    {
        int j; // both m and i in scope
        int n = 5;
        for (j = m; j < n; j++) {
            printf("j is equal to: %d\n", j);
        }

    }


    return 0;
}

*/
/*char *myFunction() {
    char x[] = "apple";
    return x;
}*//*


int func_name()
{
    auto int y; // local variable
    return y;
}*/
