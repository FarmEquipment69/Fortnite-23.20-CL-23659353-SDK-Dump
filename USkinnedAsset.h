// Class /Script/Engine.SkinnedAsset
// Size: 0xd8
class USkinnedAsset : public UStreamableRenderAsset
{
	unsigned char unreflected_d8[0xd8]; 

	/* Functions */

	// Function /Script/Engine.SkinnedAsset.FindSocketInfo (Underlying native function: FindSocketInfo 0x9f74b54)
	class USkeletalMeshSocket* FindSocketInfo(struct FName& InSocketName, struct FTransform& OutTransform, int& OutBoneIndex, int& OutIndex); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkinnedAsset.FindSocket (Underlying native function: FindSocket 0x9f74ac0)
	class USkeletalMeshSocket* FindSocket(struct FName& InSocketName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

