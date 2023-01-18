// Class /Script/FortniteGame.FortFXStaticMeshComponent
// Size: 0x620
class UFortFXStaticMeshComponent : public UStaticMeshComponent
{
	float AwakenFadeInTime; // 0x600 (0x4)
	float AwakenDuration; // 0x604 (0x4)
	float AwakenFadeOutTime; // 0x608 (0x4)
	float BuildingHitFadeInTime; // 0x60c (0x4)
	float BuildingHitDuration; // 0x610 (0x4)
	float BuildingHitFadeOutTime; // 0x614 (0x4)
	class UStaticMeshComponent* SourceMeshComponent; // 0x618 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortFXStaticMeshComponent.SetSource (Underlying native function: SetSource 0x88655a0)
	void SetSource(class UStaticMeshComponent*& InMeshComponent); // (Final | Native | Public | BlueprintCallable)
};

