// ScriptStruct /Script/Engine.AttenuationSubmixSendSettings
// Size: 0xa8
struct FAttenuationSubmixSendSettings
{
	class USoundSubmixBase* Submix; // 0x0 (0x8)
	enum ESubmixSendMethod SubmixSendMethod; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float SubmixSendLevelMin; // 0xc (0x4)
	float SubmixSendLevelMax; // 0x10 (0x4)
	float SubmixSendDistanceMin; // 0x14 (0x4)
	float SubmixSendDistanceMax; // 0x18 (0x4)
	float ManualSubmixSendLevel; // 0x1c (0x4)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20 (0x88)
};

