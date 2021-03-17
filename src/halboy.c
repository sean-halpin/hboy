#include "halboy.h"
#include <glib.h>

int main(int argc, char *argv[])
{
    struct registers *r = malloc(sizeof(struct registers));
    for (int i = 0; i < 10; i++)
    {
        r->a = i;
        g_print("%d\n", r->a);
        g_print("%d\n", r->af);
    }
}