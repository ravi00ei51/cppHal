MEMORY {
FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 0x7000
SRAM (rwx) : ORIGIN = 0x20000600, LENGTH = 0x2000
}
SECTIONS {
.vectors : {               * (.vectors);                   } > FLASH
.startup : {               * (.startup);                   } > FLASH
.init_array : { __init_array_start = .; KEEP (*(.init_array*)) ; __init_array_end = .; } > FLASH
.text   : {                * (.text)   ;                   } > FLASH
.rodata : {                * (.rodata) ; __sflash__ = .;   } > FLASH
.data   : { __sdata__ = .; * (.data)   ;   __edata__ = .;  } > SRAM AT>FLASH
.bss    : { __sbss__ = .;  * (.bss)    ; __ebss__ = .;     } > SRAM
__ebss__ = .;
}
