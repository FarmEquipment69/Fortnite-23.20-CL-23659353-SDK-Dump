// Class /Script/FortniteGame.FortItemPreviewOffPawnActor
// Size: 0x3f8
class AFortItemPreviewOffPawnActor : public AFortItemPreviewSingleAngleActor
{
	class UChildActorComponent* PreviewActorComponent; // 0x3c0 (0x8)
	class AActor* ChildPreviewActor; // 0x3c8 (0x8)
	class UStaticMeshComponent* PreviewStaticMeshComponent; // 0x3d0 (0x8)
	class USkeletalMeshComponent* PreviewSkelMeshComponent; // 0x3d8 (0x8)
	class UFortItemDefinition* ContentOnDemandItemDefinition; // 0x3e0 (0x8)
	bool bUseItemDefConfiguredLocation; // 0x3e8 (0x1)
	unsigned char unreflected_3e9[0x7]; // 0x3e9 (0x7) 
	class UFortGliderSpawnComponent* GliderSpawnComponent; // 0x3f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortItemPreviewOffPawnActor.GetPreviewIcon (Underlying native function: GetPreviewIcon 0x8a07118)
	struct TWeakObjectPtr<class UTexture2D> GetPreviewIcon(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

