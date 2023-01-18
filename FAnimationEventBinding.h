// ScriptStruct /Script/UMG.AnimationEventBinding
// Size: 0x20
struct FAnimationEventBinding
{
	class UWidgetAnimation* Animation; // 0x0 (0x8)
	struct FDelegate Delegate; // 0x8 (0xc)
	enum EWidgetAnimationEvent AnimationEvent; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FName UserTag; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

