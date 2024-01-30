#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>

#define ELF_MAGIC_SIZE 4

typedef struct {
    uint8_t  magic[ELF_MAGIC_SIZE];
    uint8_t  class;
    uint8_t  data;
    uint8_t  version;
    uint8_t  abi;
    uint8_t  abi_version;
    uint8_t  pad[7];
    uint16_t type;
    uint16_t machine;
    uint32_t version_elf;
    uint64_t entry_point;
    uint64_t ph_offset;
    uint64_t sh_offset;
    uint32_t flags;
    uint16_t header_size;
    uint16_t ph_entry_size;
    uint16_t ph_num_entries;
    uint16_t sh_entry_size;
    uint16_t sh_num_entries;
    uint16_t sh_str_index;
} ElfHeader;

void print_error_and_exit(int exit_code, const char *format, ...) {
    va_list args;
    va_start(args, format);
    fprintf(stderr, format, args);
    va_end(args);
    exit(exit_code);
}

void display_elf_header(const ElfHeader *header) {
    printf("Magic:   %02x %02x %02x %02x\n",
           header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("Class:   %d-bit\n", (header->class == 1) ? 32 : 64);
    printf("Data:    %s\n", (header->data == 1) ? "Little Endian" : "Big Endian");
    printf("Version: %d (current)\n", header->version);
    printf("OS/ABI:  %d\n", header->abi);
    printf("ABI Version: %d\n", header->abi_version);
    printf("Type:    0x%x\n", header->type);
    printf("Entry point address: 0x%lx\n", header->entry_point);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error_and_exit(98, "Usage: %s elf_filename\n", argv[0]);
    }

    const char *elf_filename = argv[1];
    int fd = open(elf_filename, O_RDONLY);
    if (fd == -1) {
        print_error_and_exit(98, "Error: Can't open file %s\n", elf_filename);
    }

    ElfHeader elf_header;

    // Read the ELF header
    if (read(fd, &elf_header, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        close(fd);
        print_error_and_exit(98, "Error: Can't read ELF header from file %s\n", elf_filename);
    }

    // Validate ELF magic number
    if (elf_header.magic[0] != 0x7f || elf_header.magic[1] != 'E' ||
        elf_header.magic[2] != 'L' || elf_header.magic[3] != 'F') {
        close(fd);
        print_error_and_exit(98, "Error: Not an ELF file: %s\n", elf_filename);
    }

    // Display ELF header information
    display_elf_header(&elf_header);

    close(fd);

    return 0;
}
