// Class /Script/FortniteAI.AthenaAIServiceZoneManager
// Size: 0x88
class UAthenaAIServiceZoneManager : public UAthenaAIService
{
	struct TArray<struct FAthenaAITrackedZone> TrackedZones; // 0x78 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.UnregisterOccluder (Underlying native function: UnregisterOccluder 0xa3ea130)
	void UnregisterOccluder(class AActor*& OccluderActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.UnregisterDangerZone (Underlying native function: UnregisterDangerZone 0xa3e9fd8)
	void UnregisterDangerZone(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.RegisterOccluder (Underlying native function: RegisterOccluder 0xa3e9c00)
	void RegisterOccluder(class AActor*& OccluderActor, float& SphereRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.RegisterDangerZone (Underlying native function: RegisterDangerZone 0xa3e9a34)
	void RegisterDangerZone(class AActor*& Actor, float& Radius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.OnZoneDestroyed (Underlying native function: OnZoneDestroyed 0xa3e9898)
	void OnZoneDestroyed(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Private | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.IsLOFOccluded (Underlying native function: IsLOFOccluded 0xa3e97a8)
	bool IsLOFOccluded(struct FVector& StartLocation, struct FVector& EndLocation); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.IsInDangerZone (Underlying native function: IsInDangerZone 0xa3e9714)
	bool IsInDangerZone(struct FVector& Location); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIServiceZoneManager.GetAthenaAIServiceZoneManager (Underlying native function: GetAthenaAIServiceZoneManager 0x285f9dc)
	static class UAthenaAIServiceZoneManager* GetAthenaAIServiceZoneManager(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

