// Class /Script/FortniteUI.FortGlobalUIContext
// Size: 0x568
class UFortGlobalUIContext : public UFortLocalPlayerSubsystem
{
	unsigned char unreflected_30[0x20]; // 0x30 (0x20) 
	struct FMulticastInlineDelegate SubGameChanged; // 0x50 (0x10)
	unsigned char unreflected_60[0x40]; // 0x60 (0x40) 
	bool bShouldSubgameSelectStartOnCampaignUpsell; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FMulticastInlineDelegate OnKeybindsChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnInputActionHoldStarted; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnInputActionHoldStopped; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnRefreshHUDForRespawn; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnEnterVehicleDriver; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnEnterVehiclePassenger; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnExitVehicle; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnVehicleSeatChanged; // 0x118 (0x10)
	unsigned char unreflected_128[0x30]; // 0x128 (0x30) 
	struct FMulticastInlineDelegate OnScoreReportChanged; // 0x158 (0x10)
	unsigned char unreflected_168[0x60]; // 0x168 (0x60) 
	struct FMulticastInlineDelegate OnLoadingScreenVisibilityChanged; // 0x1c8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerControllerConnectionChanged; // 0x1d8 (0x10)
	unsigned char unreflected_1e8[0x18]; // 0x1e8 (0x18) 
	struct TMap<struct FName, class UFortUIMessageManager*> MessageManagersByName; // 0x200 (0x50)
	struct TMap<enum EFortUIFeature, struct FFortUIFeatureStruct> Features; // 0x250 (0x50)
	unsigned char unreflected_2a0[0x140]; // 0x2a0 (0x140) 
	class UAthenaMatchReadyDesktopPopup* AthenaMatchReadyNotificationWidget; // 0x3e0 (0x8)
	unsigned char unreflected_3e8[0x10]; // 0x3e8 (0x10) 
	class UFortHelpItem* ActiveContextSpecificHelpItem; // 0x3f8 (0x8)
	bool bIsUIVisible; // 0x400 (0x1)
	bool bShowRateWidget; // 0x401 (0x1)
	unsigned char unreflected_402[0x6]; // 0x402 (0x6) 
	struct TMap<enum ESubGame, bool> IsAllContentInstalledCacheMap; // 0x408 (0x50)
	struct FText FeedbackTitle; // 0x458 (0x18)
	struct FDateTime* FirstLoginTime; // 0x470 (0x8)
	struct FTimerHandle* AddictionMsgTimer; // 0x478 (0x8)
	struct FUniqueNetIdRepl CurrentLocalPlayerUniqueNetId; // 0x480 (0x30)
	unsigned char unreflected_4b0[0x14]; // 0x4b0 (0x14) 
	bool bQuestMapTabRequested; // 0x4c4 (0x1)
	unsigned char unreflected_4c5[0x3]; // 0x4c5 (0x3) 
	struct FGameplayTag QuestMapChallengeTabRequested; // 0x4c8 (0x4)
	unsigned char padding_4cc[0x9c]; // 0x4cc (0x9c)

	/* Functions */

	// Function /Script/FortniteUI.FortGlobalUIContext.UnregisterScriptedActions (Underlying native function: UnregisterScriptedActions 0xa6434c0)
	void UnregisterScriptedActions(struct TArray<class UClass*>& ScriptedActions); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.UnregisterScriptedAction (Underlying native function: UnregisterScriptedAction 0xa643404)
	void UnregisterScriptedAction(class UClass*& ScriptedAction); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.UnregisterInputAction (Underlying native function: UnregisterInputAction 0xa6432fc)
	void UnregisterInputAction(class UUserWidget*& UserWidget, struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.UnbindToFeatureState (Underlying native function: UnbindToFeatureState 0xa643220)
	void UnbindToFeatureState(enum EFortUIFeature& Feature, struct FDelegate& Delegate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.TetherChanged (Underlying native function: TetherChanged 0xa643134)
	void TetherChanged(bool& bIsTethered); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowWebURL (Underlying native function: ShowWebURL 0xa642f8c)
	bool ShowWebURL(struct FString& URL, enum EFortUrlType& URLType); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowVehicleHealthBarOnPlayerHUD (Underlying native function: ShowVehicleHealthBarOnPlayerHUD 0xa642f68)
	bool ShowVehicleHealthBarOnPlayerHUD(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowCreativeContentDownloadDialog (Underlying native function: ShowCreativeContentDownloadDialog 0xa642d2c)
	bool ShowCreativeContentDownloadDialog(struct FDelegate& OnSubGameContentReadyCallback, struct FDelegate& OnSubGameContentCanceledCallback); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShowConsoleAccountPicker (Underlying native function: ShowConsoleAccountPicker 0xa642c44)
	void ShowConsoleAccountPicker(int& ControllerIndex, struct FDelegate& CompletionDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShouldShowRateWidget (Underlying native function: ShouldShowRateWidget 0x75964b8)
	bool ShouldShowRateWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ShouldShowPhoenixDisplay (Underlying native function: ShouldShowPhoenixDisplay 0xa642ad0)
	bool ShouldShowPhoenixDisplay(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetRatingWidgetFeedbackTitle (Underlying native function: SetRatingWidgetFeedbackTitle 0xa642974)
	void SetRatingWidgetFeedbackTitle(struct FText& Title); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetInputMode (Underlying native function: SetInputMode 0x2d94dc8)
	void SetInputMode(enum EFortInputMode& InMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetHideStwItemRefundHelp (Underlying native function: SetHideStwItemRefundHelp 0xa6426b8)
	void SetHideStwItemRefundHelp(bool& bInHideHelp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetHidePerkRecombobulatorHelp (Underlying native function: SetHidePerkRecombobulatorHelp 0xa64260c)
	void SetHidePerkRecombobulatorHelp(bool& bInHideHelp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetCurrentInputPresetName (Underlying native function: SetCurrentInputPresetName 0xa6423b0)
	void SetCurrentInputPresetName(struct FString& InputPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetCurrentCustomInputTemplatePresetName (Underlying native function: SetCurrentCustomInputTemplatePresetName 0xa642208)
	void SetCurrentCustomInputTemplatePresetName(struct FString& InputPresetName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SetContextHelpItem (Underlying native function: SetContextHelpItem 0xa64217c)
	void SetContextHelpItem(class UFortHelpItem*& ContextSpecificHelpItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SendLeaveZoneAnalytic (Underlying native function: SendLeaveZoneAnalytic 0xa642168)
	void SendLeaveZoneAnalytic(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic (Underlying native function: SendExperienceRatingAnalytic 0xa641b8c)
	void SendExperienceRatingAnalytic(struct FString& RatingType, struct FString& FeedbackSentBy, struct FText& RatingQuestion, int& StarCount, struct FString& GameSessionId, struct FString& Comment); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RunLauncherWithOptions (Underlying native function: RunLauncherWithOptions 0xa641a0c)
	void RunLauncherWithOptions(struct FString& Options); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ReturnToSubGameSelect (Underlying native function: ReturnToSubGameSelect 0xa6419e8)
	void ReturnToSubGameSelect(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RegisterScriptedActions (Underlying native function: RegisterScriptedActions 0xa641610)
	void RegisterScriptedActions(struct TArray<class UClass*>& ScriptedActions); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RegisterScriptedAction (Underlying native function: RegisterScriptedAction 0xa641554)
	void RegisterScriptedAction(class UClass*& ScriptedAction); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RegisterInputAction (Underlying native function: RegisterInputAction 0xa6413f8)
	void RegisterInputAction(class UUserWidget*& UserWidget, struct FDataTableRowHandle& InputActionRow, struct FDelegate& CommitedEvent, int& InFilterPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.RefreshHUDForRespawn (Underlying native function: RefreshHUDForRespawn 0xa6413e4)
	void RefreshHUDForRespawn(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.QuitGame (Underlying native function: QuitGame 0x270de84)
	void QuitGame(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature (Has no native function)
	void OnQueryFortBackendVersionDelegateDelegateSignature(struct FFortBackendVersion& FortBackendVersion); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortGlobalUIContext.OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature (Has no native function)
	void OnLocalPlayerControllerConnectionChangedDelegateDelegateSignature(bool& bConnected); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortGlobalUIContext.OnLoadingScreenVisibilityChangedDelegate__DelegateSignature (Has no native function)
	void OnLoadingScreenVisibilityChangedDelegateDelegateSignature(bool& IsVisible); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortGlobalUIContext.Logout (Underlying native function: Logout 0xa640e14)
	void Logout(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsUsingGamepad (Underlying native function: IsUsingGamepad 0x2476518)
	bool IsUsingGamepad(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsPendingLogout (Underlying native function: IsPendingLogout 0xa640b3c)
	bool IsPendingLogout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsMobileApp (Underlying native function: IsMobileApp 0x2f64fec)
	bool IsMobileApp(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsInZone (Underlying native function: IsInZone 0x1d0432c)
	bool IsInZone(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsInOutpostZone (Underlying native function: IsInOutpostZone 0xa640ab0)
	bool IsInOutpostZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsGamepadAttached (Underlying native function: IsGamepadAttached 0x27c9608)
	bool IsGamepadAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsDesktopPlatform (Underlying native function: IsDesktopPlatform 0x27c9608)
	bool IsDesktopPlatform(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsCustomGamepadConfig (Underlying native function: IsCustomGamepadConfig 0xa6409e0)
	bool IsCustomGamepadConfig(int& ConfigIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsCurrentlyShowingLoadingScreen (Underlying native function: IsCurrentlyShowingLoadingScreen 0xa6409bc)
	bool IsCurrentlyShowingLoadingScreen(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsCreativeModeAccessLimited (Underlying native function: IsCreativeModeAccessLimited 0xa640998)
	bool IsCreativeModeAccessLimited(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.IsAllContentInstalled (Underlying native function: IsAllContentInstalled 0xa640880)
	bool IsAllContentInstalled(enum ESubGame& SubGame); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGlobalUIContext.InputActionHoldStopped (Underlying native function: InputActionHoldStopped 0xa6407b0)
	void InputActionHoldStopped(struct FName& InputActionName, bool& bCompletedSuccessfully); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.InputActionHoldStarted (Underlying native function: InputActionHoldStarted 0xa6406e4)
	void InputActionHoldStarted(struct FName& InputActionName, float& HoldDuration); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.HideBang (Underlying native function: HideBang 0xa640660)
	void HideBang(enum EFortBangType& Type); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.HandleVehicleSeatChanged (Underlying native function: HandleVehicleSeatChanged 0xa64015c)
	void HandleVehicleSeatChanged(int& SeatIndex); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetUseActionName (Underlying native function: GetUseActionName 0x296ec70)
	struct FName GetUseActionName(enum ECommonInputType& OverrideInputType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTrapPickerActionName (Underlying native function: GetTrapPickerActionName 0xa63f340)
	struct FName GetTrapPickerActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTrapHotbarActionName (Underlying native function: GetTrapHotbarActionName 0xa63f2a8)
	struct FName GetTrapHotbarActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTrapConfirmActionName (Underlying native function: GetTrapConfirmActionName 0xa63f20c)
	struct FName GetTrapConfirmActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTopLevelHelpItems (Underlying native function: GetTopLevelHelpItems 0xa63ecd8)
	void GetTopLevelHelpItems(struct TArray<class UFortHelpItem*>& ActiveHelpEntries); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetToggleInventoryActionName (Underlying native function: GetToggleInventoryActionName 0xa63ecac)
	struct FName GetToggleInventoryActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetTargetActionName (Underlying native function: GetTargetActionName 0xa63eb0c)
	struct FName GetTargetActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSwitchQuickBarActionName (Underlying native function: GetSwitchQuickBarActionName 0xa63ea70)
	struct FName GetSwitchQuickBarActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSubGame (Underlying native function: GetSubGame 0x28f64e4)
	enum ESubGame GetSubGame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSessionId (Underlying native function: GetSessionId 0xa63e7ec)
	struct FString GetSessionId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetSessionConnectString (Underlying native function: GetSessionConnectString 0xa63e79c)
	struct FString GetSessionConnectString(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetScoreReport (Underlying native function: GetScoreReport 0xa63e778)
	class UFortUIScoreReport* GetScoreReport(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetRotatePrimitiveClockwiseActionName (Underlying native function: GetRotatePrimitiveClockwiseActionName 0xa63e6a8)
	struct FName GetRotatePrimitiveClockwiseActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetQuestManager (Underlying native function: GetQuestManager 0x2a7bee4)
	class UFortQuestManager* GetQuestManager(enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPickerConfirmActionName (Underlying native function: GetPickerConfirmActionName 0xa63dce8)
	struct FName GetPickerConfirmActionName(enum EFortPickerMode& PickerMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPickerCancelActionName (Underlying native function: GetPickerCancelActionName 0xa63dc60)
	struct FName GetPickerCancelActionName(enum EFortPickerMode& PickerMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPerformBuildingImprovementInteractionActionName (Underlying native function: GetPerformBuildingImprovementInteractionActionName 0xa63dbc4)
	struct FName GetPerformBuildingImprovementInteractionActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetPerformBuildingEditInteractionActionName (Underlying native function: GetPerformBuildingEditInteractionActionName 0xa63db28)
	struct FName GetPerformBuildingEditInteractionActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetMessageManager (Underlying native function: GetMessageManager 0xa63d734)
	class UFortUIMessageManager* GetMessageManager(struct FName& ManagerName, bool& bCreatedNew); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetLastMissionRewardReport (Underlying native function: GetLastMissionRewardReport 0xa63d5b0)
	class UFortUIRewardReport* GetLastMissionRewardReport(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo (Underlying native function: GetLastGameSummaryInfo 0xa63d4e4)
	struct FGameSummaryInfo GetLastGameSummaryInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetKeyForAction (Underlying native function: GetKeyForAction 0xa63d384)
	struct FKey GetKeyForAction(struct FName& Action, bool& bForceGamepadKey, struct FName& PresetNameOverride); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetKBMPlayerInputPresetNamesForSubGame (Underlying native function: GetKBMPlayerInputPresetNamesForSubGame 0xa63d24c)
	void GetKBMPlayerInputPresetNamesForSubGame(enum ESubGame& SubGame, struct TArray<struct FString>& InputPresetNames, struct TArray<struct FText>& InputPresetFriendlyNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetKBMPlayerInputPresetDescriptionForSubGame (Underlying native function: GetKBMPlayerInputPresetDescriptionForSubGame 0xa63d0cc)
	void GetKBMPlayerInputPresetDescriptionForSubGame(enum ESubGame& SubGame, int& CurrentPreset, struct FText& InputPresetDescription, struct FText& InputPresetSubDescription); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetJumpActionName (Underlying native function: GetJumpActionName 0xa63d0a0)
	struct FName GetJumpActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetInputTypeIcon (Underlying native function: GetInputTypeIcon 0x2b3d2c4)
	class UTexture2D* GetInputTypeIcon(enum ECommonInputType& InputType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetInputPriority (Underlying native function: GetInputPriority 0x284085c)
	int GetInputPriority(enum EInputPriority& Priority); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetInputActionGroup (Underlying native function: GetInputActionGroup 0xa63cd08)
	bool GetInputActionGroup(struct FName& ActionName, enum EFortInputActionGroup& OutInputActionGroup); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetHoagieBoostName (Underlying native function: GetHoagieBoostName 0xa63cc4c)
	struct FName GetHoagieBoostName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetHideStwItemRefundHelp (Underlying native function: GetHideStwItemRefundHelp 0xa63cc04)
	bool GetHideStwItemRefundHelp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetHidePerkRecombobulatorHelp (Underlying native function: GetHidePerkRecombobulatorHelp 0xa63cbbc)
	bool GetHidePerkRecombobulatorHelp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetFireActionName (Underlying native function: GetFireActionName 0xa63c9c4)
	struct FName GetFireActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetFeedbackTitle (Underlying native function: GetFeedbackTitle 0xa63c950)
	struct FText GetFeedbackTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetFeatureState (Underlying native function: GetFeatureState 0x1cad7b8)
	void GetFeatureState(enum EFortUIFeature& Feature, enum EFortUIFeatureState& OutFeatureState, enum EFortUIFeatureStateReason& OutReason); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCustomGamepadInputPresetName (Underlying native function: GetCustomGamepadInputPresetName 0xa63c19c)
	struct FString GetCustomGamepadInputPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCurrentInputPresetName (Underlying native function: GetCurrentInputPresetName 0xa63bfa0)
	struct FString GetCurrentInputPresetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeToggleInvulnerablityName (Underlying native function: GetCreativeToggleInvulnerablityName 0xa63bdd8)
	struct FName GetCreativeToggleInvulnerablityName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeToggleHeatmapName (Underlying native function: GetCreativeToggleHeatmapName 0xa63bd90)
	struct FName GetCreativeToggleHeatmapName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeToggleGhostName (Underlying native function: GetCreativeToggleGhostName 0xa63bd48)
	struct FName GetCreativeToggleGhostName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeQuickbarActivateClutchName (Underlying native function: GetCreativeQuickbarActivateClutchName 0xa63bd00)
	struct FName GetCreativeQuickbarActivateClutchName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolMultiSelectName (Underlying native function: GetCreativeMoveToolMultiSelectName 0xa63bcb8)
	struct FName GetCreativeMoveToolMultiSelectName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolEquippedGrabOrLetGoName (Underlying native function: GetCreativeMoveToolEquippedGrabOrLetGoName 0xa63bc70)
	struct FName GetCreativeMoveToolEquippedGrabOrLetGoName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolEquippedDeleteName (Underlying native function: GetCreativeMoveToolEquippedDeleteName 0xa63bc28)
	struct FName GetCreativeMoveToolEquippedDeleteName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolEquippedCopyGrabOrDuplicateName (Underlying native function: GetCreativeMoveToolEquippedCopyGrabOrDuplicateName 0xa63bbe0)
	struct FName GetCreativeMoveToolEquippedCopyGrabOrDuplicateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveToolClearMultiSelectName (Underlying native function: GetCreativeMoveToolClearMultiSelectName 0xa63bb98)
	struct FName GetCreativeMoveToolClearMultiSelectName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelySwitchAxisName (Underlying native function: GetCreativeMoveObjectsFreelySwitchAxisName 0xa63bb50)
	struct FName GetCreativeMoveObjectsFreelySwitchAxisName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyRotateCounterclockwiseName (Underlying native function: GetCreativeMoveObjectsFreelyRotateCounterclockwiseName 0xa63bb08)
	struct FName GetCreativeMoveObjectsFreelyRotateCounterclockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyRotateClockwiseName (Underlying native function: GetCreativeMoveObjectsFreelyRotateClockwiseName 0xa63bac0)
	struct FName GetCreativeMoveObjectsFreelyRotateClockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyPushName (Underlying native function: GetCreativeMoveObjectsFreelyPushName 0xa63ba78)
	struct FName GetCreativeMoveObjectsFreelyPushName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyPullName (Underlying native function: GetCreativeMoveObjectsFreelyPullName 0xa63ba30)
	struct FName GetCreativeMoveObjectsFreelyPullName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyExitName (Underlying native function: GetCreativeMoveObjectsFreelyExitName 0xa63b9e8)
	struct FName GetCreativeMoveObjectsFreelyExitName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyDuplicateName (Underlying native function: GetCreativeMoveObjectsFreelyDuplicateName 0xa63b9a0)
	struct FName GetCreativeMoveObjectsFreelyDuplicateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyDropToFloorName (Underlying native function: GetCreativeMoveObjectsFreelyDropToFloorName 0xa63b958)
	struct FName GetCreativeMoveObjectsFreelyDropToFloorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveObjectsFreelyChangePrecisionLevelName (Underlying native function: GetCreativeMoveObjectsFreelyChangePrecisionLevelName 0xa63b910)
	struct FName GetCreativeMoveObjectsFreelyChangePrecisionLevelName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName (Underlying native function: GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName 0xa63b8c8)
	struct FName GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridRotateClockwiseName (Underlying native function: GetCreativeMoveBuildingsOnGridRotateClockwiseName 0xa63b880)
	struct FName GetCreativeMoveBuildingsOnGridRotateClockwiseName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridMirrorName (Underlying native function: GetCreativeMoveBuildingsOnGridMirrorName 0xa63b838)
	struct FName GetCreativeMoveBuildingsOnGridMirrorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridExitName (Underlying native function: GetCreativeMoveBuildingsOnGridExitName 0xa63b7f0)
	struct FName GetCreativeMoveBuildingsOnGridExitName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeMoveBuildingsOnGridDuplicateName (Underlying native function: GetCreativeMoveBuildingsOnGridDuplicateName 0xa63b7a8)
	struct FName GetCreativeMoveBuildingsOnGridDuplicateName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeModeLimitedAccessEndTime (Underlying native function: GetCreativeModeLimitedAccessEndTime 0xa63b77c)
	struct FDateTime* GetCreativeModeLimitedAccessEndTime(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeFlyUpActionName (Underlying native function: GetCreativeFlyUpActionName 0xa63b734)
	struct FName GetCreativeFlyUpActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCreativeFlyDownActionName (Underlying native function: GetCreativeFlyDownActionName 0xa63b6ec)
	struct FName GetCreativeFlyDownActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetCollectionBookManager (Underlying native function: GetCollectionBookManager 0xa63b540)
	class UFortCollectionBookManager* GetCollectionBookManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetChangeMaterialActionName (Underlying native function: GetChangeMaterialActionName 0xa63b4e8)
	struct FName GetChangeMaterialActionName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetBuildConfirmActionName (Underlying native function: GetBuildConfirmActionName 0xa63b33c)
	struct FName GetBuildConfirmActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetBrushForKey (Underlying native function: GetBrushForKey 0xa63b138)
	bool GetBrushForKey(struct FKey& Key, struct FSlateBrush& Brush); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetAltInteractionActionName (Underlying native function: GetAltInteractionActionName 0x29e9828)
	struct FName GetAltInteractionActionName(enum ECommonInputType& OverrideInputType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetAllPlayerInputPresetNamesForSubGame (Underlying native function: GetAllPlayerInputPresetNamesForSubGame 0xa63ad18)
	void GetAllPlayerInputPresetNamesForSubGame(enum ESubGame& SubGame, struct TArray<struct FString>& InputPresetNames, struct TArray<struct FText>& InputPresetFriendlyNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.GetActionForKey (Underlying native function: GetActionForKey 0xa63a9c0)
	struct FName GetActionForKey(struct FName& PresetName, struct FKey& Key, enum EFortInputActionGroup& InputActionGroup, bool& bIsUsingGamepad); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ForceSetFeatureState (Underlying native function: ForceSetFeatureState 0xa63a3b4)
	void ForceSetFeatureState(enum EFortUIFeature& Feature, enum EFortUIFeatureState& ForcedState, enum EFortUIFeatureStateReason& Reason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ExitVehicle (Underlying native function: ExitVehicle 0xa63a23c)
	void ExitVehicle(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.EnterVehiclePassenger (Underlying native function: EnterVehiclePassenger 0xa639f18)
	void EnterVehiclePassenger(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.EnterVehicleDriver (Underlying native function: EnterVehicleDriver 0xa639efc)
	void EnterVehicleDriver(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortGlobalUIContext.DrawAttention (Underlying native function: DrawAttention 0xa639af8)
	static void DrawAttention(class UWidget*& BaseWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.DisplayStateContent (Underlying native function: DisplayStateContent 0xa639a54)
	void DisplayStateContent(bool& bDisplay); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.CopyToClipboard (Underlying native function: CopyToClipboard 0xa6394dc)
	void CopyToClipboard(struct FString& ClipboardText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ContentInstallationProgress (Underlying native function: ContentInstallationProgress 0x890d30c)
	float ContentInstallationProgress(enum ESubGame& SubGame); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.ClearRatingWidgetInfo (Underlying native function: ClearRatingWidgetInfo 0xa6394c4)
	void ClearRatingWidgetInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ClearLastMissionReports (Underlying native function: ClearLastMissionReports 0xa6394b0)
	void ClearLastMissionReports(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.ClearLastGameSummaryInfo (Underlying native function: ClearLastGameSummaryInfo 0xa639474)
	void ClearLastGameSummaryInfo(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.CheckFlag (Underlying native function: CheckFlag 0xa6392d8)
	static void CheckFlag(struct FString& FlagName, enum EFlagStatus& OutStatus); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.CanPlay (Underlying native function: CanPlay 0xa638c0c)
	bool CanPlay(enum ESubGame& SubGame, struct FText& DenialReason); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.CanMatchmake (Underlying native function: CanMatchmake 0xa638b20)
	bool CanMatchmake(enum ESubGame& SubGame, struct FText& DenialReason); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize (Underlying native function: BindToFeatureStateAndInitialize 0xa6383c0)
	void BindToFeatureStateAndInitialize(enum EFortUIFeature& Feature, struct FDelegate& Delegate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGlobalUIContext.AllowQuit (Underlying native function: AllowQuit 0x2d0166c)
	bool AllowQuit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortGlobalUIContext.AllowLogout (Underlying native function: AllowLogout 0xa638058)
	bool AllowLogout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

