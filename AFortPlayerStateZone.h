// Class /Script/FortniteGame.FortPlayerStateZone
// Size: 0xf58
class AFortPlayerStateZone : public AFortPlayerState
{
	struct FMulticastInlineDelegate OnCurrentPawnChanged; // 0xb68 (0x10)
	unsigned char unreflected_b78[0x18]; // 0xb78 (0x18) 
	struct TWeakObjectPtr<class AFortPlayerStateZone> SpectatingTarget; // 0xb90 (0x8)
	struct FFortSpectatorZoneArray Spectators; // 0xb98 (0x120)
	unsigned char unreflected_cb8[0x10]; // 0xcb8 (0x10) 
	struct FMulticastInlineDelegate OnSpectatorsRemovedEvent; // 0xcc8 (0x10)
	struct FMulticastInlineDelegate OnSpectatorCountChangedEvent; // 0xcd8 (0x10)
	struct FMulticastInlineDelegate OnSpectatingTargetChangedEvent; // 0xce8 (0x10)
	struct FMulticastInlineDelegate OnBeginSpectatingEvent; // 0xcf8 (0x10)
	unsigned char unreflected_d08[0x18]; // 0xd08 (0x18) 
	enum EFortKickReason KickedFromSessionReason; // 0xd20 (0x1)
	unsigned char unreflected_d21[0x3]; // 0xd21 (0x3) 
	struct FReplicatedStatValues* RSZoneOld[0x23]; // 0xd24 (0x8) (ARRAY) 
	unsigned char unreflected_e3c[0x4]; // 0xe3c (0x4) 
	class AFortCarriedObject* CarriedObject; // 0xe40 (0x8)
	int NumRejoins; // 0xe48 (0x4)
	int OldTotalScoreStat; // 0xe4c (0x4)
	unsigned char unreflected_e50[0x18]; // 0xe50 (0x18) 
	bool bInvincibleDueToUI; // 0xe68 (0x1)
	unsigned char unreflected_e69[0x3]; // 0xe69 (0x3) 
	float CurrentHealth; // 0xe6c (0x4)
	float MaxHealth; // 0xe70 (0x4)
	float CurrentShield; // 0xe74 (0x4)
	float MaxShield; // 0xe78 (0x4)
	float CurrentOvershield; // 0xe7c (0x4)
	float MaxOvershield; // 0xe80 (0x4)
	float CurrentSignalInStorm; // 0xe84 (0x4)
	float MaxSignalInStorm; // 0xe88 (0x4)
	bool bOvershieldBarVisible; // 0xe8c (0x1)
	unsigned char unreflected_e8d[0x3]; // 0xe8d (0x3) 
	struct FMulticastInlineDelegate OnOvershieldVisibilityChanged; // 0xe90 (0x10)
	unsigned char unreflected_ea0[0x8]; // 0xea0 (0x8) 
	struct TArray<struct FAccumulatedItemEntry> AccumulatedItems; // 0xea8 (0x10)
	struct FMulticastInlineDelegate OnAccumulatedItemsChanged; // 0xeb8 (0x10)
	struct TArray<struct FSimulatedAttributeEntry> SimulatedAttributes; // 0xec8 (0x10)
	unsigned char unreflected_ed8[0x8]; // 0xed8 (0x8) 
	class UFortGadgetItemDefinition* PendingDestroyedGadgetItemDefinition; // 0xee0 (0x8)
	unsigned char bInAircraft; // 0xee8 (0x1)
	unsigned char bHasEverSkydivedFromBus; // 0xee8 (0x1)
	unsigned char bHasEverSkydivedFromBusAndLanded; // 0xee8 (0x1)
	unsigned char unreflected_ee9[0x7]; // 0xee9 (0x7) 
	struct TArray<class UFortItemDefinition*> QuickbarEquippedItems; // 0xef0 (0x10)
	unsigned char padding_f00[0x58]; // 0xf00 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateZone.ShouldOvershieldBarBeVisible (Underlying native function: ShouldOvershieldBarBeVisible 0x8ddf344)
	bool ShouldOvershieldBarBeVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.SetOvershieldBarVisible (Underlying native function: SetOvershieldBarVisible 0x8ddf240)
	void SetOvershieldBarVisible(bool& NewVisible); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateZone.ServerSetInAircraft (Underlying native function: ServerSetInAircraft 0x8ddf0bc)
	void ServerSetInAircraft(bool& bNewInAircraft); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_SpectatingTarget (Underlying native function: OnRep_SpectatingTarget 0x8ddee04)
	void OnRepSpectatingTarget(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_QuickbarEquippedItems (Underlying native function: OnRep_QuickbarEquippedItems 0x2da04ac)
	void OnRepQuickbarEquippedItems(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_OvershieldBarVisisble (Underlying native function: OnRep_OvershieldBarVisisble 0x8dded3c)
	void OnRepOvershieldBarVisisble(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_NumRejoins (Underlying native function: OnRep_NumRejoins 0x8dded28)
	void OnRepNumRejoins(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateZone.OnRep_AccumulatedItems (Underlying native function: OnRep_AccumulatedItems 0x8ddeb54)
	void OnRepAccumulatedItems(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.MulticastTriggerOnGadgetTrackedAttributeDestroyedFX (Underlying native function: MulticastTriggerOnGadgetTrackedAttributeDestroyedFX 0x8dde2d0)
	void MulticastTriggerOnGadgetTrackedAttributeDestroyedFX(class UFortGadgetItemDefinition*& GadgetItemDefinition); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerStateZone.IsPlayerDead (Underlying native function: IsPlayerDead 0x2345d00)
	bool IsPlayerDead(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.HasEverSkydivedFromBusAndLanded (Underlying native function: HasEverSkydivedFromBusAndLanded 0x8dde254)
	bool HasEverSkydivedFromBusAndLanded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.HasEverSkydivedFromBus (Underlying native function: HasEverSkydivedFromBus 0x8dde238)
	bool HasEverSkydivedFromBus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetSpectatorCount (Underlying native function: GetSpectatorCount 0x8dde1c0)
	int GetSpectatorCount(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetSimulatedAttributeValue (Underlying native function: GetSimulatedAttributeValue 0x8dde08c)
	float GetSimulatedAttributeValue(struct FGameplayAttribute& Attribute, float& DefaultValue); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetPlayerNameForStreaming (Underlying native function: GetPlayerNameForStreaming 0x8dddfe8)
	struct FString GetPlayerNameForStreaming(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetOvershields (Underlying native function: GetOvershields 0x8ddde44)
	void GetOvershields(float& Overshield, float& OvershieldMax); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetNumOfAccumulatedItem (Underlying native function: GetNumOfAccumulatedItem 0x8ddddb4)
	int GetNumOfAccumulatedItem(class UFortWorldItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetNumOfAccumulatedBluGlo (Underlying native function: GetNumOfAccumulatedBluGlo 0x8dddd90)
	int GetNumOfAccumulatedBluGlo(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateZone.GetHealthAndShields (Underlying native function: GetHealthAndShields 0x8dddbec)
	void GetHealthAndShields(float& Health, float& HealthMax, float& Shield, float& ShieldMax); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

