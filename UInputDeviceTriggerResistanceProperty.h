// Class /Script/Engine.InputDeviceTriggerResistanceProperty
// Size: 0xb8
class UInputDeviceTriggerResistanceProperty : public UInputDeviceTriggerEffect
{
	struct FDeviceTriggerTriggerResistanceData TriggerData; // 0x40 (0x10)
	struct TMap<struct FName, struct FDeviceTriggerTriggerResistanceData> DeviceOverrideData; // 0x50 (0x50)
	unsigned char padding_a0[0x18]; // 0xa0 (0x18)
};

