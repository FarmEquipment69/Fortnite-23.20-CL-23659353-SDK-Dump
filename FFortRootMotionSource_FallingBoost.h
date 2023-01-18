// ScriptStruct /Script/FortniteGame.FortRootMotionSource_FallingBoost
// Size: 0x150
struct FFortRootMotionSource_FallingBoost : FRootMotionSource
{
	struct FVector StartLocation; // 0xd8 (0x18)
	struct FVector StartVelocity; // 0xf0 (0x18)
	struct FVector LastDesiredVelocity; // 0x108 (0x18)
	float VerticalImpulse; // 0x120 (0x4)
	float GravityScalar; // 0x124 (0x4)
	float MaxAcceleration; // 0x128 (0x4)
	float LateralFriction; // 0x12c (0x4)
	float MaxLateralSpeed; // 0x130 (0x4)
	bool bHasAppliedVerticalImpulse; // 0x134 (0x1)
	unsigned char unreflected_135[0x3]; // 0x135 (0x3) 
	struct FVector LatestRepMovementLocation; // 0x138 (0x18)
};

