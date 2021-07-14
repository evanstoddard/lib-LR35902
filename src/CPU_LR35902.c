/**
 * @file CPU_LR35902.c
 * @author Evan Stoddard
 * @brief LR35902 CPU Implementation
 */

#include "CPU_LR35902.h"

/*****************************************************************************
 * Definitions
 *****************************************************************************/

/*****************************************************************************
 * Variables
 *****************************************************************************/

/*****************************************************************************
 * Prototypes
 *****************************************************************************/

/*****************************************************************************
 * Functions
 *****************************************************************************/

void CPU_LR35902_init(CPU_LR35902 *cpu)
{
    cpu->registers.A = 0;
    cpu->registers.B = 0;
    cpu->registers.C = 0;
    cpu->registers.D = 0;
    cpu->registers.E = 0;
    cpu->registers.F = 0;
    cpu->registers.SP = 0;
    cpu->registers.PC = 0;

    cpu->status = 0;
}

void CPU_LR35902_reset(CPU_LR35902 *cpu)
{
    cpu->registers.A = 0;
    cpu->registers.B = 0;
    cpu->registers.C = 0;
    cpu->registers.D = 0;
    cpu->registers.E = 0;
    cpu->registers.F = 0;
    cpu->registers.SP = 0xFFFE;
    cpu->registers.PC = 0x100;
}

 void CPU_LR35902_clock(CPU_LR35902 *cpu)
 {

 }   

 void CPU_LR35902_connect_bus(CPU_LR35902 *cpu, void *bus)
 {
     cpu->bus = bus;
 }