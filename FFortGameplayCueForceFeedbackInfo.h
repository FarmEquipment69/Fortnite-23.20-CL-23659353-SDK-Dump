// ScriptStruct /Script/FortniteGame.FortGameplayCueForceFeedbackInfo
// Size: 0x28
struct FFortGameplayCueForceFeedbackInfo
{
	class UForceFeedbackEffect* ForceFeedbackEffect; // 0x0 (0x8)
	float EffectRadius; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UForceFeedbackEffect* FarForceFeedbackEffect; // 0x10 (0x8)
	float FarEffectRadius; // 0x18 (0x4)
	struct FName EffectTag; // 0x1c (0x4)
	bool bAlwaysPlayOnTarget; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

