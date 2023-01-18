// Class /Script/Engine.InputDeviceTriggerVibrationProperty
// Size: 0xc0
class UInputDeviceTriggerVibrationProperty : public UInputDeviceTriggerEffect
{
	struct FDeviceTriggerTriggerVibrationData TriggerData; // 0x40 (0x18)
	struct TMap<struct FName, struct FDeviceTriggerTriggerVibrationData> DeviceOverrideData; // 0x58 (0x50)
	unsigned char padding_a8[0x18]; // 0xa8 (0x18)
};

