// ScriptStruct /Script/Engine.SoundSubmixSendInfo
// Size: 0xb0
struct FSoundSubmixSendInfo
{
	enum ESendLevelControlMethod SendLevelControlMethod; // 0x0 (0x1)
	enum ESubmixSendStage SendStage; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class USoundSubmixBase* SoundSubmix; // 0x8 (0x8)
	float SendLevel; // 0x10 (0x4)
	bool DisableManualSendClamp; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float MinSendLevel; // 0x18 (0x4)
	float MaxSendLevel; // 0x1c (0x4)
	float MinSendDistance; // 0x20 (0x4)
	float MaxSendDistance; // 0x24 (0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28 (0x88)
};

