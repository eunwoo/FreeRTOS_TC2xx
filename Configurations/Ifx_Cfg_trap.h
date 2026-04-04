/* Ifx_Cfg_trap.h - create this file in your project config folder */
#ifndef IFX_CFG_TRAP_H
#define IFX_CFG_TRAP_H

extern void prvTrapYield( int iTrapIdentification );

#define IFX_CFG_CPU_TRAP_SYSCALL_CPU0_HOOK(trapWatch) \
    prvTrapYield( (trapWatch).tId )

#endif /* IFX_CFG_TRAP_H */
