/*
 * Copyright 2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
*   @file
*
*   @addtogroup OSIF_DRIVER
*   @{
*/

#ifndef OSIF_ARCHCFG_H
#define OSIF_ARCHCFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_ARCHCFG_VENDOR_ID                    43
#define OSIF_ARCHCFG_AR_RELEASE_MAJOR_VERSION     4
#define OSIF_ARCHCFG_AR_RELEASE_MINOR_VERSION     4
#define OSIF_ARCHCFG_AR_RELEASE_REVISION_VERSION  0
#define OSIF_ARCHCFG_SW_MAJOR_VERSION             0
#define OSIF_ARCHCFG_SW_MINOR_VERSION             8
#define OSIF_ARCHCFG_SW_PATCH_VERSION             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/
#define MCAL_ARM_MARCH      (16)  /* for ARM M4 Thumb2      */
#define MCAL_ARM_AARCH32    (32)  /* for ARM ARCH32         */
#define MCAL_ARM_AARCH64    (64)  /* for ARM ARCH64         */
#define MCAL_ARM_RARCH      (52)  /* for ARM R platform     */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* ARM_MIXT - is used to specify the ARM architecture MCAL_MARCH, MCAL_RARCH, MCAL_AARCH32, MCAL_AARCH64 */

#define MCAL_PLATFORM_ARM  MCAL_ARM_RARCH
                        
                
            
        
    

 
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* OSIF_ARCHCFG_H */
/** @} */

