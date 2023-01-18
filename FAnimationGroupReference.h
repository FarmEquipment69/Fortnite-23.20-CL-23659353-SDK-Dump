// ScriptStruct /Script/Engine.AnimationGroupReference
// Size: 0xc
struct FAnimationGroupReference
{
	enum EAnimSyncMethod Method; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName GroupName; // 0x4 (0x4)
	struct TEnumAsByte<EAnimGroupRole> GroupRole; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

