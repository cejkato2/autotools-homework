#include <stdio.h>
#include <stdlib.h>

// config.h is generated by configure
#include <config.h>

#include "mod1.h"

int main(int argc, char **argv)
{
   puts("\"Sometimes I believe in as many as six impossible "
        "things before breakfast.\"");
   name_six_impossible();
   puts("\t\t\t- Alice from Wonderland");
   return 0;
}

