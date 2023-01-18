// ScriptStruct /Script/IKRig.RetargetGlobalSettings
// Size: 0x1c
struct FRetargetGlobalSettings
{
	bool bEnableRoot; // 0x0 (0x1)
	bool bEnableFK; // 0x1 (0x1)
	bool bEnableIK; // 0x2 (0x1)
	bool bWarping; // 0x3 (0x1)
	enum EWarpingDirectionSource DirectionSource; // 0x4 (0x4)
	enum EBasicAxis ForwardDirection; // 0x8 (0x4)
	struct FName DirectionChain; // 0xc (0x4)
	float WarpForwards; // 0x10 (0x4)
	float SidewaysOffset; // 0x14 (0x4)
	float WarpSplay; // 0x18 (0x4)
};

