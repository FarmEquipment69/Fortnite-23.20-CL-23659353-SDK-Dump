// ScriptStruct /Script/Engine.ViewTargetTransitionParams
// Size: 0x10
struct FViewTargetTransitionParams
{
	float BlendTime; // 0x0 (0x4)
	struct TEnumAsByte<EViewTargetBlendFunction> BlendFunction; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float BlendExp; // 0x8 (0x4)
	unsigned char bLockOutgoing; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

