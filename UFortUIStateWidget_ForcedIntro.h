// Class /Script/FortniteUI.FortUIStateWidget_ForcedIntro
// Size: 0x478
class UFortUIStateWidget_ForcedIntro : public UFortUIStateWidgetBase
{
	struct FString PlaylistPluginName; // 0x3c0 (0x10)
	struct FName PlaylistName; // 0x3d0 (0x4)
	unsigned char unreflected_3d4[0x4]; // 0x3d4 (0x4) 
	struct FDateTime* MatchmakingStartTime; // 0x3d8 (0x8)
	float MatchmakingStartTimeRandomness; // 0x3e0 (0x4)
	bool bUseMCPTime; // 0x3e4 (0x1)
	unsigned char unreflected_3e5[0x3]; // 0x3e5 (0x3) 
	float MaxWaitTimeForMeshConfig; // 0x3e8 (0x4)
	float InitialDelayBeforeMM; // 0x3ec (0x4)
	float MMTimeoutTime; // 0x3f0 (0x4)
	int MaxNumOfMMAttempts; // 0x3f4 (0x4)
	float TimeBetweenMMAttempts; // 0x3f8 (0x4)
	float TimeBetweenMMAttemptsMultiplier; // 0x3fc (0x4)
	unsigned char unreflected_400[0x1]; // 0x400 (0x1) 
	bool bLocalOnlyOnFail; // 0x401 (0x1)
	bool bSetToDefaulPlaylistOnDeactivated; // 0x402 (0x1)
	bool bSetLocalHasSeenForcedIntroOnDeactivated; // 0x403 (0x1)
	unsigned char unreflected_404[0x4]; // 0x404 (0x4) 
	class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition; // 0x408 (0x8)
	class UCommonTextBlock* TextForcedIntroState; // 0x410 (0x8)
	unsigned char padding_418[0x60]; // 0x418 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.FortUIStateWidget_ForcedIntro.StartMatch (Underlying native function: StartMatch 0x26daa0c)
	void StartMatch(); // (Final | Exec | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_ForcedIntro.OnNewForcedIntroTextDisplayState (Underlying native function: OnNewForcedIntroTextDisplayState 0xa725678)
	void OnNewForcedIntroTextDisplayState(enum EForcedIntroTextDisplayState& NewState); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_ForcedIntro.GetPlaylistLoadingScreenWidget (Underlying native function: GetPlaylistLoadingScreenWidget 0xa7247d8)
	struct TWeakObjectPtr<class UClass> GetPlaylistLoadingScreenWidget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

