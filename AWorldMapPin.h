// Class /Script/FortniteGame.WorldMapPin
// Size: 0x2a0
class AWorldMapPin : public AActor
{
	class USceneComponent* SceneComponent; // 0x288 (0x8)
	struct FString TheaterId; // 0x290 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.WorldMapPin.SetTheaterId (Underlying native function: SetTheaterId 0x8a08ac0)
	void SetTheaterId(struct FString& NewID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.WorldMapPin.OnTheaterIdSet (Has no native function)
	void OnTheaterIdSet(); // (Event | Public | BlueprintEvent)
};

