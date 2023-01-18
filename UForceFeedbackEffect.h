// Class /Script/Engine.ForceFeedbackEffect
// Size: 0xa0
class UForceFeedbackEffect : public UObject
{
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; // 0x28 (0x10)
	struct TMap<struct FName, struct FForceFeedbackEffectOverridenChannelDetails> PerDeviceOverides; // 0x38 (0x50)
	struct TArray<class UInputDeviceProperty*> DeviceProperties; // 0x88 (0x10)
	float Duration; // 0x98 (0x4)
	unsigned char padding_9c[0x4]; // 0x9c (0x4)
};

