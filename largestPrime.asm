    ; any unsigned 64-bit number
    ; 317-584-931-803
    push 000000049h
    push 0F1897BDBh
    ; trial divide start prime
    mov ecx, 2
_0:	mov eax, [esp][4]
    xor edx, edx
    div ecx
    mov esi, eax
    mov eax, [esp][0]
    div ecx
    inc ecx
    test edx, edx
    jne _0
    dec ecx
    mov [esp][4], esi
    mov [esp][0], eax
    test esi, esi
    jne _0
    dec eax
    jne _0
    pop eax
    pop edx
    ; ECX = greatest unsigned 32-bit prime factor