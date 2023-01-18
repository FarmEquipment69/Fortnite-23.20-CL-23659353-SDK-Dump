// ScriptStruct /Script/FortniteGame.FortVehicleAudioOneshotGate
// Size: 0x28
struct FFortVehicleAudioOneshotGate
{
	float GateValue; // 0x0 (0x4)
	enum EVehicleAudioTriggerDir Direction; // 0x4 (0x1)
	bool FadeWhenOutsideGate; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	class USoundBase* sound; // 0x8 (0x8)
	float MinTimeSinceTrigger; // 0x10 (0x4)
	float InterruptFadeTime; // 0x14 (0x4)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct TWeakObjectPtr<class UAudioComponent> AudioComp; // 0x20 (0x8)
};

