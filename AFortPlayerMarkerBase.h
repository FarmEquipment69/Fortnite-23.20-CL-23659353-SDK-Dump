// Class /Script/FortniteGame.FortPlayerMarkerBase
// Size: 0x4e0
class AFortPlayerMarkerBase : public AActor
{
	struct FVector ImpactLocation; // 0x288 (0x18)
	struct FLinearColor Color; // 0x2a0 (0x10)
	class UMaterialInstanceDynamic* MIDMain; // 0x2b0 (0x8)
	class UMaterialInstanceDynamic* MIDTarget; // 0x2b8 (0x8)
	class UAthenaMapMarkerItemDefinition* CustomMarkerItemDefinition; // 0x2c0 (0x8)
	float SpawnMarkerAnimLength; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	class UCurveFloat* SpawnMarkerAnimOpacity; // 0x2d0 (0x8)
	class UCurveFloat* SpawnMarkerAnimSpawnScale; // 0x2d8 (0x8)
	class UCurveFloat* SpawnMarkerAnimSpawnVerticalScale; // 0x2e0 (0x8)
	unsigned char unreflected_2e8[0x90]; // 0x2e8 (0x90) 
	struct FFortWorldMarkerData CurrentMarkerData; // 0x378 (0x160)
	class UStaticMeshComponent* StaticMeshComponent; // 0x4d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerMarkerBase.StartSpawnMarkerAnim (Underlying native function: StartSpawnMarkerAnim 0x83fd8a4)
	void StartSpawnMarkerAnim(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.SpawnMarkerAnimTimelineProgress_SpawnVerticalScale (Underlying native function: SpawnMarkerAnimTimelineProgress_SpawnVerticalScale 0x83fd7a0)
	void SpawnMarkerAnimTimelineProgressSpawnVerticalScale(float& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.SpawnMarkerAnimTimelineProgress_SpawnScale (Underlying native function: SpawnMarkerAnimTimelineProgress_SpawnScale 0x83fd71c)
	void SpawnMarkerAnimTimelineProgressSpawnScale(float& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.SpawnMarkerAnimTimelineProgress_Opacity (Underlying native function: SpawnMarkerAnimTimelineProgress_Opacity 0x83fd698)
	void SpawnMarkerAnimTimelineProgressOpacity(float& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.OnSetupMarker (Has no native function)
	void OnSetupMarker(struct FFortWorldMarkerData& MarkerData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.OnPlayMarkerSound (Has no native function)
	void OnPlayMarkerSound(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.OnMarkerPlaced (Has no native function)
	void OnMarkerPlaced(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.OnMarkerHidden (Has no native function)
	void OnMarkerHidden(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerMarkerBase.OnMarkerColorChanged (Has no native function)
	void OnMarkerColorChanged(struct FLinearColor& InColor); // (Event | Protected | HasDefaults | BlueprintEvent)
};

