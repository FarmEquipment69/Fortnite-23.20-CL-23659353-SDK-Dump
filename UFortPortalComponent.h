// Class /Script/FortniteGame.FortPortalComponent
// Size: 0x400
class UFortPortalComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnLinkDataLoaded; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnLinkDataError; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnLinkThumbnailUpdated; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnPortalLinkCodeLockStatusChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnPortalLinkLockExpired; // 0xe0 (0x10)
	struct FCreativeLoadedLinkData LoadedLinkData; // 0xf0 (0x2d0)
	struct FString LinkDataErrorStatus; // 0x3c0 (0x10)
	class UTexture2DDynamic* ThumbnailTexture; // 0x3d0 (0x8)
	enum EPortalLinkCodeLockMode LinkCodeLockMode; // 0x3d8 (0x1)
	enum EPortalLinkCodeLockStatus LinkCodeLockStatus; // 0x3d9 (0x1)
	bool bWindowLockedStartsLocked; // 0x3da (0x1)
	unsigned char unreflected_3db[0x15]; // 0x3db (0x15) 
	bool bHasValidLinkData; // 0x3f0 (0x1)
	bool bLinkRequiresCreativeContent; // 0x3f1 (0x1)
	unsigned char unreflected_3f2[0x6]; // 0x3f2 (0x6) 
	struct FDateTime* LinkCodeLockExpirationTime; // 0x3f8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPortalComponent.SetResetCodeAfterCooldown (Underlying native function: SetResetCodeAfterCooldown 0x88fbfe4)
	void SetResetCodeAfterCooldown(bool& bNewResetCodeAfterCooldown); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.SetLockOverrideExpirationSeconds (Underlying native function: SetLockOverrideExpirationSeconds 0x89babc4)
	void SetLockOverrideExpirationSeconds(int& NewExpirationSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.SetLockExpirationSecondsToNotOverrideCVar (Underlying native function: SetLockExpirationSecondsToNotOverrideCVar 0x89babac)
	void SetLockExpirationSecondsToNotOverrideCVar(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.SetLinkDataLoaded (Underlying native function: SetLinkDataLoaded 0x89bab08)
	void SetLinkDataLoaded(struct FCreativeLoadedLinkData& InLinkData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.ServerSetLinkCode_Complete (Underlying native function: ServerSetLinkCode_Complete 0x89b9d6c)
	void ServerSetLinkCodeComplete(bool& bSuccess, struct FString& ErrorMessage, struct FCreativeLoadedLinkData& InLinkData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortPortalComponent.ServerSetLinkCode (Underlying native function: ServerSetLinkCode 0x89b9c30)
	void ServerSetLinkCode(struct FOnlineLinkId& InLinkId, bool& bIgnoreCanSetLinkCode, bool& bFromDAD, bool& bCalledByModerator); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.OnRep_LoadedLinkData (Underlying native function: OnRep_LoadedLinkData 0x89b9b2c)
	void OnRepLoadedLinkData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnRep_LinkDataErrorStatus (Underlying native function: OnRep_LinkDataErrorStatus 0x89b9b18)
	void OnRepLinkDataErrorStatus(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnRep_LinkCodeLockStatus (Underlying native function: OnRep_LinkCodeLockStatus 0x89b9ae4)
	void OnRepLinkCodeLockStatus(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x26daa0c)
	void OnMinigameStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnLinkThumbnailDownloaded (Underlying native function: OnLinkThumbnailDownloaded 0x89b99c0)
	void OnLinkThumbnailDownloaded(bool& bSuccess, class UTexture2DDynamic*& InThumbnailTexture); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.OnLinkCodeLockExpired (Underlying native function: OnLinkCodeLockExpired 0x89b9958)
	void OnLinkCodeLockExpired(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPortalComponent.MakeLinkCodeWithVersioning (Underlying native function: MakeLinkCodeWithVersioning 0x89b95c0)
	struct FString MakeLinkCodeWithVersioning(struct FString& LinkCode, int& Version); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.MakeLinkCodeWithoutVersioning (Underlying native function: MakeLinkCodeWithoutVersioning 0x89b9798)
	struct FString MakeLinkCodeWithoutVersioning(struct FString& LinkCode, int& Version); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.LinkRequiresCreativeContent (Underlying native function: LinkRequiresCreativeContent 0x89b95a8)
	bool LinkRequiresCreativeContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPortalComponent.IsWellKnownNameSupported (Underlying native function: IsWellKnownNameSupported 0x89b91cc)
	bool IsWellKnownNameSupported(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.IsPlayerEligibleToBeginMatchmaking (Underlying native function: IsPlayerEligibleToBeginMatchmaking 0x89b8fbc)
	bool IsPlayerEligibleToBeginMatchmaking(class AFortPlayerController*& FortPC); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.IsPartyEligibleForMatchmaking (Underlying native function: IsPartyEligibleForMatchmaking 0x89b8f98)
	bool IsPartyEligibleForMatchmaking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.HasValidLinkData (Underlying native function: HasValidLinkData 0x89b8f80)
	bool HasValidLinkData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.GetRemainingLockDuration (Underlying native function: GetRemainingLockDuration 0x89b8c80)
	struct FTimespan* GetRemainingLockDuration(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.GetAccountIdOwnerOfIsland (Underlying native function: GetAccountIdOwnerOfIsland 0x89b87ec)
	struct FString GetAccountIdOwnerOfIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPortalComponent.ExpireLinkCodeLock (Underlying native function: ExpireLinkCodeLock 0x26daa0c)
	void ExpireLinkCodeLock(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.CheckIslandModeration (Underlying native function: CheckIslandModeration 0x89b8500)
	void CheckIslandModeration(struct FCreativeLoadedLinkData& LinkData, struct FDelegate& OnIslandModerationCheckComplete); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPortalComponent.CanSetLinkCode (Underlying native function: CanSetLinkCode 0x89b83b4)
	bool CanSetLinkCode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

