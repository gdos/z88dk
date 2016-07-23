// File generated by messages.pl, do not edit

#include <iostream>
#include "messages.hpp"

stlplus::message_handler g_messages(std::cout, 0);	// infinite error limit
stlplus::message_handler g_errors(std::cerr, 0);	// infinite error limit

const char *MES_COPYRIGHT = "MES_COPYRIGHT";
const char *MES_USAGE = "MES_USAGE";
const char *MES_HELP = "MES_HELP";
const char *ERR_INVALID_OPTION = "ERR_INVALID_OPTION";
const char *ERR_READ_FILE = "ERR_READ_FILE";
const char *ERR_READ_CONTEXT = "ERR_READ_CONTEXT";

void init_messages() {
g_messages.add_message(MES_COPYRIGHT, "Z80 Module Assembler 3.0-alpha, (c) Paulo Custodio 2011-2016");
g_messages.add_message(MES_USAGE, "Usage: z80asm2 [options] { \\@<modulefile> | <filename> }...");
g_messages.add_message(MES_HELP, "Using z80asm2:\n"
"\n"
"  To assemble 'fred.asm' use 'fred' or 'fred.asm'\n"
"\n"
"  <modulefile> contains list of file names of all modules to be linked,\n"
"  one file per line. \n"
"  Empty lines or lines starting with ';' or '#' are ignored.\n"
"  Lines starting with '\\@' are expanded recursively.\n"
"\n"
"  File types recognized or created by z80asm:\n"
"    .asm = source file (default), or alternative -e<ext>\n"
"    .obj = object file (default), or alternative -M<ext>\n"
"    .lis = list file\n"
"    .bin = Z80 binary file\n"
"    .sym = symbols file\n"
"    .map = map file\n"
"    .reloc = reloc file\n"
"    .def = global address definition file\n"
"    .err = error file\n"
"\n"
"Help Options:\n"
"  -h, --help             Show help options\n"
"  -v, --verbose          Be verbose\n"
"\n"
"Input / Output File Options:\n"
"  -e, --asm-ext=EXT      Assembly file extension excluding '.'\n"
"  -M, --obj-ext=EXT      Object file extension excluding '.'\n"
"  -o, --output=FILE      Output binary file\n"
"\n"
"Code Generation Options:\n"
"  --RCMX000              Assemble for RCM2000/RCM3000 series of Z80-like CPU\n"
"  --ti83plus             Interpret 'Invoke' as RST 28h\n"
"  --IXIY                 Swap IX and IY registers\n"
"  -C, --line-mode        Enable LINE directive\n"
"\n"
"Environment:\n"
"  -I, --inc-path=PATH    Add directory to include search path\n"
"  -L, --lib-path=PATH    Add directory to library search path\n"
"  -D, --define=SYMBOL    Define a static symbol\n"
"\n"
"Libraries:\n"
"  -x, --make-lib=FILE    Create a library file.lib\n"
"  -i, --use-lib=FILE     Link library file.lib\n"
"\n"
"Binary Output:\n"
"  -b, --make-bin         Assemble and link/relocate to file.bin\n"
"  --split-bin            Create one binary file per section\n"
"  -d, --date-stamp       Assemble only updated files\n"
"  -r, --origin=ADDR      Relocate binary file to given address (decimal or hex)\n"
"  -R, --relocatable      Create relocatable code\n"
"  --reloc-info           Geneate binary file relocation information\n"
"\n"
"Output File Options:\n"
"  -s, --symtable         Create symbol table file.sym\n"
"  -l, --list             Create listing file.lis\n"
"  -m, --map              Create address map file.map\n"
"  -g, --globaldef        Create global definition file.def");
g_errors.add_message(ERR_INVALID_OPTION, "invalid option '@0', run z80asm2 -h for help");
g_errors.add_message(ERR_READ_FILE, "cannot read file '@0'");
g_errors.add_message(ERR_READ_CONTEXT, "while reading file '@0'");
}

