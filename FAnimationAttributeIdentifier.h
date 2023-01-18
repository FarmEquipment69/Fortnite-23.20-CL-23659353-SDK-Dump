// ScriptStruct /Script/Engine.AnimationAttributeIdentifier
// Size: 0x30
struct FAnimationAttributeIdentifier
{
	struct FName Name; // 0x0 (0x4)
	struct FName BoneName; // 0x4 (0x4)
	int BoneIndex; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UScriptStruct* ScriptStruct; // 0x10 (0x8)
	struct FSoftObjectPath ScriptStructPath; // 0x18 (0x18)
};

