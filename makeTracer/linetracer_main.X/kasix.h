/* 
 * File:   kasix.h
 * Author: meumeumeucar
 *
 * Created on September 24, 2023, 9:55 PM
 */

#ifndef KASIX_H
#define	KASIX_H

#include<stdbool.h>
#include<stdint.h>

#include "mcc_generated_files/mcc.h"
#include "16x2led.h"
#include "animation.h"
#include "buzzer.h"
#include "directLED.h"
#include "motordrive.h"
#include "sensor.h"
#include "switchHandler.h"

#ifdef	__cplusplus
extern "C" {
#endif

#define __MIN(i, j) (((i) < (j)) ? (i) : (j))
#define __MAX(i, j) (((i) > (j)) ? (i) : (j))

    void kasixInitialize(void);

    void kasixSensorThrControl(void);

    void kasixSensorDThrControl(void);

    void kasixCalibration(void);

    void kasixReadyTrace(void);

    void kasixReadyTraceRside(void);

    void kasixStandardTrace(void);

    void kasixProportionalTrace(void);

    void kasixProportionalTraceOneside(void);

    void kasixProportionalTraceOnesideRside(void);

    void kasixLaneChange(void);

    void kasixSuperCurve(void);

    void kasixMotorTester(void);

    void kasixMemoryTest(void);

    void kasixSensorDTest(void);

#ifdef	__cplusplus
}
#endif

#endif	/* KASIX_H */

