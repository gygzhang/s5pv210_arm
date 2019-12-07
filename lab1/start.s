.equ GPC0CON, 0xE0200060 @定义LED控制功能寄存器的地址
.equ GPC0DAT, 0xE0200064 @定义LED数据寄存器的地址
.globl _start @声明_start是全局的，后面会被链接器用到
_start:

LDR R0, =GPC0CON @将GPC0CON代表的值（这里是一个地址）加载到R0中
LDR R1, =0x00011000 @加载一个立即数到R1中
MSR CPSR_x,#0X1<<9 @设置CPSR寄存器的第九位，开启大端模式
STR R1, [R0] @将R1中的数据送入R0寄存器存储的地址中（寄存器寻址），R1中的数据代表打开GPC0DAT寄存器3，4位的输出功能
LOOP:
LDR R0, =GPC0DAT @将GPC0CON的地址加载到R0中
MOV R1, #0X18 @送立即数数给R1
STR R1, [R0] @将R1中的数据送入R0寄存器存储的地址中（寄存器寻址），R1中的数据代表送1给GPC0DAT寄存器3，4位的输出引脚
LDR R2, =0XFFFFF @送立即数数给R2，用于点亮LED的延时
LOOP1:
SUB R2, R2, #1 @R2减一
CMP R2, #0 @R2和0比较
BNE LOOP1 @如果R2不等于0，则跳转到LOOP1
MOV R1, #0X0 @送数给R1
STR R1, [R0] @熄灭2个LED
LDR R2, =0XFFFFF @送数给R2,用于熄灭的延时
LOOP2:
SUB R2, R2, #1 @R2--
CMP R2, #0 @R2和0比较
BNE LOOP2 @如果R2不等于0，则跳转到LOOP2
B LOOP @直接跳转到LOOP
