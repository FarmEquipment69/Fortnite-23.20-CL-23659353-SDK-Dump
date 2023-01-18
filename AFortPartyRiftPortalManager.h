// Class /Script/FortniteGame.FortPartyRiftPortalManager
// Size: 0x508
class AFortPartyRiftPortalManager : public AInfo
{
	struct FScalableFloat MinimumSpawnSeparation; // 0x288 (0x28)
	struct FScalableFloat PortalSpawnDistance; // 0x2b0 (0x28)
	struct FScalableFloat VerticalSpawnDistance; // 0x2d8 (0x28)
	struct FScalableFloat MaxHeightFromPawn; // 0x300 (0x28)
	struct FScalableFloat MaxHeightAboveTerrain; // 0x328 (0x28)
	struct FVector BoxHalfSize; // 0x350 (0x18)
	struct FGameplayTagContainer PrivacyErrorTags; // 0x368 (0x20)
	struct FGameplayTagContainer CollisionErrorTags; // 0x388 (0x20)
	struct FGameplayTagContainer TooCloseErrorTags; // 0x3a8 (0x20)
	struct FGameplayTagContainer NotLeaderErrorTags; // 0x3c8 (0x20)
	struct FGameplayTagContainer GuestErrorTags; // 0x3e8 (0x20)
	struct FGameplayTagContainer HubErrorTags; // 0x408 (0x20)
	struct FGameplayTagContainer PartyFullErrorTags; // 0x428 (0x20)
	struct FGameplayTagContainer AwayErrorTags; // 0x448 (0x20)
	unsigned char unreflected_468[0x20]; // 0x468 (0x20) 
	float LongRangeInteractionMinimumDistance; // 0x488 (0x4)
	float LongRangeInteractionMaximumDistance; // 0x48c (0x4)
	float LongRangeInteractionCutoffAngle; // 0x490 (0x4)
	unsigned char unreflected_494[0x4]; // 0x494 (0x4) 
	struct TArray<class AFortAthenaPartyRiftPortal*> AllPortals; // 0x498 (0x10)
	struct TMap<class AFortPlayerControllerAthena*, class AFortAthenaPartyRiftPortal*> PortalMap; // 0x4a8 (0x50)
	unsigned char padding_4f8[0x10]; // 0x4f8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPartyRiftPortalManager.ReleasePortal (Underlying native function: ReleasePortal 0x83de128)
	void ReleasePortal(class AFortAthenaPartyRiftPortal*& PortalToRelease, struct FString& Reason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyRiftPortalManager.GetPartyRiftPortalManager (Underlying native function: GetPartyRiftPortalManager 0x83db70c)
	static void GetPartyRiftPortalManager(class UObject*& WorldContextObject, class AFortPartyRiftPortalManager*& OutPartyRiftPortalManager, enum EPartyRiftPortalManagerValidityResult& OutIsValid); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPartyRiftPortalManager.DeterminePortalSpawnLocation (Underlying native function: DeterminePortalSpawnLocation 0x83dac48)
	bool DeterminePortalSpawnLocation(class AFortPlayerPawn*& PlayerPawn, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPartyRiftPortalManager.CanSpawnPortal (Underlying native function: CanSpawnPortal 0x83d7c94)
	bool CanSpawnPortal(class AFortPlayerController*& PlayerController, struct FGameplayTagContainer& OutResultTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

