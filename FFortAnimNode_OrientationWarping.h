// ScriptStruct /Script/FortniteGame.FortAnimNode_OrientationWarping
// Size: 0x130
struct FFortAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase
{
	float LocomotionAngle; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct FFortOrientationWarpingSettings Settings; // 0xd0 (0x38)
	struct TArray<struct FFortOrientationWarpingSpineBoneData*> SpineBoneDataArray; // 0x108 (0x10)
	unsigned char unreflected_118[0x14]; // 0x118 (0x14) 
	float CachedDeltaTime; // 0x12c (0x4)
};

