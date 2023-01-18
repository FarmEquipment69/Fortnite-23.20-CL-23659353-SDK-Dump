// ScriptStruct /Script/AnimationSharing.AnimationSetup
// Size: 0x18
struct FAnimationSetup
{
	class UAnimSequence* AnimSequence; // 0x0 (0x8)
	class UClass* AnimBlueprint; // 0x8 (0x8)
	struct FPerPlatformInt NumRandomizedInstances; // 0x10 (0x4)
	struct FPerPlatformBool Enabled; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

