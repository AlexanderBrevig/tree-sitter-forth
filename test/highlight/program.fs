INCLUDE ran4.seq

100      constant #drawers

create drawers  #drawers cells allot                    \ index 0..#drawers-1

: drawer[]                              ( n -- addr )   \ return address of drawer n
    cells drawers +
;
