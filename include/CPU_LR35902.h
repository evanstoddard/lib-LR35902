/**
 * @file CPU_LR35902.h
 * @author Evan Stoddard
 * @brief LR35902 CPU Header
 */

#ifndef CPU_LR35902_H_
#define CPU_LR35902_H_

#include <stdint.h>

/*****************************************************************************
 * Definitions
 *****************************************************************************/

#define CPU_LR35902_STATUS_ZERO         7
#define CPU_LR35902_STATUS_SUBTRACT     6
#define CPU_LR35902_STATUS_HALF_CARRY   5
#define CPU_LR35902_STATUS_CARRY        4

/*****************************************************************************
 * Structs, Unions, Enums, & Typedefs
 *****************************************************************************/

/**
 * @brief CPU registers typedef
 * 
 */
typedef struct
{
    uint8_t A, B, C, D, E, F, H, L;
    uint16_t SP, PC;
} CPU_LR35902_Registers;

/**
 * @brief CPU object typedef
 * 
 */
typedef struct
{
    CPU_LR35902_Registers registers;
    uint8_t status;
    void * bus;
} CPU_LR35902;

/*****************************************************************************
 * Function Prototypes
 *****************************************************************************/

/**
 * @brief Initializes LR35902 CPU object
 * 
 * @param cpu cpu object
 */
void CPU_LR35902_init(CPU_LR35902 *cpu);

/**
 * @brief Resets LR35902
 * 
 * @param cpu cpu object
 */
void CPU_LR35902_reset(CPU_LR35902 *cpu);

/**
 * @brief clocks LR35902
 * 
 * @param cpu cpu object
 */
void CPU_LR35902_clock(CPU_LR35902 *cpu);

/**
 * @brief Attaches passed bus pointer to CPU bus pointer
 * 
 * @param cpu cpu object
 * @param bus bus pointer
 */
void CPU_LR35902_connect_bus(CPU_LR35902 *cpu, void *bus);

#endif /* CPU_LR35902_H_ */
