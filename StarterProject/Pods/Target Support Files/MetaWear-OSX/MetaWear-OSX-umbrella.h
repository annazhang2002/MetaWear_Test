#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BFTask+MBLExtensions.h"
#import "MBLConstants.h"
#import "MBLData.h"
#import "MBLDataSample.h"
#import "MBLDataSwitch.h"
#import "MBLDeviceInfo.h"
#import "MBLEntityEvent.h"
#import "MBLEntityModule.h"
#import "MBLEvent.h"
#import "MBLFilter.h"
#import "MBLFirmwareUpdateInfo.h"
#import "MBLMetaWear.h"
#import "MBLMetaWearManager.h"
#import "MBLModule.h"
#import "MBLNumericData.h"
#import "MBLRegister.h"
#import "MBLStringData.h"
#import "MetaWear.h"
#import "MBLAccelerometerBMA255.h"
#import "MBLAccelerometerBMA255MotionEvent.h"
#import "MBLAccelerometerBMI160.h"
#import "MBLAccelerometerBMI160MotionEvent.h"
#import "MBLAccelerometerBosch.h"
#import "MBLAccelerometerBoschFlatData.h"
#import "MBLAccelerometerBoschFlatEvent.h"
#import "MBLAccelerometerBoschLowOrHighGEvent.h"
#import "MBLAccelerometerBoschTapEvent.h"
#import "MBLAccelerometer.h"
#import "MBLAccelerometerData.h"
#import "MBLOrientationData.h"
#import "MBLRMSAccelerometerData.h"
#import "MBLAccelerometerMMA8452Q.h"
#import "MBLAmbientLightLTR329.h"
#import "MBLAmbientLight.h"
#import "MBLANCS.h"
#import "MBLANCSEventData.h"
#import "MBLBarometerBME280.h"
#import "MBLBarometerBMP280.h"
#import "MBLBarometerBosch.h"
#import "MBLBarometer.h"
#import "MBLConductance.h"
#import "MBLGPIO.h"
#import "MBLGPIOPin.h"
#import "bmi160.h"
#import "MBLGyroBMI160.h"
#import "MBLGyro.h"
#import "MBLGyroData.h"
#import "MBLHapticBuzzer.h"
#import "MBLHygrometerBME280.h"
#import "MBLHygrometer.h"
#import "MBLI2C.h"
#import "MBLiBeacon.h"
#import "MBLLED.h"
#import "MBLMagnetometerBMM150.h"
#import "MBLMagnetometer.h"
#import "MBLMagnetometerData.h"
#import "MBLMechanicalSwitch.h"
#import "MBLNeopixel.h"
#import "MBLNeopixelStrand.h"
#import "MBLPhotometer.h"
#import "MBLRGBData.h"
#import "MBLPhotometerTCS3472.h"
#import "MBLProximity.h"
#import "MBLProximityTSL2671.h"
#import "MBLEulerAngleData.h"
#import "MBLQuaternionData.h"
#import "MBLSensorFusion.h"
#import "MBLI2CData.h"
#import "MBLSerial.h"
#import "MBLSPIData.h"
#import "MBLSettings.h"
#import "MBLExternalThermistor.h"
#import "MBLTemperature.h"
#import "MBLTimer.h"
#import "MBLTimerEvent.h"

FOUNDATION_EXPORT double MetaWearVersionNumber;
FOUNDATION_EXPORT const unsigned char MetaWearVersionString[];

