// ScriptStruct /Script/Engine.BoneSocketTarget
// Size: 0x80
struct FBoneSocketTarget
{
	bool bUseSocket; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FBoneReference BoneReference; // 0x4 (0xc)
	struct FSocketReference SocketReference; // 0x10 (0x70)
};

