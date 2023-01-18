// ScriptStruct /Script/Engine.AnimMontageInstance
// Size: 0x1c8
struct FAnimMontageInstance
{
	class UAnimMontage* Montage; // 0x0 (0x8)
	unsigned char unreflected_8[0x20]; // 0x8 (0x20) 
	bool bPlaying; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float DefaultBlendTimeMultiplier; // 0x2c (0x4)
	unsigned char unreflected_30[0xc8]; // 0x30 (0xc8) 
	struct TArray<int> NextSections; // 0xf8 (0x10)
	struct TArray<int> PrevSections; // 0x108 (0x10)
	unsigned char unreflected_118[0x10]; // 0x118 (0x10) 
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x128 (0x10)
	float Position; // 0x138 (0x4)
	float PlayRate; // 0x13c (0x4)
	struct FAlphaBlend Blend; // 0x140 (0x30)
	unsigned char unreflected_170[0x34]; // 0x170 (0x34) 
	int DisableRootMotionCount; // 0x1a4 (0x4)
	unsigned char padding_1a8[0x20]; // 0x1a8 (0x20)
};

