#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void display_elf_header_info(const char *filename) {
    int i, fd;
    Elf64_Ehdr header;
    
    if ((fd = open(filename, O_RDONLY)) < 0)
        display_error("Error: Cannot open file");

    if (read(fd, &header, sizeof(header)) != sizeof(header))
        display_error("Error: Cannot read ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        display_error("Error: Not an ELF file");

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i)
        printf("%02x ", header.e_ident[i]);
    printf("\nClass:   %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
    printf("Version: %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:  %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" :
                            header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
                            header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
                            header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux ABI" :
                            header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris" :
                            header.e_ident[EI_OSABI] == ELFOSABI_AIX ? "AIX" :
                            header.e_ident[EI_OSABI] == ELFOSABI_IRIX ? "IRIX" :
                            header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD" :
                            header.e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "TRU64 UNIX" :
                            header.e_ident[EI_OSABI] == ELFOSABI_MODESTO ? "Novell Modesto" :
                            header.e_ident[EI_OSABI] == ELFOSABI_OPENBSD ? "OpenBSD" :
                            header.e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM architecture" :
                            header.e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone (embedded) application" :
                            "Unknown");
    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:    %d\n", header.e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    display_elf_header_info(argv[1]);
    return 0;
}
