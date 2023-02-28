asm code:

    mov esi, 1000-2

_0:   mov edi, 1000-1
   sub edi, esi

_1:   mov ebp, 1000
   sub ebp, esi
   sub ebp, edi

   mov eax, esi
   imul eax, eax

   mov edx, edi
   imul edx, edx

   mov ecx, ebp
   imul ecx, ecx

   add eax, edx
   cmp eax, ecx
   je score

   dec edi
   jne _1

   dec esi
   jne _0

   BYTE 0CCh
score:
   imul ebp, esi
   imul ebp, edi
