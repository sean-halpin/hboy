#pragma once
#include <glib.h>

struct registers
{
    struct
    {
        union
        {
            struct
            {
                guchar f;
                guchar a;
            };
            gushort af;
        };
    };
    struct
    {
        union
        {
            struct
            {
                guchar c;
                guchar b;
            };
            gushort bc;
        };
    };
    struct
    {
        union
        {
            struct
            {
                guchar e;
                guchar d;
            };
            gushort de;
        };
    };
    struct
    {
        union
        {
            struct
            {
                guchar l;
                guchar h;
            };
            gushort hl;
        };
    };
    gushort sp;
    gushort pc;
};

extern struct registers registers;