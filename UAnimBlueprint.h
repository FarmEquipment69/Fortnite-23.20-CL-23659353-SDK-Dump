// Class /Script/Engine.AnimBlueprint
// Size: 0xd0
class UAnimBlueprint : public UBlueprint
{
	unsigned char unreflected_a8[0x8]; // 0xa8 (0x8) 
	class USkeleton* TargetSkeleton; // 0xb0 (0x8)
	struct TArray<struct FAnimGroupInfo> Groups; // 0xb8 (0x10)
	bool bIsTemplate; // 0xc8 (0x1)
	bool bUseMultiThreadedAnimationUpdate; // 0xc9 (0x1)
	bool bWarnAboutBlueprintUsage; // 0xca (0x1)
	unsigned char bEnableLinkedAnimLayerInstanceSharing; // 0xcb (0x1)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)
};

