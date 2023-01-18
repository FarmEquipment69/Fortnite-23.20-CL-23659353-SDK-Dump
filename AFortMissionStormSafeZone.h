// Class /Script/FortniteGame.FortMissionStormSafeZone
// Size: 0x2d8
class AFortMissionStormSafeZone : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UStaticMeshComponent* SafeZoneMesh; // 0x290 (0x8)
	bool bScaleUniformly; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	struct FMulticastInlineDelegate OnSafeZoneInStormStateChanged; // 0x2a0 (0x10)
	struct TArray<class UClass*> Abilities; // 0x2b0 (0x10)
	bool bSafeZoneInStormStateChanged; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x3]; // 0x2c1 (0x3) 
	float SafeZoneRadius; // 0x2c4 (0x4)
	unsigned char unreflected_2c8[0x8]; // 0x2c8 (0x8) 
	class UAbilitySystemComponent* AbilityComponent; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionStormSafeZone.SetSafeZoneRadius (Underlying native function: SetSafeZoneRadius 0x71a7128)
	void SetSafeZoneRadius(float& InRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionStormSafeZone.OnSafeZoneRadiusChanged (Has no native function)
	void OnSafeZoneRadiusChanged(float& NewRadius, float& NewConvertedRadius); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMissionStormSafeZone.OnRep_ZoneRadius (Underlying native function: OnRep_ZoneRadius 0x8b2dad8)
	void OnRepZoneRadius(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionStormSafeZone.OnRep_SafeZoneInStormStateChanged (Underlying native function: OnRep_SafeZoneInStormStateChanged 0x8b2daa4)
	void OnRepSafeZoneInStormStateChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMissionStormSafeZone.OnPlayerPlacedBuildingActorInRadius (Has no native function)
	void OnPlayerPlacedBuildingActorInRadius(class ABuildingActor*& BuildingPlaced, class AFortPlayerPawn*& ByPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMissionStormSafeZone.GetSafeZoneRadius (Underlying native function: GetSafeZoneRadius 0x8b2b800)
	float GetSafeZoneRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMissionStormSafeZone.GetConvertedSafeZoneRadius (Underlying native function: GetConvertedSafeZoneRadius 0x8b2ada8)
	float GetConvertedSafeZoneRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

