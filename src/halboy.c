#include "halboy.h"
#include <glib.h>

void readrom()
{
    gsize length;
    gchar *filename = "sml2.gb";
    gchar *contents; // = malloc(sizeof(gchar) * 0x0080000);
    g_file_get_contents(filename, &contents, &length, NULL);
    g_print("file length: %ld\n", length);

    for (size_t i = 0; i < 16; i++)
    {
        g_print("%02x ", (guchar)contents[i]);
    }
    g_free(contents);
}

int main(int argc, char *argv[])
{
    struct registers *r = malloc(sizeof(struct registers));
    for (int i = 0; i < 10; i++)
    {
        r->a = i;
        g_print("%d\n", r->a);
        g_print("%d\n", r->af);
    }
    readrom();
    g_free(r);
}