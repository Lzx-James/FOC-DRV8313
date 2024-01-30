/**
  ****************************(C) COPYRIGHT 2016 DJI****************************
  * @file       pid.c/h
  * @brief      pidʵ�ֺ�����������ʼ����PID���㺯����
  * @note
  * @history
  *  Version    Date            Author          Modification
  *  V1.0.0     Dec-26-2018     RM              1. ���
  *
  @verbatim
  ==============================================================================

  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2016 DJI****************************
  */
#ifndef PID_H
#define PID_H
#include "main.h"

#ifdef __cplusplus
 extern "C"
 {
#endif

enum PID_MODE { PID_POSITION = 0, PID_DELTA };

typedef struct pid_type {
    uint8_t mode;
    // PID ������
    float Kp;
    float Ki;
    float Kd;

    float max_out;   //������
    float max_iout;  //���������

    float set;
    float fdb;

    float out;
    float Pout;
    float Iout;
    float Dout;
    float Dbuf[3];   //΢���� 0���� 1��һ�� 2���ϴ�
    float error[3];  //����� 0���� 1��һ�� 2���ϴ�

} pid_type_t;
extern void pid_init(pid_type_t *pid, uint8_t mode, float Kp, float Ki, float Kd, float max_out, float max_iout);
extern float pid_calc(pid_type_t *pid, float ref, float set);
extern void pid_clear(pid_type_t *pid);

#ifdef __cplusplus
}
#endif

#endif
