Autotools Homework
==================

The task is to create configure.ac and Makefile.am files in ./ and ./src
directories.

Source codes are placed into ./src/.

Choose name of the project and the program that will be created.

The main() function is implemented in main.c, it uses function implemented
in mod1.c with header file mod1.h.

Hints
=====

1. ./ should contain configure.ac and Makefile.am
2. ./src/ should contain Makefile.am
3. the content of ./Makefile.am should be:

    SUBDIRS=src

4. the content of configure.ac can be prepared by autoscan(1)
   (but it should be manually edited)
5. to generate Makefiles, automake should by initialized using:

    AM_INIT_AUTOMAKE([foreign])

   where 'foreign' means that standard files such as NEWS, README,
   ChangeLog etc. will not be necessary.


