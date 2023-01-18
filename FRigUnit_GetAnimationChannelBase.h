// ScriptStruct /Script/ControlRig.RigUnit_GetAnimationChannelBase
// Size: 0x20
struct FRigUnit_GetAnimationChannelBase : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	struct FName Channel; // 0xc (0x4)
	bool bInitial; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FRigElementKey* CachedChannelKey; // 0x14 (0x8)
	int CachedChannelHash; // 0x1c (0x4)
};

