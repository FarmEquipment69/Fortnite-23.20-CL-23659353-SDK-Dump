// ScriptStruct /Script/Engine.SoundSourceBusSendInfo
// Size: 0xb8
struct FSoundSourceBusSendInfo
{
	enum ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class USoundSourceBus* SoundSourceBus; // 0x8 (0x8)
	class UAudioBus* AudioBus; // 0x10 (0x8)
	float SendLevel; // 0x18 (0x4)
	float MinSendLevel; // 0x1c (0x4)
	float MaxSendLevel; // 0x20 (0x4)
	float MinSendDistance; // 0x24 (0x4)
	float MaxSendDistance; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x30 (0x88)
};

