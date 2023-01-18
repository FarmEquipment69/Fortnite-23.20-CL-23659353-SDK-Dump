// ScriptStruct /Script/FortniteGame.RootMotionSource_FollowCharacterRotation
// Size: 0x110
struct FRootMotionSource_FollowCharacterRotation : FRootMotionSource_ConstantForce
{
	float ConstantStrength; // 0xfc (0x4)
	bool bWasWalkingLastFrame; // 0x100 (0x1)
	bool bWasFallingLastFrame; // 0x101 (0x1)
	unsigned char unreflected_102[0x2]; // 0x102 (0x2) 
	float WalkingAccumulatedTime; // 0x104 (0x4)
	float FallingAccumulatedTime; // 0x108 (0x4)
	unsigned char padding_10c[0x4]; // 0x10c (0x4)
};

