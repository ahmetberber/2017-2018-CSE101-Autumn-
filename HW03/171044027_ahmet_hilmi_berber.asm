load R1, 35 ; bölünen
load R2, 1
load R0, 6 ; bölen
load R3, 0 ; bölüm
load R4, 11111111b ; negatif yapcak deðer

xor R4, R0, R4
addi R4, R4, R2

label: 
jmpLE R1<=R0, stop
addi R1, R1, R4

jmp label
stop:
move RF, R1
halt
