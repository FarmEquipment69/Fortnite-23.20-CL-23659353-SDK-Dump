// Class /Script/Engine.InputDeviceTriggerFeedbackProperty
// Size: 0xb0
class UInputDeviceTriggerFeedbackProperty : public UInputDeviceTriggerEffect
{
	struct FDeviceTriggerFeedbackData TriggerData; // 0x40 (0x10)
	struct TMap<struct FName, struct FDeviceTriggerFeedbackData> DeviceOverrideData; // 0x50 (0x50)
	unsigned char padding_a0[0x10]; // 0xa0 (0x10)
};

