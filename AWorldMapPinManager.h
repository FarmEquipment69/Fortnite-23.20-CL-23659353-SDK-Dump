// Class /Script/FortniteGame.WorldMapPinManager
// Size: 0x2a8
class AWorldMapPinManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class AFortStaticMeshActor* WorldMapMesh; // 0x290 (0x8)
	struct TArray<class AWorldMapPin*> CurrentPins; // 0x298 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.WorldMapPinManager.CreateWorldMapPin (Has no native function)
	class AWorldMapPin* CreateWorldMapPin(struct FString& TheaterId); // (Event | Protected | BlueprintEvent)
};

