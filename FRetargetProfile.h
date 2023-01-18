// ScriptStruct /Script/IKRig.RetargetProfile
// Size: 0xf8
struct FRetargetProfile
{
	bool bApplyTargetRetargetPose; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName TargetRetargetPoseName; // 0x4 (0x4)
	bool bApplySourceRetargetPose; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FName SourceRetargetPoseName; // 0xc (0x4)
	bool bApplyChainSettings; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TMap<struct FName, struct FTargetChainSettings> ChainSettings; // 0x18 (0x50)
	bool bApplyRootSettings; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FTargetRootSettings RootSettings; // 0x70 (0x68)
	bool bApplyGlobalSettings; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x3]; // 0xd9 (0x3) 
	struct FRetargetGlobalSettings GlobalSettings; // 0xdc (0x1c)
};

