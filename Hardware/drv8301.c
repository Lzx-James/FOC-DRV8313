//
// Created by pc on 2024/2/13.
//
#include "drv8301.h"
#include "spi.h"

void DRV8301_Init() {
    uint16_t cmd = 0x0000;
    uint16_t response;

    cmd |= (REG_8301_Write | REG_8301_Control_Reg_1);
    cmd |= (REG_8301_3_PWM_MODE | REG_8301_Gate_Peak_I_0_7A);

//    �ر�SPIƬѡ
    HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_SET);

//    ʹ��DRV8301��PWM���룬������EN_GATE���ź���Ҫ������ʱ5-10ms����ʱʹ��SPIƬѡ���Ų���Ч
    HAL_GPIO_WritePin(PWM_EN_GPIO_Port, PWM_EN_Pin, GPIO_PIN_SET);
    HAL_Delay(12); // �˴���ʱ��12ms

//    ʹ��SPIƬѡ����
    HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_RESET);
    HAL_Delay(1);
//    ���������ֽ�
    HAL_SPI_Transmit(&hspi1, (uint8_t *) &cmd, 2, 100);
//    HAL_SPI_TransmitReceive(&hspi1, (uint8_t *) &cmd, (uint8_t *) &response, 2, 100);

//    �ر�SPIƬѡ
    HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_SET);
    HAL_Delay(10);
}