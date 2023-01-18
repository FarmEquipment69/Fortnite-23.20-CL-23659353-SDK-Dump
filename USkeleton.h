// Class /Script/Engine.Skeleton
// Size: 0x430
class USkeleton : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct TArray<struct FBoneNode> BoneTree; // 0x38 (0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x48 (0x10)
	unsigned char unreflected_58[0x118]; // 0x58 (0x118) 
	struct FGuid VirtualBoneGuid; // 0x170 (0x10)
	struct TArray<struct FVirtualBone> VirtualBones; // 0x180 (0x10)
	struct TArray<struct TWeakObjectPtr<class USkeleton>> CompatibleSkeletons; // 0x190 (0x10)
	struct TArray<class USkeletalMeshSocket*> Sockets; // 0x1a0 (0x10)
	unsigned char unreflected_1b0[0x50]; // 0x1b0 (0x50) 
	struct FSmartNameContainer SmartNames; // 0x200 (0x50)
	unsigned char unreflected_250[0x30]; // 0x250 (0x30) 
	struct TArray<class UBlendProfile*> BlendProfiles; // 0x280 (0x10)
	struct TArray<struct FAnimSlotGroup> SlotGroups; // 0x290 (0x10)
	unsigned char unreflected_2a0[0x180]; // 0x2a0 (0x180) 
	struct TArray<class UAssetUserData*> AssetUserData; // 0x420 (0x10)

	/* Functions */

	// Function /Script/Engine.Skeleton.GetBlendProfile (Underlying native function: GetBlendProfile 0x9c7d50c)
	class UBlendProfile* GetBlendProfile(struct FName& InProfileName); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.Skeleton.AddCompatibleSkeleton (Underlying native function: AddCompatibleSkeleton 0x9c7d438)
	void AddCompatibleSkeleton(class USkeleton*& SourceSkeleton); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

