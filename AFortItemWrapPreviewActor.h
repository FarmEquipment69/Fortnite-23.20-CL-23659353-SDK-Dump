// Class /Script/FortniteGame.FortItemWrapPreviewActor
// Size: 0x410
class AFortItemWrapPreviewActor : public AActor
{
	unsigned char unreflected_288[0x28]; // 0x288 (0x28) 
	struct FItemWrapPreviewEntry CurrentEntryInfo; // 0x2b0 (0x140)
	unsigned char unreflected_3f0[0x10]; // 0x3f0 (0x10) 
	class UAthenaItemWrapDefinition* MyWrap; // 0x400 (0x8)
	class ACustomItemWrapModifier* ItemWrapModifier; // 0x408 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortItemWrapPreviewActor.StartLoadingNextPreviewActor (Underlying native function: StartLoadingNextPreviewActor 0x8847274)
	void StartLoadingNextPreviewActor(int& SlotIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemWrapPreviewActor.PreviewItemWrap (Has no native function)
	void PreviewItemWrap(class UAthenaItemWrapDefinition*& ItemWrap); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortItemWrapPreviewActor.OnPreviewSkeletalMeshLoaded (Has no native function)
	void OnPreviewSkeletalMeshLoaded(class USkeletalMesh*& LoadedMesh, class UAnimationAsset*& LoadedAnimationAsset, class UClass*& LoadedAnimInstanceClass, struct FItemWrapPreviewEntry& EntryInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortItemWrapPreviewActor.ApplyWrapToSkelMesh (Underlying native function: ApplyWrapToSkelMesh 0x8841ed4)
	void ApplyWrapToSkelMesh(class USkeletalMeshComponent*& MeshComp); // (Final | Native | Protected | BlueprintCallable)
};

