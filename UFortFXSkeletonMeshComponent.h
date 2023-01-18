// Class /Script/FortniteGame.FortFXSkeletonMeshComponent
// Size: 0xfb0
class UFortFXSkeletonMeshComponent : public USkeletalMeshComponent
{
	float AwakenFadeInTime; // 0xf90 (0x4)
	float AwakenDuration; // 0xf94 (0x4)
	float AwakenFadeOutTime; // 0xf98 (0x4)
	float BuildingHitFadeInTime; // 0xf9c (0x4)
	float BuildingHitDuration; // 0xfa0 (0x4)
	float BuildingHitFadeOutTime; // 0xfa4 (0x4)
	class USkeletalMeshComponent* SourceMeshComponent; // 0xfa8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortFXSkeletonMeshComponent.SetSource (Underlying native function: SetSource 0x88654ac)
	void SetSource(class USkeletalMeshComponent*& InMeshComponent); // (Final | Native | Public | BlueprintCallable)
};

