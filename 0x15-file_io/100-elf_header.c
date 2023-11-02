#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
* Displays information contained in ELF header at the start of an ELF file.
* @param elf_filename: The name of the ELF file.
* @return: 0 on success, 98 on error.
*/

int display_elf_header(const char *elf_filename)
{
/*Declare the ELF header variable at the beginning of the function*/
Elf64_Ehdr elf_header;

/*Open the ELF file in read-only mode*/
int fd = open(elf_filename, O_RDONLY);

if (fd == -1)
{
/*Check if opening the file failed.*/
fprintf(stderr, "Error opening file: %s\n", elf_filename);
/*Exit with status code 98.*/
return (98);
}
/*Read the ELF header from the file.*/
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
fprintf(stderr, "Error reading ELF header from file: %s\n", elf_filename);
/*Close the file*/
close(fd);
/*Exit wuth status code 98*/
return (98);
}

/*Display the information contained in the ELF header.*/
printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0],
elf_header.e_ident[EI_MAG1],
elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("Type: %d\n", elf_header.e_type);
printf("Entry point address: %lx\n", elf_header.e_entry);

/*Close the file*/
close(fd);
/*Exit with status code 0*/
return (0);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
/*Check if the number of command-line arguments is correct.*/
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
/*Exit  with status code 98*/
return (98);
}
return (display_elf_header(argv[1]));
}
