// Class /Script/FortniteGame.FortCheatManagerAthena
// Size: 0x28
class UFortCheatManagerAthena : public UChildCheatManager
{

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetStormFXStage (Underlying native function: SetStormFXStage 0x7239740)
	void SetStormFXStage(int& NewStormStage); // (Final | BlueprintCosmetic | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetSafeZoneWaitTime (Underlying native function: SetSafeZoneWaitTime 0x71a7128)
	void SetSafeZoneWaitTime(float& NewWaitTime); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetSafeZoneShrinkTime (Underlying native function: SetSafeZoneShrinkTime 0x71a7128)
	void SetSafeZoneShrinkTime(float& NewShrinkTime); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetSafeZoneRadius (Underlying native function: SetSafeZoneRadius 0x71a7128)
	void SetSafeZoneRadius(float& NewRadius); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetSafeZonePhase (Underlying native function: SetSafeZonePhase 0x7239740)
	void SetSafeZonePhase(int& NewPhaseIndex); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetSafeZoneLocationToPlayer (Underlying native function: SetSafeZoneLocationToPlayer 0x26daa0c)
	void SetSafeZoneLocationToPlayer(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetSafeZoneLocationToMarker (Underlying native function: SetSafeZoneLocationToMarker 0x26daa0c)
	void SetSafeZoneLocationToMarker(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.SetAlwaysShowContrails (Underlying native function: SetAlwaysShowContrails 0x71a6cc4)
	void SetAlwaysShowContrails(bool& bEnabled); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.RevealNearbyItemOrigins (Underlying native function: RevealNearbyItemOrigins 0x71a7128)
	void RevealNearbyItemOrigins(float& RevealRadius); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.RemoveAllRebootVans (Underlying native function: RemoveAllRebootVans 0x26daa0c)
	void RemoveAllRebootVans(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.McpSetOwnedCosmetics (Underlying native function: McpSetOwnedCosmetics 0x7291288)
	void McpSetOwnedCosmetics(struct FString& VersionString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.GiveCreativeItem (Underlying native function: GiveCreativeItem 0x832e298)
	void GiveCreativeItem(struct FString& DevicePath, int& SlotIndex); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.ForceDynamicStormCirclePlayerCount (Underlying native function: ForceDynamicStormCirclePlayerCount 0x7239740)
	void ForceDynamicStormCirclePlayerCount(int& Count); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.DumpAllOwnedTagsForActor (Underlying native function: DumpAllOwnedTagsForActor 0x26daa0c)
	void DumpAllOwnedTagsForActor(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.DumpAllOwnedTags (Underlying native function: DumpAllOwnedTags 0x26daa0c)
	void DumpAllOwnedTags(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.DumpAllGameplayAbilitiesForActor (Underlying native function: DumpAllGameplayAbilitiesForActor 0x832da08)
	void DumpAllGameplayAbilitiesForActor(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.DisplayDebugStormInfo (Underlying native function: DisplayDebugStormInfo 0x71a6cc4)
	void DisplayDebugStormInfo(bool& bShouldDisplay); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.ContentGatingSetRating (Underlying native function: ContentGatingSetRating 0x72ab98c)
	void ContentGatingSetRating(enum EFortContentRating& Rating); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.ContentGatingRemoveUnlock (Underlying native function: ContentGatingRemoveUnlock 0x7291448)
	void ContentGatingRemoveUnlock(struct FString& category, struct FString& Subcategory); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerAthena.ContentGatingAddUnlock (Underlying native function: ContentGatingAddUnlock 0x7291448)
	void ContentGatingAddUnlock(struct FString& category, struct FString& Subcategory); // (Final | Exec | Native | Public)
};

