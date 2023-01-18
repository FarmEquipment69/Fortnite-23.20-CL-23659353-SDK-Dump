// ScriptStruct /Script/AnimGraphRuntime.AnimNode_Mirror_Standalone
// Size: 0x60
struct FAnimNode_Mirror_Standalone : FAnimNode_MirrorBase
{
	bool bMirror; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	class UMirrorDataTable* MirrorDataTable; // 0x50 (0x8)
	float BlendTime; // 0x58 (0x4)
	bool bResetChild; // 0x5c (0x1)
	bool bBoneMirroring; // 0x5d (0x1)
	bool bCurveMirroring; // 0x5e (0x1)
	bool bAttributeMirroring; // 0x5f (0x1)
};

