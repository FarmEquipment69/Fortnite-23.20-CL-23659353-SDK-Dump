// Class /Script/FortniteAI.AthenaCreativeRift
// Size: 0xc80
class AAthenaCreativeRift : public ABuildingRift
{
	class USphereComponent* DespawnSphereComponent; // 0xb88 (0x8)
	class ABuildingProp_AISpawner* ParentTrap; // 0xb90 (0x8)
	struct FFortEncounterSettings OverrideEncounterSettings; // 0xb98 (0xc0)
	bool bHasLoadedSettings; // 0xc58 (0x1)
	unsigned char unreflected_c59[0x7]; // 0xc59 (0x7) 
	struct TArray<class AFortPlayerPawn*> DespawnPlayerOverlaps; // 0xc60 (0x10)
	unsigned char unreflected_c70[0x8]; // 0xc70 (0x8) 
	class UFortAIManagerMinigameComponent* CachedAIMinigamecomponent; // 0xc78 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.AthenaCreativeRift.NotifyActorDespawnEndOverlap (Underlying native function: NotifyActorDespawnEndOverlap 0xa234340)
	void NotifyActorDespawnEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteAI.AthenaCreativeRift.BlueprintShowRift (Has no native function)
	void BlueprintShowRift(); // (0x00000002 | Event | Public | BlueprintEvent)
};

