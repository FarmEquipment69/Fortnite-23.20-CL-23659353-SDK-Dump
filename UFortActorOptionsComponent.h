// Class /Script/FortniteGame.FortActorOptionsComponent
// Size: 0x210
class UFortActorOptionsComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x28]; // 0xa0 (0x28) 
	struct FText InternalOptionsDisplayName; // 0xc8 (0x18)
	struct FText InternalOptionsDescription; // 0xe0 (0x18)
	struct FText InternalInteractionText; // 0xf8 (0x18)
	struct FCurveTableRowHandle InternalInteractionSpeed; // 0x110 (0x10)
	class UPlaylistUserOptions* InternalPlayerOptions; // 0x120 (0x8)
	struct FPropertyOverrideData PlayerOptionData; // 0x128 (0x50)
	struct FMulticastInlineDelegate OnAnyPropertyChanged; // 0x178 (0x10)
	struct FMulticastInlineDelegate OnPropertiesLoaded; // 0x188 (0x10)
	struct FMulticastInlineDelegate OnPreAnyPropertyChanged; // 0x198 (0x10)
	struct FMulticastInlineDelegate OnPropertiesReadyForLocalization; // 0x1a8 (0x10)
	struct FMulticastInlineDelegate OnRestoreDefaults; // 0x1b8 (0x10)
	bool bRedirectInteractToParent; // 0x1c8 (0x1)
	unsigned char padding_1c9[0x47]; // 0x1c9 (0x47)

	/* Functions */

	// Function /Script/FortniteGame.FortActorOptionsComponent.TryToLocalizeStrings (Underlying native function: TryToLocalizeStrings 0x887eb84)
	void TryToLocalizeStrings(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortActorOptionsComponent.SetPropertyOverrideValues (Underlying native function: SetPropertyOverrideValues 0x887e6b8)
	bool SetPropertyOverrideValues(struct TMap<struct FString, struct FString>& NewOptions); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorOptionsComponent.SetPropertyOverrides (Underlying native function: SetPropertyOverrides 0x887e6b8)
	bool SetPropertyOverrides(struct TMap<struct FString, struct FString>& NewOptions); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorOptionsComponent.ResolvePendingRepOverrides (Underlying native function: ResolvePendingRepOverrides 0x887e6a4)
	void ResolvePendingRepOverrides(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortActorOptionsComponent.RemovePropertyOverrides (Underlying native function: RemovePropertyOverrides 0x887e52c)
	void RemovePropertyOverrides(struct TArray<struct FString>& Options); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorOptionsComponent.RefreshPropertyOverrides (Underlying native function: RefreshPropertyOverrides 0x887e518)
	void RefreshPropertyOverrides(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorOptionsComponent.OnRep_PlayerOptionData (Underlying native function: OnRep_PlayerOptionData 0x887e504)
	void OnRepPlayerOptionData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortActorOptionsComponent.OnLocalInteract (Underlying native function: OnLocalInteract 0x887e474)
	bool OnLocalInteract(class AFortPlayerPawn*& InteractingPawn); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorOptionsComponent.K2_GetPlayerOptions (Underlying native function: K2_GetPlayerOptions 0x887dff0)
	class UPlaylistUserOptions* K2GetPlayerOptions(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorOptionsComponent.K2_GetOptionsDisplayName (Underlying native function: K2_GetOptionsDisplayName 0x887df64)
	struct FText K2GetOptionsDisplayName(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorOptionsComponent.K2_GetOptionsDescription (Underlying native function: K2_GetOptionsDescription 0x887ded8)
	struct FText K2GetOptionsDescription(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorOptionsComponent.K2_GetInteractionText (Underlying native function: K2_GetInteractionText 0x887de4c)
	struct FText K2GetInteractionText(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorOptionsComponent.K2_GetInteractionSpeed (Underlying native function: K2_GetInteractionSpeed 0x887de14)
	struct FCurveTableRowHandle K2GetInteractionSpeed(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorOptionsComponent.HandlePlaylistLoadedForLocalization (Underlying native function: HandlePlaylistLoadedForLocalization 0x887d668)
	void HandlePlaylistLoadedForLocalization(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortActorOptionsComponent.GetPropertyOverrides (Underlying native function: GetPropertyOverrides 0x887d13c)
	bool GetPropertyOverrides(struct TMap<struct FString, struct FString>& CurrentOptions); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorOptionsComponent.CanEditOptionsComponent (Underlying native function: CanEditOptionsComponent 0x887c6d4)
	bool CanEditOptionsComponent(class AFortPawn*& InteractingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortActorOptionsComponent.BlueprintOnLocalInteract (Has no native function)
	bool BlueprintOnLocalInteract(class AFortPlayerPawn*& InteractingPawn); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortActorOptionsComponent.BlueprintGetInteractionTime (Underlying native function: BlueprintGetInteractionTime 0x887b6d8)
	bool BlueprintGetInteractionTime(class AFortPawn*& InteractingPawn, float& OutInteractionTime); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)
};

