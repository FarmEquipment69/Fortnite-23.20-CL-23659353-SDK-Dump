// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
// Size: 0x28
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations (Underlying native function: StreamOutAllBuildingFoundations 0x76c8060)
	static void StreamOutAllBuildingFoundations(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen (Underlying native function: SetNextLoadingScreen 0x76c7620)
	static void SetNextLoadingScreen(class UObject*& WorldContextObject, class UAthenaLoadingScreenItemDefinition*& LoadingScreenDefinition, bool& bCanShowLoadingBar); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies (Underlying native function: SetLODOnLandscapProxies 0x76c72b8)
	static void SetLODOnLandscapProxies(class UObject*& WorldContextObject, bool& bForced, int& InLODValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy (Underlying native function: HideSkydivingShadowProxy 0x76c3914)
	static void HideSkydivingShadowProxy(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript (Underlying native function: GetSpecialEventScript 0x76c3184)
	static class ASpecialEventScript* GetSpecialEventScript(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName (Underlying native function: GetSpecialEventPlayerDisplayName 0x76c3084)
	static struct FString GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena*& LocalController, class AFortPlayerStateAthena*& PlayerState); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator (Underlying native function: GetSpecialEventMutator 0x76c3004)
	static class AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetLocalPlayerLoadout (Underlying native function: GetLocalPlayerLoadout 0x76c2c18)
	static struct FFortAthenaLoadout GetLocalPlayerLoadout(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase (Underlying native function: GetHasInfiniteSafeZonePhase 0x76c2978)
	static bool GetHasInfiniteSafeZonePhase(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass (Underlying native function: ForceUpdateGrass 0x76c1e78)
	static void ForceUpdateGrass(class UObject*& WorldContextObject, struct FVector& Location); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents (Underlying native function: ForceDestroyComponents 0x76c1a6c)
	static void ForceDestroyComponents(struct TArray<class UActorComponent*>& Components, bool& bPromoteChildren, struct FString& LogContext); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent (Underlying native function: FindSpecialEventComponent 0x76c19b0)
	static class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent (Underlying native function: FindGameplayCinematicComponent 0x76c17e8)
	static class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class AController*& Controller); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent (Underlying native function: DetachPawnFromComponent 0x76c1174)
	static bool DetachPawnFromComponent(class AFortPawn*& Pawn, class USceneComponent*& Component, enum EDetachmentRule& LocationRule, enum EDetachmentRule& RotationRule, enum EDetachmentRule& ScaleRule); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn (Underlying native function: DetachPawn 0x76c103c)
	static bool DetachPawn(class AFortPawn*& Pawn, enum EDetachmentRule& LocationRule, enum EDetachmentRule& RotationRule, enum EDetachmentRule& ScaleRule); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker (Underlying native function: CreateSpecialEventPlayerEliminationWorldMarker 0x76c0da4)
	static void CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena*& LocalController, class AFortPlayerStateAthena*& VictimPlayerState, struct FVector& DeathLocation); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent (Underlying native function: AttachPawnToComponent 0x76c030c)
	static bool AttachPawnToComponent(class AFortPawn*& Pawn, class USceneComponent*& Component, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination (Underlying native function: AddSpecialEventRecentElimination 0x76bff20)
	static void AddSpecialEventRecentElimination(struct FVector& Location, class AFortPlayerStateAthena*& PlayerState); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry (Underlying native function: AddSpecialEventKillFeedEntry 0x76bfc88)
	static void AddSpecialEventKillFeedEntry(class UObject*& WorldContextObject, class AFortPlayerStateAthena*& VictimPlayerState, class AFortPlayerStateAthena*& KillerPlayerState, struct FText& NonPlayerVictimName, struct FText& NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum EDeathCauseReason& DeathCauseReason, float& Distance); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)
};

