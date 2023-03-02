.data
      XXX         dd    100
      YYY         dd    100
      palinmax    dd    0
      txtbuf      db    16 dup(0)

.code

start:
      mov   eax,XXX
      mul   YYY
      mov   ebx,eax
      lea   edi,txtbuf
      mov   esi,edi   ;esi=points to first digit
      call  dw2a
      sub   edi,2     ;edi=back pointing to last digit

;this works the same for either 5 or 6 digits
      lodsb
      cmp   al,[edi]
      jnz   nextone
      dec   edi
      lodsb
      cmp   al,[edi]
      jnz   nextone
      dec   edi
      lodsb
      cmp   al,[edi]
      jnz   nextone
      cmp   ebx,palinmax
      jb    nextone
      mov   palinmax,ebx

nextone:
      inc   YYY
      cmp   YYY,1000
      jb    start
      inc   XXX
      cmp   XXX,999
      ja    endcalc
      push  XXX
      pop   YYY      ;values less than XXX already checked
      jmp   start      

dw2a:
      mov   ecx,10
      pushd 0           ;for later use as terminating 0
   @@:
      xor   edx,edx     ;clear for division
      div   ecx
      add   dl,"0"      ;convert to ascii
      push  edx         ;save each digit on stack
      .if   eax != 0
            jmp   @B    ;continue conversion
      .endif
   @@:
      pop   eax         ;retrieve each ascii character
      stosb
      or    al,al
      jnz   @B          ;continue until terminating 0
      ret
endcalc:
