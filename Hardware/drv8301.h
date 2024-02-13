//
// Created by pc on 2024/2/13.
//

#ifndef FOC_V1_2_DRV8301_H
#define FOC_V1_2_DRV8301_H

#include "main.h"

/* ------     ¼Ä´æÆ÷µØÖ·¼°ÃüÁîÏê¼ûÊÖ²á     ------*/

//  DRV8301 ×´Ì¬¼Ä´æÆ÷ Ö»¶Á
#define REG_8301_Status_Reg_1 (0x0000 << 11)
#define REG_8301_Status_Reg_2 (0x0001 << 11)

//  DRV8301 ¿ØÖÆ¼Ä´æÆ÷ ¶Á/Ğ´
#define REG_8301_Control_Reg_1 (0x0002 << 11)
#define REG_8301_Control_Reg_2 (0x0003 << 11)

//  ¿ØÖÆ¼Ä´æÆ÷1µÄÃüÁî
#define REG_8301_Gate_Peak_I_1_7A (0x0000 << 0)
#define REG_8301_Gate_Peak_I_0_7A (0x0001 << 0)
#define REG_8301_Gate_Peak_I_0_25A (0x0002 << 0)
#define REG_8301_Gate_Peak_I_Reserved (0x0003 << 0)

#define REG_8301_Gate_Reset_Normal (0x0000 << 2)
#define REG_8301_Gate_Reset_Latched_Faults (0x0001 << 2)

#define REG_8301_6_PWM_MODE (0x0000 << 3)
#define REG_8301_3_PWM_MODE (0x0001 << 3)

#define REG_8301_OCP_I_limit (0x0000 << 4)
#define REG_8301_OCP_OC_shutdown (0x0001 << 4)
#define REG_8301_OCP_Report_Only (0x0002 << 4)
#define REG_8301_OCP_OC_Disable (0x0003 << 4)

#define REG_8301_OC_ADJ_SET(Vds) (((uint16_t)Vds) << 6)

//  ¿ØÖÆ¼Ä´æÆ÷2µÄÃüÁî
#define REG_8301_OTCW_OT_OC (0x0000 << 0)
#define REG_8301_OTCW_OT (0x0001 << 0)
#define REG_8301_OTCW_OC (0x0002 << 0)
#define REG_8301_OTCW_OC_Reserved (0x0003 << 0)

#define REG_8301_Sample_GAIN_10 (0x0000 << 2)
#define REG_8301_Sample_GAIN_20 (0x0001 << 2)
#define REG_8301_Sample_GAIN_40 (0x0002 << 2)
#define REG_8301_Sample_GAIN_80 (0x0003 << 2)

#define REG_8301_DC_CAL_1_connect (0x0000 << 4)
#define REG_8301_DC_CAL_1_disconnect (0x0001 << 4)

#define REG_8301_DC_CAL_2_connect (0x0000 << 5)
#define REG_8301_DC_CAL_2_disconnect (0x0001 << 5)

#define REG_8301_OC_TOFF_Cyl_Cyl (0x0000 << 6)
#define REG_8301_OC_TOFF_Off_Ctrl (0x0001 << 6)

//  ¶Á/Ğ´Ö¸Áî
#define REG_8301_Write 0x0000
#define REG_8301_Read 0x8000

void DRV8301_Init(void);

#endif //FOC_V1_2_DRV8301_H
