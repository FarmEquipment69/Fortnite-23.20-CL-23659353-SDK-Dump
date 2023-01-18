// Class /Script/Engine.AnimationAsset
// Size: 0x80
class UAnimationAsset : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class USkeleton* Skeleton; // 0x38 (0x8)
	unsigned char unreflected_40[0x20]; // 0x40 (0x20) 
	struct TArray<class UAnimMetaData*> MetaData; // 0x60 (0x10)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x70 (0x10)

	/* Functions */

	// Function /Script/Engine.AnimationAsset.GetPlayLength (Underlying native function: GetPlayLength 0x281f720)
	float GetPlayLength(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

