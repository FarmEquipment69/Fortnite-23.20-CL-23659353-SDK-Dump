// ScriptStruct /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
// Size: 0x1c
struct FFootPlacementPelvisSettings
{
	float MaxOffset; // 0x0 (0x4)
	float LinearStiffness; // 0x4 (0x4)
	float LinearDamping; // 0x8 (0x4)
	float HorizontalRebalancingWeight; // 0xc (0x4)
	float MaxOffsetHorizontal; // 0x10 (0x4)
	float HeelLiftRatio; // 0x14 (0x4)
	enum EPelvisHeightMode PelvisHeightMode; // 0x18 (0x1)
	enum EActorMovementCompensationMode ActorMovementCompensationMode; // 0x19 (0x1)
	bool bEnableInterpolation; // 0x1a (0x1)
	unsigned char padding_1b[0x1]; // 0x1b (0x1)
};

