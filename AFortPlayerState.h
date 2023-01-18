// Class /Script/FortniteGame.FortPlayerState
// Size: 0xb68
class AFortPlayerState : public AFGF_PlayerState
{
	unsigned char unreflected_3f8[0x20]; // 0x3f8 (0x20) 
	unsigned char bIsWorldDataOwner; // 0x418 (0x1)
	unsigned char bIsGameSessionOwner; // 0x418 (0x1)
	unsigned char bIsGameSessionAdmin; // 0x418 (0x1)
	unsigned char bIsReadyToContinue; // 0x418 (0x1)
	unsigned char bHasFinishedLoading; // 0x418 (0x1)
	unsigned char bHasStartedPlaying; // 0x418 (0x1)
	unsigned char bRepFlag1; // 0x418 (0x1)
	unsigned char unreflected_419[0x3]; // 0x419 (0x3) 
	enum EFortPlayerRole PlayerRole; // 0x41c (0x1)
	unsigned char unreflected_41d[0x1]; // 0x41d (0x1) 
	int16_t WorldPlayerId; // 0x41e (0x2)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x420 (0x30)
	struct FString HeroId; // 0x450 (0x10)
	class UFortHeroType* HeroType; // 0x460 (0x8)
	int CurrentCharXP; // 0x468 (0x4)
	struct TWeakObjectPtr<class AFortPickup> MyBackpackPickup; // 0x46c (0x8)
	int InitialExperienceLevel; // 0x474 (0x4)
	int InitialExperienceAmount; // 0x478 (0x4)
	unsigned char unreflected_47c[0x4]; // 0x47c (0x4) 
	struct TArray<struct FFortExperienceDelta> ExperienceDeltas; // 0x480 (0x10)
	struct FString Platform; // 0x490 (0x10)
	struct FPlayerBannerInfo Banner; // 0x4a0 (0x28)
	bool bIsSimulatingDamage; // 0x4c8 (0x1)
	unsigned char unreflected_4c9[0x117]; // 0x4c9 (0x117) 
	struct TEnumAsByte<EFortCustomGender> CharacterGender; // 0x5e0 (0x1)
	struct TEnumAsByte<EFortCustomBodyType> CharacterBodyType; // 0x5e1 (0x1)
	unsigned char unreflected_5e2[0x6]; // 0x5e2 (0x6) 
	struct FCustomCharacterData CharacterData; // 0x5e8 (0x78)
	class UCustomColorSwatch* CharacterColorSwatches[0x2]; // 0x660 (0x8) (ARRAY) 
	struct TEnumAsByte<EFortCustomGender> LocalCharacterGender; // 0x670 (0x1)
	struct TEnumAsByte<EFortCustomBodyType> LocalCharacterBodyType; // 0x671 (0x1)
	unsigned char unreflected_672[0x6]; // 0x672 (0x6) 
	class UCustomCharacterPart* LocalCharacterParts[0x7]; // 0x678 (0x8) (ARRAY) 
	class UAthenaCharmItemDefinition* LocalCharacterCharms[0x4]; // 0x6b0 (0x8) (ARRAY) 
	struct TArray<class UCustomCharacterPart*> LocalVariantPartsToLoad; // 0x6d0 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> ActiveVariantOverrides; // 0x6e0 (0x10)
	struct TArray<struct FFortAppliedSwapItemAndVariantData> ActiveCosmeticItemSwaps; // 0x6f0 (0x10)
	class UCustomColorSwatch* LocalCharacterColorSwatches[0x2]; // 0x700 (0x8) (ARRAY) 
	class UCustomPlayerComponent* CustomPRIComponent; // 0x710 (0x8)
	unsigned char unreflected_718[0x18]; // 0x718 (0x18) 
	class UCustomColorSwatch* CharacterPartColorSwatches[0x7]; // 0x730 (0x8) (ARRAY) 
	class UCustomColorSwatch* LocalCharacterPartColorSwatches[0x7]; // 0x768 (0x8) (ARRAY) 
	struct TWeakObjectPtr<class AFortTeamInfo> PlayerTeam; // 0x7a0 (0x8)
	struct TWeakObjectPtr<class AFortTeamPrivateInfo> PlayerTeamPrivate; // 0x7a8 (0x8)
	unsigned char unreflected_7b0[0x18]; // 0x7b0 (0x18) 
	bool bSkipReplicatedStats; // 0x7c8 (0x1)
	unsigned char unreflected_7c9[0x3]; // 0x7c9 (0x3) 
	struct FReplicatedStatValues* ReplicatedStatsCampaign[0x23]; // 0x7cc (0x8) (ARRAY) 
	struct FReplicatedStatValues* ReplicatedStatsZone[0x23]; // 0x8e4 (0x8) (ARRAY) 
	unsigned char unreflected_9fc[0x4]; // 0x9fc (0x4) 
	bool bAreZoneStatsFinalized; // 0xa00 (0x1)
	enum EReadyCheckState ReadyCheckState; // 0xa01 (0x1)
	unsigned char unreflected_a02[0x6]; // 0xa02 (0x6) 
	class AActor* HomeActor; // 0xa08 (0x8)
	struct FFortPlayerAttributeSets AttributeSets; // 0xa10 (0x50)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0xa60 (0x8)
	struct FName PlayerOSSName; // 0xa68 (0x4)
	enum ETrustedPlatformType TrustedPlatformType; // 0xa6c (0x1)
	unsigned char unreflected_a6d[0x3]; // 0xa6d (0x3) 
	struct FUniqueNetIdRepl PlatformUniqueNetId; // 0xa70 (0x30)
	unsigned char unreflected_aa0[0x10]; // 0xaa0 (0x10) 
	bool bInvitedToConsoleSession; // 0xab0 (0x1)
	bool bInitializedPlayerCustomizationOptionsFromClientSettings; // 0xab1 (0x1)
	unsigned char unreflected_ab2[0x4e]; // 0xab2 (0x4e) 
	struct FVector PawnDeathLocation; // 0xb00 (0x18)
	int CachedPreviousWorldPlayerId; // 0xb18 (0x4)
	unsigned char unreflected_b1c[0xc]; // 0xb1c (0xc) 
	bool bInGhostMode; // 0xb28 (0x1)
	unsigned char unreflected_b29[0x1f]; // 0xb29 (0x1f) 
	struct FMulticastInlineDelegate OnPawnDiedDelegate; // 0xb48 (0x10)
	struct FMulticastInlineDelegate OnMutatorListUpdatedDelegate; // 0xb58 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerState.UpdateScoreStatChanged (Underlying native function: UpdateScoreStatChanged 0x8ddf370)
	void UpdateScoreStatChanged(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.SetIsSimulatingDamage (Underlying native function: SetIsSimulatingDamage 0x8ddf1c0)
	void SetIsSimulatingDamage(bool& bSimulateDamage); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerState.ServerChangeActiveVariantForCosmeticItem (Underlying native function: ServerChangeActiveVariantForCosmeticItem 0x8ddef48)
	void ServerChangeActiveVariantForCosmeticItem(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant, class AFortPlayerPawn*& PreviewPawn); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_SessionOwner (Underlying native function: OnRep_SessionOwner 0x8ddedf0)
	void OnRepSessionOwner(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_ScoreStatChanged (Underlying native function: OnRep_ScoreStatChanged 0x8ddeddc)
	void OnRepScoreStatChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PlayerTeamPrivate (Underlying native function: OnRep_PlayerTeamPrivate 0x2423558)
	void OnRepPlayerTeamPrivate(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PlayerTeam (Underlying native function: OnRep_PlayerTeam 0x109ebf0)
	void OnRepPlayerTeam(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PlatformUniqueNetId (Underlying native function: OnRep_PlatformUniqueNetId 0x26559e8)
	void OnRepPlatformUniqueNetId(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_Platform (Underlying native function: OnRep_Platform 0x20680e0)
	void OnRepPlatform(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_PartyOwner (Underlying native function: OnRep_PartyOwner 0x1b4bf50)
	void OnRepPartyOwner(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_InGhostMode (Underlying native function: OnRep_InGhostMode 0x8dded04)
	void OnRepInGhostMode(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_HomeActor (Underlying native function: OnRep_HomeActor 0x8ddec80)
	void OnRepHomeActor(class AActor*& OldHomeActor); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_HeroType (Underlying native function: OnRep_HeroType 0x1a7f188)
	void OnRepHeroType(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_HeroID (Underlying native function: OnRep_HeroID 0x8ddec6c)
	void OnRepHeroID(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CurrentCharXP (Underlying native function: OnRep_CurrentCharXP 0x8ddebc4)
	void OnRepCurrentCharXP(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterGender (Underlying native function: OnRep_CharacterGender 0x2660668)
	void OnRepCharacterGender(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterData (Underlying native function: OnRep_CharacterData 0x1ac3ea8)
	void OnRepCharacterData(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterColorSwatches (Underlying native function: OnRep_CharacterColorSwatches 0x8ddeb70)
	void OnRepCharacterColorSwatches(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_CharacterBodyType (Underlying native function: OnRep_CharacterBodyType 0x2660668)
	void OnRepCharacterBodyType(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_bIsSimulatingDamage (Underlying native function: OnRep_bIsSimulatingDamage 0x8ddee5c)
	void OnRepbIsSimulatingDamage(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_bHasStartedPlaying (Underlying native function: OnRep_bHasStartedPlaying 0x26daa0c)
	void OnRepbHasStartedPlaying(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_BannerInfo (Underlying native function: OnRep_BannerInfo 0x263aa88)
	void OnRepBannerInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerState.OnRep_AccessoryColorSwatches (Underlying native function: OnRep_AccessoryColorSwatches 0x8ddeb40)
	void OnRepAccessoryColorSwatches(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerState.OnInstigatorEndPlay (Underlying native function: OnInstigatorEndPlay 0x2b41214)
	void OnInstigatorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerState.IsSimulatingDamage (Underlying native function: IsSimulatingDamage 0x7596c00)
	bool IsSimulatingDamage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.HasStartedPlaying (Underlying native function: HasStartedPlaying 0x8dde294)
	bool HasStartedPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.HasLocalPlayerController (Underlying native function: HasLocalPlayerController 0x8dde270)
	bool HasLocalPlayerController(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetUniqueID (Underlying native function: GetUniqueID 0x8dde1d8)
	struct FUniqueNetIdRepl GetUniqueID(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlayerUniqueNetID (Underlying native function: GetPlayerUniqueNetID 0x256f770)
	struct FUniqueNetIdRepl GetPlayerUniqueNetID(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlayerPawnOrVehicleDriver (Underlying native function: GetPlayerPawnOrVehicleDriver 0x2868628)
	class AFortPlayerPawn* GetPlayerPawnOrVehicleDriver(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlayerOSSName (Underlying native function: GetPlayerOSSName 0x8dde060)
	struct FName GetPlayerOSSName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlatformUniqueNetId (Underlying native function: GetPlatformUniqueNetId 0x8dddf90)
	struct FUniqueNetIdRepl GetPlatformUniqueNetId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetPlatform (Underlying native function: GetPlatform 0x8dddf1c)
	struct FString GetPlatform(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetHeroType (Underlying native function: GetHeroType 0x8dddd78)
	class UFortHeroType* GetHeroType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.GetCurrentPawn (Underlying native function: GetCurrentPawn 0x8dddb64)
	class AFortPlayerPawn* GetCurrentPawn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerState.ChangeActiveVariantForCosmeticItem (Underlying native function: ChangeActiveVariantForCosmeticItem 0x8ddd6c8)
	void ChangeActiveVariantForCosmeticItem(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant, class AFortPlayerPawn*& PreviewPawn); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerState.AreUniqueIDsIdentical (Underlying native function: AreUniqueIDsIdentical 0x8ddd584)
	static bool AreUniqueIDsIdentical(struct FUniqueNetIdRepl& A, struct FUniqueNetIdRepl& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

