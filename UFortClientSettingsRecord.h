// Class /Script/FortniteGame.FortClientSettingsRecord
// Size: 0x11d8
class UFortClientSettingsRecord : public UFortGenericRecord
{
	struct FFortGamepadUserOptions LocalGamepadUserOptions; // 0xe0 (0x4c)
	unsigned char unreflected_12c[0x1]; // 0x12c (0x1) 
	bool bHighResTexturesReminderEnabled; // 0x12d (0x1)
	unsigned char unreflected_12e[0x1fa]; // 0x12e (0x1fa) 
	float HUDScale; // 0x328 (0x4)
	unsigned char unreflected_32c[0x4]; // 0x32c (0x4) 
	float InitialHUDScale; // 0x330 (0x4)
	bool bAutoHideBuildingMaterials; // 0x334 (0x1)
	enum EFortRarity ShowPickupDotsOnMapByRarity; // 0x335 (0x1)
	unsigned char unreflected_336[0x2]; // 0x336 (0x2) 
	struct FFortGamepadUserOptions GamepadUserOptions; // 0x338 (0x4c)
	unsigned char unreflected_384[0x4]; // 0x384 (0x4) 
	struct FVector2D GamepadLookSensitivity; // 0x388 (0x10)
	float GamepadMoveStickDeadZone; // 0x398 (0x4)
	float GamepadLookStickDeadZone; // 0x39c (0x4)
	bool bCustomKeyboardDiagonals; // 0x3a0 (0x1)
	unsigned char unreflected_3a1[0x3]; // 0x3a1 (0x3) 
	float KeyboardForwardDiagonal; // 0x3a4 (0x4)
	float KeyboardStrafeDiagonal; // 0x3a8 (0x4)
	float KeyboardBackwardDiagonal; // 0x3ac (0x4)
	float TargetingSlow; // 0x3b0 (0x4)
	float ScopedSlow; // 0x3b4 (0x4)
	float GamepadTargetingSlow; // 0x3b8 (0x4)
	float GamepadScopedSlow; // 0x3bc (0x4)
	float GamepadBuildingMultiplier; // 0x3c0 (0x4)
	float GamepadEditModeMultiplier; // 0x3c4 (0x4)
	float MotionTargetingSlow; // 0x3c8 (0x4)
	float MotionScopedSlow; // 0x3cc (0x4)
	float MotionHarvestingToolSlow; // 0x3d0 (0x4)
	float MouseSensitivity; // 0x3d4 (0x4)
	float MouseSensitivityX; // 0x3d8 (0x4)
	float MouseSensitivityY; // 0x3dc (0x4)
	float MouseSensitivityMultiplierForAircraftValue; // 0x3e0 (0x4)
	float InitialMouseSensitivityMultiplierForAircraft; // 0x3e4 (0x4)
	float TouchLookAccelerationMultiplier; // 0x3e8 (0x4)
	float TouchLookSensitivitySetting; // 0x3ec (0x4)
	float TouchTargetingSlow; // 0x3f0 (0x4)
	float TouchScopedSlow; // 0x3f4 (0x4)
	float TouchBuildingMultiplier; // 0x3f8 (0x4)
	float TouchEditModeMultiplier; // 0x3fc (0x4)
	float TouchVerticalMultiplier; // 0x400 (0x4)
	bool bMotionControlsEnabled; // 0x404 (0x1)
	enum EFortMotionYawAxis MotionYawAxis; // 0x405 (0x1)
	enum EFortMotionYawAxis MotionYawAxisMobile; // 0x406 (0x1)
	enum EGyroSpace GyroSpaceAttached; // 0x407 (0x1)
	enum EGyroSpace GyroSpaceDetached; // 0x408 (0x1)
	enum EAxisDirection GyroV2YawDirection; // 0x409 (0x1)
	enum EAxisDirection GyroV2PitchDirection; // 0x40a (0x1)
	enum EAxisDirection GyroV2RollDirection; // 0x40b (0x1)
	bool bGyroAdvancedSettingsEnabled; // 0x40c (0x1)
	bool bGyroUseZoomSensitivityScaling; // 0x40d (0x1)
	enum EGyroAcceleration GyroAccelerationMode; // 0x40e (0x1)
	unsigned char unreflected_40f[0x1]; // 0x40f (0x1) 
	float GyroSensitivity; // 0x410 (0x4)
	float GyroV2Sensitivity; // 0x414 (0x4)
	float GyroV2TargetingMultiplier; // 0x418 (0x4)
	float GyroV2ScopedMultiplier; // 0x41c (0x4)
	float GyroV2HarvestingMultiplier; // 0x420 (0x4)
	float GyroV2BuildingMultiplier; // 0x424 (0x4)
	float GyroV2EditingMultiplier; // 0x428 (0x4)
	enum EGyroActiveMode GyroActiveMode; // 0x42c (0x1)
	enum EGyroActiveBuildMode GyroActiveBuildMode; // 0x42d (0x1)
	enum EGyroStickMode GyroStickMode; // 0x42e (0x1)
	enum EGyroTouchMode GyroTouchMode; // 0x42f (0x1)
	bool GyroStickDisables; // 0x430 (0x1)
	bool GyroAimAssist; // 0x431 (0x1)
	enum EJoyConMotionSelection JoyConMotionSelection; // 0x432 (0x1)
	enum EGyroButtonResponse GyroButtonModeX; // 0x433 (0x1)
	enum EGyroButtonResponse GyroButtonModeY; // 0x434 (0x1)
	unsigned char unreflected_435[0x3]; // 0x435 (0x3) 
	float GyroAccelerationMultiplier; // 0x438 (0x4)
	float GyroAccelerationMinThreshold; // 0x43c (0x4)
	float GyroAccelerationMaxThreshold; // 0x440 (0x4)
	float GyroVerticalMultiplier; // 0x444 (0x4)
	float GyroSteadyingThreshold; // 0x448 (0x4)
	float GyroSmoothingThreshold; // 0x44c (0x4)
	float GyroSmoothingWindow; // 0x450 (0x4)
	float GyroDeadZone; // 0x454 (0x4)
	float GyroTighteningThreshold; // 0x458 (0x4)
	float GyroTrackballDecay; // 0x45c (0x4)
	float GyroButtonHoldTime; // 0x460 (0x4)
	bool bGyroDisabledWhileDriving; // 0x464 (0x1)
	bool bGyroVibrationConpensation; // 0x465 (0x1)
	unsigned char unreflected_466[0x2]; // 0x466 (0x2) 
	struct FString ControllerPlatform; // 0x468 (0x10)
	struct FString InputKBMPresetNameForCampaign; // 0x478 (0x10)
	struct FString InputKBMPresetNameForAthena; // 0x488 (0x10)
	struct FString InputPresetNameForCampaign; // 0x498 (0x10)
	struct FString InputPresetNameForAthena; // 0x4a8 (0x10)
	struct FString InputPresetNameForAthenaMobile; // 0x4b8 (0x10)
	struct FString InputTemplatePresetNameForCampaign; // 0x4c8 (0x10)
	struct FString InputTemplatePresetNameForAthena; // 0x4d8 (0x10)
	float XboxSafeZone; // 0x4e8 (0x4)
	unsigned char unreflected_4ec[0x4]; // 0x4ec (0x4) 
	struct FString PendingCulture; // 0x4f0 (0x10)
	unsigned char unreflected_500[0x8]; // 0x500 (0x8) 
	struct TArray<struct FFortActionKeyMapping> UserActionBindings; // 0x508 (0x10)
	struct TMap<enum ESubGame, struct FUserActionBindings> UserBindingsPerSubGame; // 0x518 (0x50)
	struct TArray<struct FFortActionKeyMapping> DisabledActionBindings; // 0x568 (0x10)
	struct TArray<struct FFortActionKeyMapping> CustomGamepadActionBindings; // 0x578 (0x10)
	struct TMap<struct FName, struct FFortUserInputSettingsPerMode> UserInputSettingsPerMode; // 0x588 (0x50)
	struct FName InputConfigName; // 0x5d8 (0x4)
	unsigned char unreflected_5dc[0x4]; // 0x5dc (0x4) 
	struct FFortCustomKeybindingProfileContainer CustomKeybindingProfileContainer; // 0x5e0 (0x10)
	bool bInvertedLook; // 0x5f0 (0x1)
	bool bInvertedLookMobile; // 0x5f1 (0x1)
	bool bInvertedPitchForMotion; // 0x5f2 (0x1)
	bool bInvertedPitchForAircraftPrimary; // 0x5f3 (0x1)
	bool bInvertedPitchForAircraftSecondary; // 0x5f4 (0x1)
	bool bInvertedYaw; // 0x5f5 (0x1)
	bool bInvertedYawMobile; // 0x5f6 (0x1)
	bool bInvertedYawForMotion; // 0x5f7 (0x1)
	bool bTankKBMCameraControls; // 0x5f8 (0x1)
	bool bTankGamepadCameraControls; // 0x5f9 (0x1)
	bool bToggleSprint; // 0x5fa (0x1)
	bool bToggleSprintMobile; // 0x5fb (0x1)
	bool bTapInteractEnabled; // 0x5fc (0x1)
	enum ETouchInteractMode TouchInteractionMode; // 0x5fd (0x1)
	bool bTargetingToggleable; // 0x5fe (0x1)
	bool bTargetingToggleableMobile; // 0x5ff (0x1)
	bool bAutoEquipBetterItems; // 0x600 (0x1)
	bool bAimAssistEnabled; // 0x601 (0x1)
	bool bTouchAimAssistEnabled; // 0x602 (0x1)
	bool bTouchEditEnabled; // 0x603 (0x1)
	bool bEditConfirmOnReleaseEnabled; // 0x604 (0x1)
	bool bSmartBuildEnabled; // 0x605 (0x1)
	bool bQuickEditEnabled; // 0x606 (0x1)
	bool bForceFeedbackEnabled; // 0x607 (0x1)
	bool bTriggerHapticsEnabled; // 0x608 (0x1)
	bool bTriggerPullUsesHapticThreshold; // 0x609 (0x1)
	unsigned char TriggerHapticStrength; // 0x60a (0x1)
	unsigned char TriggerHapticStartPosition; // 0x60b (0x1)
	bool bMoveStickAcceleratesVehicles; // 0x60c (0x1)
	bool bDeviceFeedbackBlockedWithAttachedController; // 0x60d (0x1)
	bool bContextTutorialEnabled; // 0x60e (0x1)
	bool bBuildingPossessionShown; // 0x60f (0x1)
	bool bLocalNotificationsEnabled; // 0x610 (0x1)
	bool bUseFirstPersonCamera; // 0x611 (0x1)
	bool bUseGamepadEditModeAimAssist; // 0x612 (0x1)
	bool bUseHoldToSwapPickup; // 0x613 (0x1)
	bool bUseFollowCamera; // 0x614 (0x1)
	bool bUseAutoCenter; // 0x615 (0x1)
	bool bUseGamepadAutoRun; // 0x616 (0x1)
	bool bFlickStickEnabled; // 0x617 (0x1)
	float FlickTime; // 0x618 (0x4)
	float FlickStickSmoothingThreshold; // 0x61c (0x4)
	float FlickStickWindingSpeed; // 0x620 (0x4)
	bool bScaleWindingWithZoom; // 0x624 (0x1)
	unsigned char unreflected_625[0x3]; // 0x625 (0x3) 
	float FlickStickDeadZoneFactor; // 0x628 (0x4)
	float FlickForwardDeadZone; // 0x62c (0x4)
	bool bFocusOnFirstBuildingPieceWhenQuickbarSwapped; // 0x630 (0x1)
	bool bNewFocusOnFirstBuildingPieceWhenQuickbarSwapped; // 0x631 (0x1)
	bool bFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena; // 0x632 (0x1)
	bool bNewFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena; // 0x633 (0x1)
	bool bDisablePreEditsWhenPlacingBuilding; // 0x634 (0x1)
	bool bTurboBuild; // 0x635 (0x1)
	bool bTurboBuildMobile; // 0x636 (0x1)
	bool bCreativeTurboDelete; // 0x637 (0x1)
	bool bAutoChangeMaterial; // 0x638 (0x1)
	bool bAutoChangeMaterialMobile; // 0x639 (0x1)
	bool bAutoOpenDoors; // 0x63a (0x1)
	bool bAutoOpenDoorsNonMobile; // 0x63b (0x1)
	bool bAutoClamber; // 0x63c (0x1)
	bool bShowClamberIndicator; // 0x63d (0x1)
	bool bAutoHurdle; // 0x63e (0x1)
	bool bAutoPickupWeapons; // 0x63f (0x1)
	bool bAutoPickupWeaponsConsolePC; // 0x640 (0x1)
	bool bEnablePreferredItemSlots; // 0x641 (0x1)
	bool bAutoSortConsumablesToRight; // 0x642 (0x1)
	bool bEnableTryBuildOnFocus; // 0x643 (0x1)
	unsigned char unreflected_644[0x4]; // 0x644 (0x4) 
	struct TArray<struct FName> SubscriptionNotificationsViewed; // 0x648 (0x10)
	float EditButtonHoldTime; // 0x658 (0x4)
	float SlideButtonHoldTime; // 0x65c (0x4)
	float CameraResetTime; // 0x660 (0x4)
	enum ECameraResetAxes CameraResetAxes; // 0x664 (0x1)
	bool bUnlockConsoleFPS; // 0x665 (0x1)
	bool bConsoleFPS60; // 0x666 (0x1)
	unsigned char unreflected_667[0x1]; // 0x667 (0x1) 
	struct TMap<struct FGameplayTag, bool> UserHUDVisibiltyMappings; // 0x668 (0x50)
	struct TMap<struct FGameplayTag, bool> UserHUDDefaultMappings; // 0x6b8 (0x50)
	struct TMap<int, enum EFortPreferredItemSlotItemType> UserHUDQuickbarSlotPreferredItemTypes; // 0x708 (0x50)
	enum EPartyType LastPartyType; // 0x758 (0x1)
	bool bLastLeaderInvitesOnly; // 0x759 (0x1)
	bool bLastLeaderFriendsOnly; // 0x75a (0x1)
	bool bAudioVolumesInitialized; // 0x75b (0x1)
	float MasterVolume; // 0x75c (0x4)
	float MusicVolume; // 0x760 (0x4)
	float SoundFXVolume; // 0x764 (0x4)
	float PIPVolume; // 0x768 (0x4)
	float DialogVolume; // 0x76c (0x4)
	float ChatVolume; // 0x770 (0x4)
	float CinematicsVolume; // 0x774 (0x4)
	bool bEnableSubtitles; // 0x778 (0x1)
	enum ESubtitleDisplayTextSize SubtitleTextSize; // 0x779 (0x1)
	enum ESubtitleDisplayTextColor SubtitleTextColor; // 0x77a (0x1)
	enum ESubtitleDisplayTextBorder SubtitleTextBorder; // 0x77b (0x1)
	enum ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity; // 0x77c (0x1)
	enum ESocialCommsPermission VoiceChatSetting; // 0x77d (0x1)
	bool bEnableVoiceChat; // 0x77e (0x1)
	bool bEnableVoiceChat3D; // 0x77f (0x1)
	bool bEnableVoiceChatPTT; // 0x780 (0x1)
	bool bEnableHousepartyCasting; // 0x781 (0x1)
	bool bEnablePeripheralLighting; // 0x782 (0x1)
	bool bShowViewerCount; // 0x783 (0x1)
	bool bAnonymousMode; // 0x784 (0x1)
	bool bAnonymousCharacterMode; // 0x785 (0x1)
	bool bShowSeasonLevel; // 0x786 (0x1)
	bool bHideOtherPlayerNames; // 0x787 (0x1)
	int HiddenMatchmakingDelayMaxSeconds; // 0x788 (0x4)
	bool bReplayRecordingIndicatorEnabled; // 0x78c (0x1)
	bool bReplayRecordingEnabled; // 0x78d (0x1)
	bool bLargeTeamReplayRecordingEnabled; // 0x78e (0x1)
	bool bCreativeModeReplayRecordingEnabled; // 0x78f (0x1)
	bool bHighQualityReplayRecordingEnabled; // 0x790 (0x1)
	bool bShadowPlayHighlightsEnabled; // 0x791 (0x1)
	bool bPlaceDangerMarkerWhenTargeting; // 0x792 (0x1)
	bool bShowGlobalChatEnabled; // 0x793 (0x1)
	float InitialGammaValue; // 0x794 (0x4)
	bool bInitialUseTapToShoot; // 0x798 (0x1)
	bool bInitialAutoOpenDoors; // 0x799 (0x1)
	bool bInitialAutoPickupWeapons; // 0x79a (0x1)
	bool bInitialAutoPickupWeaponsConsolePC; // 0x79b (0x1)
	bool bInitialEnablePreferredItemSlots; // 0x79c (0x1)
	bool bInitialAutoSortConsumablesToRight; // 0x79d (0x1)
	bool bInitialEnableTryBuildOnFocus; // 0x79e (0x1)
	unsigned char unreflected_79f[0x1]; // 0x79f (0x1) 
	float InitialEditButtonHoldTime; // 0x7a0 (0x4)
	float InitialSlideButtonHoldTime; // 0x7a4 (0x4)
	bool bStWQuickbarUpdated; // 0x7a8 (0x1)
	bool bShouldShowBothQuickbars; // 0x7a9 (0x1)
	enum ELicensedAudioTreatment LicensedAudioTreatment; // 0x7aa (0x1)
	enum EColorBlindMode ColorBlindMode; // 0x7ab (0x1)
	float ColorBlindStrength; // 0x7ac (0x4)
	bool bVisualizeAudioSources; // 0x7b0 (0x1)
	enum EColorBlindMode InitialColorBlindMode; // 0x7b1 (0x1)
	unsigned char unreflected_7b2[0x2]; // 0x7b2 (0x2) 
	float InitialColorBlindStrength; // 0x7b4 (0x4)
	bool bIgnoreGamepadInput; // 0x7b8 (0x1)
	bool bInitialIgnoreGamepadInput; // 0x7b9 (0x1)
	bool bLockPrimaryInputMethodToMouse; // 0x7ba (0x1)
	bool bLockPrimaryInputMethodToMouseInitial; // 0x7bb (0x1)
	bool bEnableRudderControl; // 0x7bc (0x1)
	unsigned char unreflected_7bd[0x3]; // 0x7bd (0x3) 
	float RudderDeadZone; // 0x7c0 (0x4)
	float RudderMaxThrottle; // 0x7c4 (0x4)
	bool bDoNotRemindAboutMultiSubs; // 0x7c8 (0x1)
	unsigned char unreflected_7c9[0x7]; // 0x7c9 (0x7) 
	struct FString SelectedRegionId; // 0x7d0 (0x10)
	struct FString PrevSavedRegion; // 0x7e0 (0x10)
	struct FString LastKnownBestRegionId; // 0x7f0 (0x10)
	int CrossplayPreference; // 0x800 (0x4)
	unsigned char unreflected_804[0x4]; // 0x804 (0x4) 
	struct TSet<enum EFortInventoryCustomFilter> CustomInventoryFilterSet; // 0x808 (0x50)
	struct TArray<struct FName> WatchedVideoIDs; // 0x858 (0x10)
	bool bHasMigratedCCSSettings; // 0x868 (0x1)
	unsigned char unreflected_869[0x3]; // 0x869 (0x3) 
	int InitializeKWSWithCCSSettings; // 0x86c (0x4)
	int CurrentDeltaUpdateKWSWithCCSSettings; // 0x870 (0x4)
	int SeenReviewSettingsModal; // 0x874 (0x4)
	int SeenParentalControlsUpdatedModal; // 0x878 (0x4)
	int SeenEnterCabinModeModal; // 0x87c (0x4)
	bool bAllowAudioInBackground; // 0x880 (0x1)
	enum EFortAllowBackgroundAudioSetting AllowAudioInBackground; // 0x881 (0x1)
	bool bUsePowerSavingMode; // 0x882 (0x1)
	bool bHidePerkRecombobulatorHelp; // 0x883 (0x1)
	bool bHideStwItemRefundHelp; // 0x884 (0x1)
	enum EAndroidAppStoreTypes SelectedAndroidAppStore; // 0x885 (0x1)
	unsigned char unreflected_886[0x2]; // 0x886 (0x2) 
	int AndroidStoreSelectionRevision; // 0x888 (0x4)
	bool bHasDisabledAutoSlottingOfSurvivorSquadsAfterQuest; // 0x88c (0x1)
	bool bHasEnabledAutoSlottingOfSurvivorSquadsDuringOnboarding; // 0x88d (0x1)
	bool bWantsAutoSlottingOfSurvivorSquads; // 0x88e (0x1)
	unsigned char unreflected_88f[0x1]; // 0x88f (0x1) 
	struct TArray<struct FHUDLayoutData> CustomHUDLayoutData; // 0x890 (0x10)
	struct FFireModeData FireModeData; // 0x8a0 (0x5)
	bool bRequiresHUDConversion; // 0x8a5 (0x1)
	unsigned char unreflected_8a6[0x2]; // 0x8a6 (0x2) 
	struct FFortMobileHUDProfileContainer HUDProfileContainer; // 0x8a8 (0x28)
	enum EQuestMapScreenMode QuestMapMode; // 0x8d0 (0x1)
	unsigned char unreflected_8d1[0x7]; // 0x8d1 (0x7) 
	struct FString QuestMapEventName; // 0x8d8 (0x10)
	bool bAutoJoinGameServerChannel; // 0x8e8 (0x1)
	bool bEnablePartyVoiceChannel; // 0x8e9 (0x1)
	bool bEnableGameVoiceChannel; // 0x8ea (0x1)
	bool bAllowSidekickFeature1; // 0x8eb (0x1)
	bool bShowVoiceIndicatorsNotifications; // 0x8ec (0x1)
	unsigned char unreflected_8ed[0x3]; // 0x8ed (0x3) 
	struct TSet<struct FString> SeenEventFlags; // 0x8f0 (0x50)
	struct TMap<int, int> ContextTutorialSeenCount; // 0x940 (0x50)
	struct TMap<struct FGameplayTag, int> ContextTutorialSeenCountGameplayTag; // 0x990 (0x50)
	bool bHasCompletedGuidedTutorial; // 0x9e0 (0x1)
	unsigned char unreflected_9e1[0x7]; // 0x9e1 (0x7) 
	struct TArray<enum EKWSSetttingIndividalMigration> KWSSettingAlreadyMigrated; // 0x9e8 (0x10)
	int CapMipsExperimentVersion; // 0x9f8 (0x4)
	bool bHasCompletedHUDLayoutToolV2Tutorial; // 0x9fc (0x1)
	bool FortClientSettingRecord; // 0x9fd (0x1)
	enum EHitNumbersMode HitNumbersMode; // 0x9fe (0x1)
	enum EHitFeedbackMode HitFeedbackMode; // 0x9ff (0x1)
	bool bTargetTypeIndicatorVisible; // 0xa00 (0x1)
	bool bShowTemperature; // 0xa01 (0x1)
	bool bNotifyUsersWhenPlaying; // 0xa02 (0x1)
	unsigned char unreflected_a03[0x1]; // 0xa03 (0x1) 
	bool bPlayerSurveysAllowed; // 0xa04 (0x1)
	bool bClipRemindersEnabled; // 0xa05 (0x1)
	enum EPostpartyClippingState PostpartyClippingState; // 0xa06 (0x1)
	unsigned char unreflected_a07[0x1]; // 0xa07 (0x1) 
	struct FDateTime* FlagSelectionLastUpdated; // 0xa08 (0x8)
	bool bUseSmallInventoryTiles; // 0xa10 (0x1)
	unsigned char unreflected_a11[0x7]; // 0xa11 (0x7) 
	struct TMap<unsigned char, uint32_t> LastSeenHashByShopSection; // 0xa18 (0x50)
	struct TMap<struct FName, uint32_t> LastSeenHashByShopSectionId; // 0xa68 (0x50)
	struct FDateTime* LastTokenRefreshDateNotified; // 0xab8 (0x8)
	bool HasSeenCommunityVotingTutorial; // 0xac0 (0x1)
	unsigned char unreflected_ac1[0x3]; // 0xac1 (0x3) 
	int LastSeenCommunityVotingTutorialVersion; // 0xac4 (0x4)
	struct FString LastSeenCommunityVotingVersion; // 0xac8 (0x10)
	struct FString LastSeenStandaloneOfferId; // 0xad8 (0x10)
	struct TMap<enum EFortAutoMulchCategory, enum EFortAutoMulchMode> AutoMulchModeMap; // 0xae8 (0x50)
	struct TArray<struct FPlayerLastSelectedPreferredProvider> LastPlayerSelectedPreferredProvider; // 0xb38 (0x10)
	unsigned char QuestListSortType; // 0xb48 (0x1)
	unsigned char unreflected_b49[0x3]; // 0xb49 (0x3) 
	struct FGameplayTag QuestScreenTabGameplayTag; // 0xb4c (0x4)
	unsigned char InZoneMapScreenTab; // 0xb50 (0x1)
	unsigned char unreflected_b51[0x7]; // 0xb51 (0x7) 
	struct TSet<int> AttendingSocialEventIds; // 0xb58 (0x50)
	struct TArray<struct FString> EventAttendance; // 0xba8 (0x10)
	struct TSet<struct FString> LastSubscriptionIds; // 0xbb8 (0x50)
	struct FDateTime* LastMultiSubRenewalDate; // 0xc08 (0x8)
	struct FGameplayTagContainer SeenOnboardingTutorials; // 0xc10 (0x20)
	int8_t NumDiscoveryFlowTooltipsRemaining; // 0xc30 (0x1)
	bool bAutoExposureEnabled; // 0xc31 (0x1)
	unsigned char unreflected_c32[0x2]; // 0xc32 (0x2) 
	float ManualExposureBias; // 0xc34 (0x4)
	float FocalLength; // 0xc38 (0x4)
	float Aperture; // 0xc3c (0x4)
	bool bAutoFocusEnabled; // 0xc40 (0x1)
	unsigned char unreflected_c41[0x3]; // 0xc41 (0x3) 
	float ManualFocusDistance; // 0xc44 (0x4)
	bool bPlayerOutlinesEnabled; // 0xc48 (0x1)
	bool bFirstPlaceHighlightEnabled; // 0xc49 (0x1)
	bool bStormEffectsEnabled; // 0xc4a (0x1)
	unsigned char unreflected_c4b[0x1]; // 0xc4b (0x1) 
	float SafeZoneOpacity; // 0xc4c (0x4)
	bool bRelevancyZoneVisible; // 0xc50 (0x1)
	bool bHighQualityFxEnabled; // 0xc51 (0x1)
	bool bDamageFxEnabled; // 0xc52 (0x1)
	enum EThirdPersonAutoFollowMode ThirdPersonAutoFollowMode; // 0xc53 (0x1)
	float ThirdPersonDistanceToSubject; // 0xc54 (0x4)
	bool bThirdPersonCameraCollision; // 0xc58 (0x1)
	bool bShareLensSettings; // 0xc59 (0x1)
	bool bDroneIgnoreJump; // 0xc5a (0x1)
	bool bShowSessionIDWatermark; // 0xc5b (0x1)
	bool bBattleMapShowTimeIndicator; // 0xc5c (0x1)
	bool bBattleMapShowNearbyChests; // 0xc5d (0x1)
	bool bBattleMapShowAllSquadMembers; // 0xc5e (0x1)
	bool bBattleMapAutomaticCameraPlacement; // 0xc5f (0x1)
	bool bNamePlatesEnabled; // 0xc60 (0x1)
	bool bShowTeamColor; // 0xc61 (0x1)
	unsigned char unreflected_c62[0x2]; // 0xc62 (0x2) 
	float ViewDistance; // 0xc64 (0x4)
	float LowDetailDistance; // 0xc68 (0x4)
	float ArrowDistance; // 0xc6c (0x4)
	bool bScalingOptionsEnabled; // 0xc70 (0x1)
	unsigned char unreflected_c71[0x3]; // 0xc71 (0x3) 
	float HighDetailScaleMin; // 0xc74 (0x4)
	float HighDetailScaleMax; // 0xc78 (0x4)
	float LowDetailScaleMin; // 0xc7c (0x4)
	float LowDetailScaleMax; // 0xc80 (0x4)
	float ArrowScaleMin; // 0xc84 (0x4)
	float ArrowScaleMax; // 0xc88 (0x4)
	bool bArrowColorEnabled; // 0xc8c (0x1)
	bool bDisplaySessionRank; // 0xc8d (0x1)
	enum ESpectatorSquadIdMode SquadIdMode; // 0xc8e (0x1)
	unsigned char unreflected_c8f[0x1]; // 0xc8f (0x1) 
	struct TMap<struct FString, struct FString> MediaPartnerData; // 0xc90 (0x50)
	struct TArray<struct FString> HotTamalesWithVeggiesCache; // 0xce0 (0x10)
	bool bDirty; // 0xcf0 (0x1)
	unsigned char unreflected_cf1[0x3]; // 0xcf1 (0x3) 
	unsigned char bSaveToCloud; // 0xcf4 (0x1)
	unsigned char unreflected_cf5[0x3]; // 0xcf5 (0x3) 
	enum ECloudFileState CloudFileState; // 0xcf8 (0x1)
	unsigned char unreflected_cf9[0x3]; // 0xcf9 (0x3) 
	uint32_t bDisableCloudSave; // 0xcfc (0x4)
	int LastRequestSaveCount; // 0xd00 (0x4)
	int LastAttemptedSaveCount; // 0xd04 (0x4)
	double LastSaveAttemptTime; // 0xd08 (0x8)
	double NextCloudSaveTime; // 0xd10 (0x8)
	unsigned char unreflected_d18[0x448]; // 0xd18 (0x448) 
	struct TArray<struct FSettingsSaveContextBehaviorDefinition> ContextBehaviorDefinitions; // 0x1160 (0x10)
	unsigned char unreflected_1170[0x50]; // 0x1170 (0x50) 
	struct FSettingsSaveContextBehaviorDefinition DefaultContextBehaviorDefinition; // 0x11c0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetVoiceChatSettings (Underlying native function: SetVoiceChatSettings 0x88aa1cc)
	void SetVoiceChatSettings(enum ESocialCommsPermission& InSetting); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetVoiceChatPTTEnabled (Underlying native function: SetVoiceChatPTTEnabled 0x88aa134)
	void SetVoiceChatPTTEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetVoiceChat3DEnabled (Underlying native function: SetVoiceChat3DEnabled 0x88aa09c)
	void SetVoiceChat3DEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetVisualizeAudioSources (Underlying native function: SetVisualizeAudioSources 0x88aa010)
	void SetVisualizeAudioSources(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetViewDistance (Underlying native function: SetViewDistance 0x88a9f8c)
	void SetViewDistance(float& InViewDistance); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUsePowerSavingMode (Underlying native function: SetUsePowerSavingMode 0x88a9f00)
	void SetUsePowerSavingMode(bool& bNewUsePowerSavingMode); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseLegacyControls (Underlying native function: SetUseLegacyControls 0x88a9e7c)
	void SetUseLegacyControls(bool& NewUseLegacyControls); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseHoldToSwapPickup (Underlying native function: SetUseHoldToSwapPickup 0x88a9df0)
	void SetUseHoldToSwapPickup(bool& InUseHoldToSwapPickup); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseGamepadEditModeAimAssist (Underlying native function: SetUseGamepadEditModeAimAssist 0x88a9d64)
	void SetUseGamepadEditModeAimAssist(bool& InUseGamepadEditModeAimAssist); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseGamepadAutoRun (Underlying native function: SetUseGamepadAutoRun 0x88a9cd8)
	void SetUseGamepadAutoRun(bool& InUseGamepadAutoRun); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseFollowCamera (Underlying native function: SetUseFollowCamera 0x88a9c4c)
	void SetUseFollowCamera(bool& InbUseFollowCamera); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseFirstPersonCamera (Underlying native function: SetUseFirstPersonCamera 0x88a9bc0)
	void SetUseFirstPersonCamera(bool& bUseFirstPerson); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseAutoCenter (Underlying native function: SetUseAutoCenter 0x88a9b34)
	void SetUseAutoCenter(bool& InbUseAutoCenter); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetUseAdvancedOptions (Underlying native function: SetUseAdvancedOptions 0x88a9ab0)
	void SetUseAdvancedOptions(bool& NewUseAdvancedOptions); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTurboBuild (Underlying native function: SetTurboBuild 0x88a9a30)
	void SetTurboBuild(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTriggerHapticsUseThreshold (Underlying native function: SetTriggerHapticsUseThreshold 0x88a99a4)
	void SetTriggerHapticsUseThreshold(bool& bNewTriggerPullUsesHapticThreshold); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTriggerHapticsStrength (Underlying native function: SetTriggerHapticsStrength 0x88a9918)
	void SetTriggerHapticsStrength(unsigned char& NewTriggerHapticStrength); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTriggerHapticsStartPosition (Underlying native function: SetTriggerHapticsStartPosition 0x88a988c)
	void SetTriggerHapticsStartPosition(unsigned char& NewTriggerHapticStartPosition); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTriggerHapticsEnabled (Underlying native function: SetTriggerHapticsEnabled 0x88a9800)
	void SetTriggerHapticsEnabled(bool& bNewTriggerHapticsEnabled); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchVerticalMultiplier (Underlying native function: SetTouchVerticalMultiplier 0x88a976c)
	void SetTouchVerticalMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchTargetingMultiplier (Underlying native function: SetTouchTargetingMultiplier 0x88a96d8)
	void SetTouchTargetingMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchScopedMultiplier (Underlying native function: SetTouchScopedMultiplier 0x88a9644)
	void SetTouchScopedMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchLookSensitivitySetting (Underlying native function: SetTouchLookSensitivitySetting 0x88a95b0)
	void SetTouchLookSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchLookAccelerationMultiplier (Underlying native function: SetTouchLookAccelerationMultiplier 0x88a951c)
	void SetTouchLookAccelerationMultiplier(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchInteractMode (Underlying native function: SetTouchInteractMode 0x88a9490)
	void SetTouchInteractMode(enum ETouchInteractMode& bNewMode); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchEditModeMultiplier (Underlying native function: SetTouchEditModeMultiplier 0x88a93fc)
	void SetTouchEditModeMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchEditEnabled (Underlying native function: SetTouchEditEnabled 0x88a9370)
	void SetTouchEditEnabled(bool& bTouchEdit); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTouchBuildingMultiplier (Underlying native function: SetTouchBuildingMultiplier 0x88a92dc)
	void SetTouchBuildingMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetToggleSprint (Underlying native function: SetToggleSprint 0x88a925c)
	void SetToggleSprint(bool& bToggle); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetThirdPersonDistanceToSubject (Underlying native function: SetThirdPersonDistanceToSubject 0x88a91d8)
	void SetThirdPersonDistanceToSubject(float& InThirdPersonDistanceToSubject); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetThirdPersonCameraCollision (Underlying native function: SetThirdPersonCameraCollision 0x88a9158)
	void SetThirdPersonCameraCollision(bool& bInThirdPersonCameraCollision); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetThirdPersonAutoFollowMode (Underlying native function: SetThirdPersonAutoFollowMode 0x88a90d8)
	void SetThirdPersonAutoFollowMode(enum EThirdPersonAutoFollowMode& InThirdPersonAutoFollowMode); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTargetTypeIndicatorVisible (Underlying native function: SetTargetTypeIndicatorVisible 0x88a8e94)
	void SetTargetTypeIndicatorVisible(bool& bNewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTargetingToggleableWithTouch (Underlying native function: SetTargetingToggleableWithTouch 0x88a904c)
	void SetTargetingToggleableWithTouch(bool& bToggle); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTargetingToggleable (Underlying native function: SetTargetingToggleable 0x88a8fc0)
	void SetTargetingToggleable(bool& bToggle); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTargetingMultiplier (Underlying native function: SetTargetingMultiplier 0x88a8f2c)
	void SetTargetingMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTapInteract (Underlying native function: SetTapInteract 0x88a8e08)
	void SetTapInteract(bool& bTapInteract); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTankKBMCameraControls (Underlying native function: SetTankKBMCameraControls 0x88a8d88)
	void SetTankKBMCameraControls(bool& bInTankKBMCameraControls); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetTankGamepadCameraControls (Underlying native function: SetTankGamepadCameraControls 0x88a8d08)
	void SetTankGamepadCameraControls(bool& bInTankGamepadCameraControls); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSubtitlesTextSize (Underlying native function: SetSubtitlesTextSize 0x88a8c74)
	void SetSubtitlesTextSize(enum ESubtitleDisplayTextSize& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSubtitlesTextColor (Underlying native function: SetSubtitlesTextColor 0x88a8be0)
	void SetSubtitlesTextColor(enum ESubtitleDisplayTextColor& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSubtitlesTextBorder (Underlying native function: SetSubtitlesTextBorder 0x88a8b4c)
	void SetSubtitlesTextBorder(enum ESubtitleDisplayTextBorder& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSubtitlesEnabled (Underlying native function: SetSubtitlesEnabled 0x88a8ac0)
	void SetSubtitlesEnabled(bool& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSubtitlesBackgroundOpacity (Underlying native function: SetSubtitlesBackgroundOpacity 0x88a8a2c)
	void SetSubtitlesBackgroundOpacity(enum ESubtitleDisplayBackgroundOpacity& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetStormEffectsEnabled (Underlying native function: SetStormEffectsEnabled 0x88a89ac)
	void SetStormEffectsEnabled(bool& bInStormEffectsEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSquadIdMode (Underlying native function: SetSquadIdMode 0x88a892c)
	void SetSquadIdMode(enum ESpectatorSquadIdMode& InSquadIdMode); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSoundFXVolume (Underlying native function: SetSoundFXVolume 0x88a8898)
	void SetSoundFXVolume(float& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSmartBuildEnabled (Underlying native function: SetSmartBuildEnabled 0x88a880c)
	void SetSmartBuildEnabled(bool& bNewSmartBuildEnabled); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSlideButtonHoldTime (Underlying native function: SetSlideButtonHoldTime 0x88a8778)
	void SetSlideButtonHoldTime(float& NewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowVoiceIndicators (Underlying native function: SetShowVoiceIndicators 0x88a86e0)
	void SetShowVoiceIndicators(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowViewerCountEnabled (Underlying native function: SetShowViewerCountEnabled 0x88a8648)
	void SetShowViewerCountEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowTemperature (Underlying native function: SetShowTemperature 0x88a85bc)
	void SetShowTemperature(bool& bNewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowTeamColor (Underlying native function: SetShowTeamColor 0x88a853c)
	void SetShowTeamColor(bool& bInShowTeamColor); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowSessionIDWatermark (Underlying native function: SetShowSessionIDWatermark 0x88a84bc)
	void SetShowSessionIDWatermark(bool& bInSessionIDWatermark); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowSeasonLevel (Underlying native function: SetShowSeasonLevel 0x88a8430)
	void SetShowSeasonLevel(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowPickupDotsOnMapByRarity (Underlying native function: SetShowPickupDotsOnMapByRarity 0x88a8398)
	void SetShowPickupDotsOnMapByRarity(enum EFortRarity& InRarity); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShowGlobalChatEnabled (Underlying native function: SetShowGlobalChatEnabled 0x88a830c)
	void SetShowGlobalChatEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShouldShowBothQuickbars (Underlying native function: SetShouldShowBothQuickbars 0x88a8274)
	void SetShouldShowBothQuickbars(bool& bNewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShareLensSettings (Underlying native function: SetShareLensSettings 0x88a81f4)
	void SetShareLensSettings(bool& bInShareLensSettings); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetShadowPlayHighlightsEnabled (Underlying native function: SetShadowPlayHighlightsEnabled 0x88a8168)
	void SetShadowPlayHighlightsEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetScopedMultiplier (Underlying native function: SetScopedMultiplier 0x88a80d4)
	void SetScopedMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetScalingOptionsEnabled (Underlying native function: SetScalingOptionsEnabled 0x88a8054)
	void SetScalingOptionsEnabled(bool& bInScalingOptionsEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetScaleWindingWithZoom (Underlying native function: SetScaleWindingWithZoom 0x88a7fc8)
	void SetScaleWindingWithZoom(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetScaleSensitivityWithZoom (Underlying native function: SetScaleSensitivityWithZoom 0x88a7f3c)
	void SetScaleSensitivityWithZoom(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetSafeZoneOpacity (Underlying native function: SetSafeZoneOpacity 0x88a7eb8)
	void SetSafeZoneOpacity(float& InSafeZoneOpacity); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetRudderMaxThrottle (Underlying native function: SetRudderMaxThrottle 0x88a7e24)
	void SetRudderMaxThrottle(float& NewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetRudderDeadZone (Underlying native function: SetRudderDeadZone 0x88a7d90)
	void SetRudderDeadZone(float& NewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetReplayRecordingIndicatorEnabled (Underlying native function: SetReplayRecordingIndicatorEnabled 0x88a7cf8)
	void SetReplayRecordingIndicatorEnabled(bool& bEnabled); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetReplayRecordingEnabled (Underlying native function: SetReplayRecordingEnabled 0x88a7c6c)
	void SetReplayRecordingEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetRelevancyZoneVisible (Underlying native function: SetRelevancyZoneVisible 0x88a7bec)
	void SetRelevancyZoneVisible(bool& bInRelevancyZoneVisible); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetQuickEditEnabled (Underlying native function: SetQuickEditEnabled 0x88a7b60)
	void SetQuickEditEnabled(bool& bNewQuickEditEnabled); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPreferredItemTypeSlotIndex_5 (Underlying native function: SetPreferredItemTypeSlotIndex_5 0x88a7adc)
	void SetPreferredItemTypeSlotIndex5(enum EFortPreferredItemSlotItemType& ItemType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPreferredItemTypeSlotIndex_4 (Underlying native function: SetPreferredItemTypeSlotIndex_4 0x88a7a58)
	void SetPreferredItemTypeSlotIndex4(enum EFortPreferredItemSlotItemType& ItemType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPreferredItemTypeSlotIndex_3 (Underlying native function: SetPreferredItemTypeSlotIndex_3 0x88a79d4)
	void SetPreferredItemTypeSlotIndex3(enum EFortPreferredItemSlotItemType& ItemType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPreferredItemTypeSlotIndex_2 (Underlying native function: SetPreferredItemTypeSlotIndex_2 0x88a7950)
	void SetPreferredItemTypeSlotIndex2(enum EFortPreferredItemSlotItemType& ItemType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPreferredItemTypeSlotIndex_1 (Underlying native function: SetPreferredItemTypeSlotIndex_1 0x88a78cc)
	void SetPreferredItemTypeSlotIndex1(enum EFortPreferredItemSlotItemType& ItemType); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPlayerSurveysAllowed (Underlying native function: SetPlayerSurveysAllowed 0x88a7840)
	void SetPlayerSurveysAllowed(bool& Value); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPlayerOutlinesEnabled (Underlying native function: SetPlayerOutlinesEnabled 0x88a77c0)
	void SetPlayerOutlinesEnabled(bool& bInPlayerOutlinesEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPlaceDangerMarkerWhenTargeting (Underlying native function: SetPlaceDangerMarkerWhenTargeting 0x88a7734)
	void SetPlaceDangerMarkerWhenTargeting(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPIPVolume (Underlying native function: SetPIPVolume 0x88a7614)
	void SetPIPVolume(float& InVolume); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetPeripheralLightingEnabled (Underlying native function: SetPeripheralLightingEnabled 0x88a76a8)
	void SetPeripheralLightingEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetNumDiscoveryFlowTooltipsRemaining (Underlying native function: SetNumDiscoveryFlowTooltipsRemaining 0x88a7588)
	void SetNumDiscoveryFlowTooltipsRemaining(int8_t& InRemaining); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetNotifyUsersWhenPlaying (Underlying native function: SetNotifyUsersWhenPlaying 0x88a74f4)
	void SetNotifyUsersWhenPlaying(bool& Value); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetNameplatesEnabled (Underlying native function: SetNameplatesEnabled 0x88a7474)
	void SetNameplatesEnabled(bool& bInNameplatesEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMusicVolume (Underlying native function: SetMusicVolume 0x88a73e0)
	void SetMusicVolume(float& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMoveStickAcceleratesVehicles (Underlying native function: SetMoveStickAcceleratesVehicles 0x88a7354)
	void SetMoveStickAcceleratesVehicles(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMouseSensitivityY (Underlying native function: SetMouseSensitivityY 0x88a72d0)
	void SetMouseSensitivityY(float& InSensitivityY); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMouseSensitivityX (Underlying native function: SetMouseSensitivityX 0x88a724c)
	void SetMouseSensitivityX(float& InSensitivityX); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMouseSensitivityMultiplierForAircraft (Underlying native function: SetMouseSensitivityMultiplierForAircraft 0x88a71c8)
	void SetMouseSensitivityMultiplierForAircraft(float& InSensitivityMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMotionYawAxisSetting (Underlying native function: SetMotionYawAxisSetting 0x88a7148)
	void SetMotionYawAxisSetting(enum EFortMotionYawAxis& InSetting); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMotionTargetingMultiplier (Underlying native function: SetMotionTargetingMultiplier 0x88a70b4)
	void SetMotionTargetingMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMotionScopedMultiplier (Underlying native function: SetMotionScopedMultiplier 0x88a7020)
	void SetMotionScopedMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMotionHarvestingToolMultiplier (Underlying native function: SetMotionHarvestingToolMultiplier 0x88a6f8c)
	void SetMotionHarvestingToolMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMotionControlsEnabledSetting (Underlying native function: SetMotionControlsEnabledSetting 0x88a6f0c)
	void SetMotionControlsEnabledSetting(bool& InSetting); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetMasterVolume (Underlying native function: SetMasterVolume 0x88a6e78)
	void SetMasterVolume(float& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetManualFocusDistance (Underlying native function: SetManualFocusDistance 0x88a6df4)
	void SetManualFocusDistance(float& InManualFocusDistance); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetManualExposureBias (Underlying native function: SetManualExposureBias 0x88a6d70)
	void SetManualExposureBias(float& InManualExposureBias); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLowDetailScaleMin (Underlying native function: SetLowDetailScaleMin 0x88a6cec)
	void SetLowDetailScaleMin(float& InLowDetailScaleMin); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLowDetailScaleMax (Underlying native function: SetLowDetailScaleMax 0x88a6c68)
	void SetLowDetailScaleMax(float& InLowDetailScaleMax); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLowDetailDistance (Underlying native function: SetLowDetailDistance 0x88a6be4)
	void SetLowDetailDistance(float& InLowDetailDistance); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookVerticalSpeedAds (Underlying native function: SetLookVerticalSpeedAds 0x88a6b60)
	void SetLookVerticalSpeedAds(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookVerticalSpeed (Underlying native function: SetLookVerticalSpeed 0x88a6adc)
	void SetLookVerticalSpeed(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookVerticalBoostSpeedAds (Underlying native function: SetLookVerticalBoostSpeedAds 0x88a6a58)
	void SetLookVerticalBoostSpeedAds(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookVerticalBoostSpeed (Underlying native function: SetLookVerticalBoostSpeed 0x88a69d4)
	void SetLookVerticalBoostSpeed(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookSensitivityPresetAds (Underlying native function: SetLookSensitivityPresetAds 0x88a6950)
	void SetLookSensitivityPresetAds(enum EFortGamepadSensitivity& NewPreset); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookSensitivityPreset (Underlying native function: SetLookSensitivityPreset 0x88a68cc)
	void SetLookSensitivityPreset(enum EFortGamepadSensitivity& NewPreset); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookInputCurve (Underlying native function: SetLookInputCurve 0x88a6848)
	void SetLookInputCurve(enum EFortGamepadLookInputCurve& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookHorizontalSpeedAds (Underlying native function: SetLookHorizontalSpeedAds 0x88a67c4)
	void SetLookHorizontalSpeedAds(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookHorizontalSpeed (Underlying native function: SetLookHorizontalSpeed 0x88a6740)
	void SetLookHorizontalSpeed(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookHorizontalBoostSpeedAds (Underlying native function: SetLookHorizontalBoostSpeedAds 0x88a66bc)
	void SetLookHorizontalBoostSpeedAds(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookHorizontalBoostSpeed (Underlying native function: SetLookHorizontalBoostSpeed 0x88a6638)
	void SetLookHorizontalBoostSpeed(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookEditModeMultiplier (Underlying native function: SetLookEditModeMultiplier 0x88a65ac)
	void SetLookEditModeMultiplier(float& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookEaseTime (Underlying native function: SetLookEaseTime 0x88a6520)
	void SetLookEaseTime(float& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookBuildModeMultiplier (Underlying native function: SetLookBuildModeMultiplier 0x88a6494)
	void SetLookBuildModeMultiplier(float& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookBoostAccelerationTimeAds (Underlying native function: SetLookBoostAccelerationTimeAds 0x88a6408)
	void SetLookBoostAccelerationTimeAds(float& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLookBoostAccelerationTime (Underlying native function: SetLookBoostAccelerationTime 0x88a637c)
	void SetLookBoostAccelerationTime(float& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLockPrimaryInputMethodToMouse (Underlying native function: SetLockPrimaryInputMethodToMouse 0x88a62f0)
	void SetLockPrimaryInputMethodToMouse(bool& bLock); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLocalNotificationsEnabled (Underlying native function: SetLocalNotificationsEnabled 0x88a6264)
	void SetLocalNotificationsEnabled(bool& bEnabled); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLicensedAudioTreatment (Underlying native function: SetLicensedAudioTreatment 0x88a61cc)
	void SetLicensedAudioTreatment(enum ELicensedAudioTreatment& InLicensedAudioTreatment); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetLargeTeamReplayRecordingEnabled (Underlying native function: SetLargeTeamReplayRecordingEnabled 0x88a6140)
	void SetLargeTeamReplayRecordingEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetKeyboardStrafeDiagonal (Underlying native function: SetKeyboardStrafeDiagonal 0x88a60ac)
	void SetKeyboardStrafeDiagonal(float& InAngle); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetKeyboardForwardDiagonal (Underlying native function: SetKeyboardForwardDiagonal 0x88a6018)
	void SetKeyboardForwardDiagonal(float& InAngle); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetKeyboardBackwardDiagonal (Underlying native function: SetKeyboardBackwardDiagonal 0x88a5f84)
	void SetKeyboardBackwardDiagonal(float& InAngle); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetJoyConMotionSelection (Underlying native function: SetJoyConMotionSelection 0x88a5ef8)
	void SetJoyConMotionSelection(enum EJoyConMotionSelection& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInvertedYawForMotion (Underlying native function: SetInvertedYawForMotion 0x88a5e6c)
	void SetInvertedYawForMotion(bool& bInvert); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInvertedYaw (Underlying native function: SetInvertedYaw 0x88a5dec)
	void SetInvertedYaw(bool& bInvert); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInvertedPitchForMotion (Underlying native function: SetInvertedPitchForMotion 0x88a5d60)
	void SetInvertedPitchForMotion(bool& bInvert); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInvertedPitchForAircraftSecondary (Underlying native function: SetInvertedPitchForAircraftSecondary 0x88a5cd4)
	void SetInvertedPitchForAircraftSecondary(bool& bInvert); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInvertedPitchForAircraftPrimary (Underlying native function: SetInvertedPitchForAircraftPrimary 0x88a5c48)
	void SetInvertedPitchForAircraftPrimary(bool& bInvert); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInvertedPitch (Underlying native function: SetInvertedPitch 0x88a5bc8)
	void SetInvertedPitch(bool& bInvert); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetInstantBoostWhenBuilding (Underlying native function: SetInstantBoostWhenBuilding 0x88a5b44)
	void SetInstantBoostWhenBuilding(bool& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetIgnoreGamepadInput (Underlying native function: SetIgnoreGamepadInput 0x88a5ab8)
	void SetIgnoreGamepadInput(bool& bIgnore); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHUDScaleMultiplier (Underlying native function: SetHUDScaleMultiplier 0x88a5354)
	void SetHUDScaleMultiplier(float& InHUDScaleMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHUDScale (Underlying native function: SetHUDScale 0x88a52c0)
	void SetHUDScale(float& InScale); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHousepartyCastingEnabled (Underlying native function: SetHousepartyCastingEnabled 0x88a5a2c)
	void SetHousepartyCastingEnabled(bool& bEnable); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHitNumbersMode (Underlying native function: SetHitNumbersMode 0x88a5994)
	void SetHitNumbersMode(enum EHitNumbersMode& NewMode); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHitFeedbackMode (Underlying native function: SetHitFeedbackMode 0x88a58fc)
	void SetHitFeedbackMode(enum EHitFeedbackMode& NewMode); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHighResTexturesReminderEnabled (Underlying native function: SetHighResTexturesReminderEnabled 0x88a5870)
	void SetHighResTexturesReminderEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHighQualityReplayRecordingEnabled (Underlying native function: SetHighQualityReplayRecordingEnabled 0x88a57e4)
	void SetHighQualityReplayRecordingEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHighQualityFxEnabled (Underlying native function: SetHighQualityFxEnabled 0x88a5764)
	void SetHighQualityFxEnabled(bool& bInHighQualityFxEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHighDetailScaleMin (Underlying native function: SetHighDetailScaleMin 0x88a56e0)
	void SetHighDetailScaleMin(float& InHighDetailScaleMin); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHighDetailScaleMax (Underlying native function: SetHighDetailScaleMax 0x88a565c)
	void SetHighDetailScaleMax(float& InHighDetailScaleMax); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHideOtherPlayerNames (Underlying native function: SetHideOtherPlayerNames 0x88a55d0)
	void SetHideOtherPlayerNames(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHiddenMatchmakingDelayMax (Underlying native function: SetHiddenMatchmakingDelayMax 0x88a5544)
	void SetHiddenMatchmakingDelayMax(int& Value); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetHasAttendedEvent (Underlying native function: SetHasAttendedEvent 0x88a53f0)
	void SetHasAttendedEvent(struct FString& Event); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroYawDirection (Underlying native function: SetGyroYawDirection 0x88a5234)
	void SetGyroYawDirection(enum EAxisDirection& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroVibrationConpensationSetting (Underlying native function: SetGyroVibrationConpensationSetting 0x88a51a8)
	void SetGyroVibrationConpensationSetting(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroVerticalMultiplierSetting (Underlying native function: SetGyroVerticalMultiplierSetting 0x88a5114)
	void SetGyroVerticalMultiplierSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroV2TargetingSensitivitySetting (Underlying native function: SetGyroV2TargetingSensitivitySetting 0x88a5080)
	void SetGyroV2TargetingSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroV2SensitivitySetting (Underlying native function: SetGyroV2SensitivitySetting 0x88a4fec)
	void SetGyroV2SensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroV2ScopedSensitivitySetting (Underlying native function: SetGyroV2ScopedSensitivitySetting 0x88a4f58)
	void SetGyroV2ScopedSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroV2HarvestingSensitivitySetting (Underlying native function: SetGyroV2HarvestingSensitivitySetting 0x88a4ec4)
	void SetGyroV2HarvestingSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroV2EditingSensitivitySetting (Underlying native function: SetGyroV2EditingSensitivitySetting 0x88a4e30)
	void SetGyroV2EditingSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroV2BuildingSensitivitySetting (Underlying native function: SetGyroV2BuildingSensitivitySetting 0x88a4d9c)
	void SetGyroV2BuildingSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroTrackballDecaySetting (Underlying native function: SetGyroTrackballDecaySetting 0x88a4d08)
	void SetGyroTrackballDecaySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroTouchMode (Underlying native function: SetGyroTouchMode 0x88a4c7c)
	void SetGyroTouchMode(enum EGyroTouchMode& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroTighteningThresholdSetting (Underlying native function: SetGyroTighteningThresholdSetting 0x88a4be8)
	void SetGyroTighteningThresholdSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroStickMode (Underlying native function: SetGyroStickMode 0x88a4b5c)
	void SetGyroStickMode(enum EGyroStickMode& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroSteadyingThresholdSetting (Underlying native function: SetGyroSteadyingThresholdSetting 0x88a4ac8)
	void SetGyroSteadyingThresholdSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroSpaceDetachedSetting (Underlying native function: SetGyroSpaceDetachedSetting 0x88a4a3c)
	void SetGyroSpaceDetachedSetting(enum EGyroSpace& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroSpaceAttachedSetting (Underlying native function: SetGyroSpaceAttachedSetting 0x88a49b0)
	void SetGyroSpaceAttachedSetting(enum EGyroSpace& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroSmoothingWindowSetting (Underlying native function: SetGyroSmoothingWindowSetting 0x88a491c)
	void SetGyroSmoothingWindowSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroSmoothingThresholdSetting (Underlying native function: SetGyroSmoothingThresholdSetting 0x88a4888)
	void SetGyroSmoothingThresholdSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroRollDirection (Underlying native function: SetGyroRollDirection 0x88a47fc)
	void SetGyroRollDirection(enum EAxisDirection& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroPitchDirection (Underlying native function: SetGyroPitchDirection 0x88a4770)
	void SetGyroPitchDirection(enum EAxisDirection& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroLookSensitivitySetting (Underlying native function: SetGyroLookSensitivitySetting 0x88a46dc)
	void SetGyroLookSensitivitySetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroDisableWhileDrivingSetting (Underlying native function: SetGyroDisableWhileDrivingSetting 0x88a4650)
	void SetGyroDisableWhileDrivingSetting(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroDeadZone (Underlying native function: SetGyroDeadZone 0x88a45bc)
	void SetGyroDeadZone(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroButtonHoldTimeSetting (Underlying native function: SetGyroButtonHoldTimeSetting 0x88a4528)
	void SetGyroButtonHoldTimeSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroAimAssist (Underlying native function: SetGyroAimAssist 0x88a449c)
	void SetGyroAimAssist(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroAdvancedSettingsEnabled (Underlying native function: SetGyroAdvancedSettingsEnabled 0x88a4410)
	void SetGyroAdvancedSettingsEnabled(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroActiveMode (Underlying native function: SetGyroActiveMode 0x88a4384)
	void SetGyroActiveMode(enum EGyroActiveMode& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroActiveBuildMode (Underlying native function: SetGyroActiveBuildMode 0x88a42f8)
	void SetGyroActiveBuildMode(enum EGyroActiveBuildMode& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroAccelerationMode (Underlying native function: SetGyroAccelerationMode 0x88a426c)
	void SetGyroAccelerationMode(enum EGyroAcceleration& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroAccelerationMinThresholdSetting (Underlying native function: SetGyroAccelerationMinThresholdSetting 0x88a41d8)
	void SetGyroAccelerationMinThresholdSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGyroAccelerationMaxThresholdSetting (Underlying native function: SetGyroAccelerationMaxThresholdSetting 0x88a4144)
	void SetGyroAccelerationMaxThresholdSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadTargetingMultiplier (Underlying native function: SetGamepadTargetingMultiplier 0x88a40b0)
	void SetGamepadTargetingMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadScopedMultiplier (Underlying native function: SetGamepadScopedMultiplier 0x88a401c)
	void SetGamepadScopedMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadMoveStickDeadZone (Underlying native function: SetGamepadMoveStickDeadZone 0x88a3f98)
	void SetGamepadMoveStickDeadZone(float& NewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadLookStickDeadZone (Underlying native function: SetGamepadLookStickDeadZone 0x88a3f14)
	void SetGamepadLookStickDeadZone(float& NewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadLookSensitivityY (Underlying native function: SetGamepadLookSensitivityY 0x88a3e90)
	void SetGamepadLookSensitivityY(float& InSensitivity); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadLookSensitivityX (Underlying native function: SetGamepadLookSensitivityX 0x88a3e0c)
	void SetGamepadLookSensitivityX(float& InSensitivity); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadEditModeMultiplier (Underlying native function: SetGamepadEditModeMultiplier 0x88a3d78)
	void SetGamepadEditModeMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetGamepadBuildingMultiplier (Underlying native function: SetGamepadBuildingMultiplier 0x88a3ce4)
	void SetGamepadBuildingMultiplier(float& InMultiplier); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetForceFeedbackEnabled (Underlying native function: SetForceFeedbackEnabled 0x88a3c58)
	void SetForceFeedbackEnabled(bool& bForceFeedback); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena (Underlying native function: SetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena 0x88a3bcc)
	void SetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena(bool& InFocusOnFirstBuildingPieceWhenQuickbarSwapped); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFocusOnFirstBuildingPieceWhenQuickbarSwapped (Underlying native function: SetFocusOnFirstBuildingPieceWhenQuickbarSwapped 0x88a3b40)
	void SetFocusOnFirstBuildingPieceWhenQuickbarSwapped(bool& InFocusOnFirstBuildingPieceWhenQuickbarSwapped); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFocalLength (Underlying native function: SetFocalLength 0x88a3abc)
	void SetFocalLength(float& InFocalLength); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFlickTime (Underlying native function: SetFlickTime 0x88a3a28)
	void SetFlickTime(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFlickStickWindingSpeed (Underlying native function: SetFlickStickWindingSpeed 0x88a3994)
	void SetFlickStickWindingSpeed(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFlickStickSmoothingThreshold (Underlying native function: SetFlickStickSmoothingThreshold 0x88a3900)
	void SetFlickStickSmoothingThreshold(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFlickStickEnabled (Underlying native function: SetFlickStickEnabled 0x88a3874)
	void SetFlickStickEnabled(bool& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFlickForwardDeadZone (Underlying native function: SetFlickForwardDeadZone 0x88a37e0)
	void SetFlickForwardDeadZone(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFlickDeadZone (Underlying native function: SetFlickDeadZone 0x88a374c)
	void SetFlickDeadZone(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetFirstPlaceHighlightEnabled (Underlying native function: SetFirstPlaceHighlightEnabled 0x88a36cc)
	void SetFirstPlaceHighlightEnabled(bool& bInFirstPlaceHighlightEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetEnableTryBuildOnFocus (Underlying native function: SetEnableTryBuildOnFocus 0x88a3640)
	void SetEnableTryBuildOnFocus(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetEnableRudderControl (Underlying native function: SetEnableRudderControl 0x88a35b4)
	void SetEnableRudderControl(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetEnablePreferredItemSlots (Underlying native function: SetEnablePreferredItemSlots 0x88a3528)
	void SetEnablePreferredItemSlots(bool& bNewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetEditConfirmOnReleaseEnabled (Underlying native function: SetEditConfirmOnReleaseEnabled 0x88a349c)
	void SetEditConfirmOnReleaseEnabled(bool& bNewEditConfirmOnRelease); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetEditButtonHoldTime (Underlying native function: SetEditButtonHoldTime 0x88a3408)
	void SetEditButtonHoldTime(float& NewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDroneIgnoreJump (Underlying native function: SetDroneIgnoreJump 0x88a3388)
	void SetDroneIgnoreJump(bool& bInDroneIgnoreJump); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDisplaySessionRank (Underlying native function: SetDisplaySessionRank 0x88a3308)
	void SetDisplaySessionRank(bool& bDisplaySessionRank); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDisablePreEditsWhenPlacingBuilding (Underlying native function: SetDisablePreEditsWhenPlacingBuilding 0x88a327c)
	void SetDisablePreEditsWhenPlacingBuilding(bool& InDisablePreEditsWhenPlacingBuilding); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDisableFunctionY (Underlying native function: SetDisableFunctionY 0x88a31f0)
	void SetDisableFunctionY(enum EGyroButtonResponse& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDisableFunctionX (Underlying native function: SetDisableFunctionX 0x88a3164)
	void SetDisableFunctionX(enum EGyroButtonResponse& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDialogueVolume (Underlying native function: SetDialogueVolume 0x88a30d0)
	void SetDialogueVolume(float& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDeviceFeedbackBlockedWithAttachedController (Underlying native function: SetDeviceFeedbackBlockedWithAttachedController 0x88a3044)
	void SetDeviceFeedbackBlockedWithAttachedController(bool& bForceFeedbackBlocked); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetDamageFxEnabled (Underlying native function: SetDamageFxEnabled 0x88a2fc4)
	void SetDamageFxEnabled(bool& bInDamageFxEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCustomizeKeyboardDiagonals (Underlying native function: SetCustomizeKeyboardDiagonals 0x88a2f38)
	void SetCustomizeKeyboardDiagonals(bool& InEnabled); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCrossplayPreference (Underlying native function: SetCrossplayPreference 0x88a2eb8)
	void SetCrossplayPreference(enum ECrossplayPreference& NewPreference); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCreativeTurboDelete (Underlying native function: SetCreativeTurboDelete 0x88a2e2c)
	void SetCreativeTurboDelete(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCreativeModeReplayRecordingEnabled (Underlying native function: SetCreativeModeReplayRecordingEnabled 0x88a2da0)
	void SetCreativeModeReplayRecordingEnabled(bool& bEnabled); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetContextTutorialEnabled (Underlying native function: SetContextTutorialEnabled 0x88a2d14)
	void SetContextTutorialEnabled(bool& bEnabled); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetConsoleFPSUnlocked (Underlying native function: SetConsoleFPSUnlocked 0x88a2c88)
	void SetConsoleFPSUnlocked(bool& bNewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetColorBlindStrength (Underlying native function: SetColorBlindStrength 0x88a2c08)
	void SetColorBlindStrength(int& InColorBlindStrength); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetColorBlindMode (Underlying native function: SetColorBlindMode 0x88a2b88)
	void SetColorBlindMode(enum EColorBlindMode& InMode); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetClipRemindersEnabled (Underlying native function: SetClipRemindersEnabled 0x88a2a70)
	void SetClipRemindersEnabled(bool& Value); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetClippingEnabled (Underlying native function: SetClippingEnabled 0x88a2b08)
	void SetClippingEnabled(bool& Value); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCinematicsVolume (Underlying native function: SetCinematicsVolume 0x88a29dc)
	void SetCinematicsVolume(float& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetChatVolume (Underlying native function: SetChatVolume 0x88a293c)
	void SetChatVolume(float& InVolume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCameraResetTime (Underlying native function: SetCameraResetTime 0x88a28a8)
	void SetCameraResetTime(float& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetCameraResetAxes (Underlying native function: SetCameraResetAxes 0x88a281c)
	void SetCameraResetAxes(enum ECameraResetAxes& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetBuildingPossessionShown (Underlying native function: SetBuildingPossessionShown 0x88a2790)
	void SetBuildingPossessionShown(bool& bShown); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetBattleMapShowTimeIndicator (Underlying native function: SetBattleMapShowTimeIndicator 0x88a2710)
	void SetBattleMapShowTimeIndicator(bool& bInBattleMapShowTimeIndicator); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetBattleMapShowNearbyChests (Underlying native function: SetBattleMapShowNearbyChests 0x88a2690)
	void SetBattleMapShowNearbyChests(bool& bInBattleMapShowNearbyChests); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetBattleMapShowAllSquadMembers (Underlying native function: SetBattleMapShowAllSquadMembers 0x88a2610)
	void SetBattleMapShowAllSquadMembers(bool& bInBattleMapShowAllSquadMembers); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetBattleMapAutomaticCameraPlacement (Underlying native function: SetBattleMapAutomaticCameraPlacement 0x88a2590)
	void SetBattleMapAutomaticCameraPlacement(bool& bInBattleMapAutomaticCameraPlacement); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoSortConsumablesToRight (Underlying native function: SetAutoSortConsumablesToRight 0x88a2504)
	void SetAutoSortConsumablesToRight(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoPickupWeaponsConsolePC (Underlying native function: SetAutoPickupWeaponsConsolePC 0x88a2478)
	void SetAutoPickupWeaponsConsolePC(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoPickupWeapons (Underlying native function: SetAutoPickupWeapons 0x88a23ec)
	void SetAutoPickupWeapons(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoOpenDoors (Underlying native function: SetAutoOpenDoors 0x88a236c)
	void SetAutoOpenDoors(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoMulchMode (Underlying native function: SetAutoMulchMode 0x88a22a8)
	void SetAutoMulchMode(enum EFortAutoMulchCategory& category, enum EFortAutoMulchMode& NewMode); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoJoinGameVoiceChannel (Underlying native function: SetAutoJoinGameVoiceChannel 0x88a2210)
	void SetAutoJoinGameVoiceChannel(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoHurdle (Underlying native function: SetAutoHurdle 0x88a2184)
	void SetAutoHurdle(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoHideBuildingMaterials (Underlying native function: SetAutoHideBuildingMaterials 0x88a20ec)
	void SetAutoHideBuildingMaterials(bool& InAutoHideBuildingMats); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoFocusEnabled (Underlying native function: SetAutoFocusEnabled 0x88a206c)
	void SetAutoFocusEnabled(bool& bInAutoFocusEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoExposureEnabled (Underlying native function: SetAutoExposureEnabled 0x88a1fec)
	void SetAutoExposureEnabled(bool& bInAutoExposureEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoEquipBetterItems (Underlying native function: SetAutoEquipBetterItems 0x88a1f60)
	void SetAutoEquipBetterItems(bool& bAutoEquip); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoClamber (Underlying native function: SetAutoClamber 0x88a1ed4)
	void SetAutoClamber(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAutoChangeMaterial (Underlying native function: SetAutoChangeMaterial 0x88a1e54)
	void SetAutoChangeMaterial(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAttendingSocialEvent (Underlying native function: SetAttendingSocialEvent 0x88a1d90)
	void SetAttendingSocialEvent(int& EventId, bool& bAttending); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetArrowScaleMin (Underlying native function: SetArrowScaleMin 0x88a1d0c)
	void SetArrowScaleMin(float& InArrowDetailScaleMin); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetArrowScaleMax (Underlying native function: SetArrowScaleMax 0x88a1c88)
	void SetArrowScaleMax(float& InArrowScaleMax); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetArrowDistance (Underlying native function: SetArrowDistance 0x88a1c04)
	void SetArrowDistance(float& InArrowDistance); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetArrowColorEnabled (Underlying native function: SetArrowColorEnabled 0x88a1b84)
	void SetArrowColorEnabled(bool& bInArrowColorEnabled); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAperture (Underlying native function: SetAperture 0x88a1b00)
	void SetAperture(float& InAperture); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAnonymousModeEnabled (Underlying native function: SetAnonymousModeEnabled 0x88a1a74)
	void SetAnonymousModeEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAnonymousCharacterModeEnabled (Underlying native function: SetAnonymousCharacterModeEnabled 0x88a19e8)
	void SetAnonymousCharacterModeEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAllowSidekickFeature1 (Underlying native function: SetAllowSidekickFeature1 0x88a195c)
	void SetAllowSidekickFeature1(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAllowAudioInBackgroundSetting (Underlying native function: SetAllowAudioInBackgroundSetting 0x88a18dc)
	void SetAllowAudioInBackgroundSetting(enum EFortAllowBackgroundAudioSetting& Value); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAimAssistStrength (Underlying native function: SetAimAssistStrength 0x88a1858)
	void SetAimAssistStrength(uint32_t& NewValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAimAssistEnabled (Underlying native function: SetAimAssistEnabled 0x88a17d8)
	void SetAimAssistEnabled(bool& bNewValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.SetAccelerationMultiplierSetting (Underlying native function: SetAccelerationMultiplierSetting 0x88a1744)
	void SetAccelerationMultiplierSetting(float& InSetting); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.IsUsingHoldToSwapPickup (Underlying native function: IsUsingHoldToSwapPickup 0x2d00fac)
	bool IsUsingHoldToSwapPickup(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.IsUsingGamepadEditModeAimAssist (Underlying native function: IsUsingGamepadEditModeAimAssist 0x2d00f94)
	bool IsUsingGamepadEditModeAimAssist(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.IsUsingGamepadAutoRun (Underlying native function: IsUsingGamepadAutoRun 0x2d00ff4)
	bool IsUsingGamepadAutoRun(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.IsUsingFollowCamera (Underlying native function: IsUsingFollowCamera 0x2d00fc4)
	bool IsUsingFollowCamera(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.IsUsingAutoCenter (Underlying native function: IsUsingAutoCenter 0x2d00fdc)
	bool IsUsingAutoCenter(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.IsPreferredItemSlotsEnabled (Underlying native function: IsPreferredItemSlotsEnabled 0x26c34ac)
	bool IsPreferredItemSlotsEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.HasSeenSubscriptionNotification (Underlying native function: HasSeenSubscriptionNotification 0x88a16a8)
	bool HasSeenSubscriptionNotification(struct FName& NotificationId); // (Final | 0x00000002 | Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetVoiceChatSettings (Underlying native function: GetVoiceChatSettings 0x88a1690)
	enum ESocialCommsPermission GetVoiceChatSettings(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetVoiceChatPTTEnabled (Underlying native function: GetVoiceChatPTTEnabled 0x2d00c74)
	bool GetVoiceChatPTTEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetVoiceChatParentalRestriction (Underlying native function: GetVoiceChatParentalRestriction 0x88a166c)
	enum ESocialCommsPermission GetVoiceChatParentalRestriction(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetVoiceChatEnabled (Underlying native function: GetVoiceChatEnabled 0x88a164c)
	bool GetVoiceChatEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetVoiceChat3DEnabled (Underlying native function: GetVoiceChat3DEnabled 0x88a1634)
	bool GetVoiceChat3DEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetVisualizeAudioSources (Underlying native function: GetVisualizeAudioSources 0x2d00e10)
	bool GetVisualizeAudioSources(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetUsePowerSavingMode (Underlying native function: GetUsePowerSavingMode 0x2d78274)
	bool GetUsePowerSavingMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetUseFirstPersonCamera (Underlying native function: GetUseFirstPersonCamera 0x2d015c4)
	bool GetUseFirstPersonCamera(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTurboBuild (Underlying native function: GetTurboBuild 0x29453c8)
	bool GetTurboBuild(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTriggerHapticsUseThreshold (Underlying native function: GetTriggerHapticsUseThreshold 0x2486284)
	bool GetTriggerHapticsUseThreshold(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTriggerHapticsStrength (Underlying native function: GetTriggerHapticsStrength 0x2486284)
	unsigned char GetTriggerHapticsStrength(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTriggerHapticsStartPosition (Underlying native function: GetTriggerHapticsStartPosition 0x2486284)
	unsigned char GetTriggerHapticsStartPosition(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTriggerHapticsEnabled (Underlying native function: GetTriggerHapticsEnabled 0x2486284)
	bool GetTriggerHapticsEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchVerticalMultiplier (Underlying native function: GetTouchVerticalMultiplier 0x2d7825c)
	float GetTouchVerticalMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchTargetingMultiplier (Underlying native function: GetTouchTargetingMultiplier 0x2d781fc)
	float GetTouchTargetingMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchScopedMultiplier (Underlying native function: GetTouchScopedMultiplier 0x2d78214)
	float GetTouchScopedMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchLookSensitivitySetting (Underlying native function: GetTouchLookSensitivitySetting 0x2d781e4)
	float GetTouchLookSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchLookAccelerationMultiplier (Underlying native function: GetTouchLookAccelerationMultiplier 0x2d781cc)
	float GetTouchLookAccelerationMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchInteractionMode (Underlying native function: GetTouchInteractionMode 0x2d78154)
	enum ETouchInteractMode GetTouchInteractionMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchEditModeMultiplier (Underlying native function: GetTouchEditModeMultiplier 0x2d78244)
	float GetTouchEditModeMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchEditEnabled (Underlying native function: GetTouchEditEnabled 0x2d7816c)
	bool GetTouchEditEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTouchBuildingMultiplier (Underlying native function: GetTouchBuildingMultiplier 0x2d7822c)
	float GetTouchBuildingMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetToggleSprint (Underlying native function: GetToggleSprint 0x2a7b88c)
	bool GetToggleSprint(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTargetTypeIndicatorVisible (Underlying native function: GetTargetTypeIndicatorVisible 0x2d8fd7c)
	bool GetTargetTypeIndicatorVisible(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTargetingToggleableWithTouch (Underlying native function: GetTargetingToggleableWithTouch 0x2d780f4)
	bool GetTargetingToggleableWithTouch(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTargetingToggleable (Underlying native function: GetTargetingToggleable 0x2d00af4)
	bool GetTargetingToggleable(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTargetingMultiplier (Underlying native function: GetTargetingMultiplier 0x2d01174)
	float GetTargetingMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTapInteract (Underlying native function: GetTapInteract 0x2d00f4c)
	bool GetTapInteract(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTankKBMCameraControls (Underlying native function: GetTankKBMCameraControls 0x2d8fd1c)
	bool GetTankKBMCameraControls(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetTankGamepadCameraControls (Underlying native function: GetTankGamepadCameraControls 0x2d8fd34)
	bool GetTankGamepadCameraControls(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSubtitlesTextSize (Underlying native function: GetSubtitlesTextSize 0x2d015f4)
	enum ESubtitleDisplayTextSize GetSubtitlesTextSize(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSubtitlesTextColor (Underlying native function: GetSubtitlesTextColor 0x2d0160c)
	enum ESubtitleDisplayTextColor GetSubtitlesTextColor(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSubtitlesTextBorder (Underlying native function: GetSubtitlesTextBorder 0x2d01624)
	enum ESubtitleDisplayTextBorder GetSubtitlesTextBorder(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSubtitlesEnabled (Underlying native function: GetSubtitlesEnabled 0x2d015dc)
	bool GetSubtitlesEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSubtitlesBackgroundOpacity (Underlying native function: GetSubtitlesBackgroundOpacity 0x2d0163c)
	enum ESubtitleDisplayBackgroundOpacity GetSubtitlesBackgroundOpacity(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSoundFXVolume (Underlying native function: GetSoundFXVolume 0x2d00bfc)
	float GetSoundFXVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSmartBuildEnabled (Underlying native function: GetSmartBuildEnabled 0x88a161c)
	bool GetSmartBuildEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetSlideButtonHoldTime (Underlying native function: GetSlideButtonHoldTime 0x2d00b9c)
	float GetSlideButtonHoldTime(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShowVoiceIndicators (Underlying native function: GetShowVoiceIndicators 0x2d00d94)
	bool GetShowVoiceIndicators(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShowViewerCountEnabled (Underlying native function: GetShowViewerCountEnabled 0x2d00ca4)
	bool GetShowViewerCountEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShowTemperature (Underlying native function: GetShowTemperature 0x88a1604)
	bool GetShowTemperature(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShowSeasonLevel (Underlying native function: GetShowSeasonLevel 0x2d00cbc)
	bool GetShowSeasonLevel(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShowPickupDotsOnMapByRarity (Underlying native function: GetShowPickupDotsOnMapByRarity 0x2d01144)
	enum EFortRarity GetShowPickupDotsOnMapByRarity(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShowGlobalChatEnabled (Underlying native function: GetShowGlobalChatEnabled 0x2d78124)
	bool GetShowGlobalChatEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShouldToggleSprint (Underlying native function: GetShouldToggleSprint 0x2a7b88c)
	bool GetShouldToggleSprint(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShouldShowBothQuickbars (Underlying native function: GetShouldShowBothQuickbars 0x2d00dac)
	bool GetShouldShowBothQuickbars(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetShadowPlayHighlightsEnabled (Underlying native function: GetShadowPlayHighlightsEnabled 0x2a76420)
	bool GetShadowPlayHighlightsEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetScopedMultiplier (Underlying native function: GetScopedMultiplier 0x2d0118c)
	float GetScopedMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetScaleWindingWithZoom (Underlying native function: GetScaleWindingWithZoom 0x2d0106c)
	bool GetScaleWindingWithZoom(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetScaleSensitivityWithZoom (Underlying native function: GetScaleSensitivityWithZoom 0x2d01354)
	bool GetScaleSensitivityWithZoom(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetRudderMaxThrottle (Underlying native function: GetRudderMaxThrottle 0x2d00e58)
	float GetRudderMaxThrottle(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetRudderDeadZone (Underlying native function: GetRudderDeadZone 0x2d00e40)
	float GetRudderDeadZone(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetReplayRecordingIndicatorEnabled (Underlying native function: GetReplayRecordingIndicatorEnabled 0x2d00cec)
	bool GetReplayRecordingIndicatorEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetReplayRecordingEnabled (Underlying native function: GetReplayRecordingEnabled 0x2d00d04)
	bool GetReplayRecordingEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetQuickEditEnabled (Underlying native function: GetQuickEditEnabled 0x88a15ec)
	bool GetQuickEditEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredSlotIndicesFromDefinition (Underlying native function: GetPreferredSlotIndicesFromDefinition 0x88a13f8)
	void GetPreferredSlotIndicesFromDefinition(class UFortWorldItemDefinition*& WorldItemDefinition, struct TArray<int>& OutIndices); // (Final | Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredSlotIndices (Underlying native function: GetPreferredSlotIndices 0x88a1314)
	void GetPreferredSlotIndices(enum EFortPreferredItemSlotItemType& ItemType, struct TArray<int>& OutIndices); // (Final | Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredItemTypeSlotIndex_5 (Underlying native function: GetPreferredItemTypeSlotIndex_5 0x248f454)
	enum EFortPreferredItemSlotItemType GetPreferredItemTypeSlotIndex5(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredItemTypeSlotIndex_4 (Underlying native function: GetPreferredItemTypeSlotIndex_4 0x248f4e0)
	enum EFortPreferredItemSlotItemType GetPreferredItemTypeSlotIndex4(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredItemTypeSlotIndex_3 (Underlying native function: GetPreferredItemTypeSlotIndex_3 0x248f56c)
	enum EFortPreferredItemSlotItemType GetPreferredItemTypeSlotIndex3(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredItemTypeSlotIndex_2 (Underlying native function: GetPreferredItemTypeSlotIndex_2 0x248f5f8)
	enum EFortPreferredItemSlotItemType GetPreferredItemTypeSlotIndex2(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPreferredItemTypeSlotIndex_1 (Underlying native function: GetPreferredItemTypeSlotIndex_1 0x248f684)
	enum EFortPreferredItemSlotItemType GetPreferredItemTypeSlotIndex1(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPostpartyClippingState (Underlying native function: GetPostpartyClippingState 0x88a12fc)
	enum EPostpartyClippingState GetPostpartyClippingState(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPlayerSurveysAllowed (Underlying native function: GetPlayerSurveysAllowed 0x88a12e4)
	bool GetPlayerSurveysAllowed(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPlaceDangerMarkerWhenTargeting (Underlying native function: GetPlaceDangerMarkerWhenTargeting 0x2d00d64)
	bool GetPlaceDangerMarkerWhenTargeting(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPIPVolume (Underlying native function: GetPIPVolume 0x2d00c14)
	float GetPIPVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetPeripheralLightingEnabled (Underlying native function: GetPeripheralLightingEnabled 0x2d00c8c)
	bool GetPeripheralLightingEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetNumDiscoveryFlowTooltipsRemaining (Underlying native function: GetNumDiscoveryFlowTooltipsRemaining 0x88a12cc)
	int8_t GetNumDiscoveryFlowTooltipsRemaining(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMusicVolume (Underlying native function: GetMusicVolume 0x2d00be4)
	float GetMusicVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMouseSensitivityY (Underlying native function: GetMouseSensitivityY 0x2d010fc)
	float GetMouseSensitivityY(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMouseSensitivityX (Underlying native function: GetMouseSensitivityX 0x2d010e4)
	float GetMouseSensitivityX(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMouseSensitivityMultiplierForAircraft (Underlying native function: GetMouseSensitivityMultiplierForAircraft 0x2d01114)
	float GetMouseSensitivityMultiplierForAircraft(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMotionYawAxisSetting (Underlying native function: GetMotionYawAxisSetting 0x16a8668)
	enum EFortMotionYawAxis GetMotionYawAxisSetting(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMotionTargetingMultiplier (Underlying native function: GetMotionTargetingMultiplier 0x2d01204)
	float GetMotionTargetingMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMotionScopedMultiplier (Underlying native function: GetMotionScopedMultiplier 0x2d0121c)
	float GetMotionScopedMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMotionHarvestingToolMultiplier (Underlying native function: GetMotionHarvestingToolMultiplier 0x2d01234)
	float GetMotionHarvestingToolMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMotionControlsEnabledSetting (Underlying native function: GetMotionControlsEnabledSetting 0x24746bc)
	bool GetMotionControlsEnabledSetting(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetMasterVolume (Underlying native function: GetMasterVolume 0x2d00bcc)
	float GetMasterVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetLockPrimaryInputMethodToMouse (Underlying native function: GetLockPrimaryInputMethodToMouse 0x2d00e88)
	bool GetLockPrimaryInputMethodToMouse(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetLocalNotificationsEnabled (Underlying native function: GetLocalNotificationsEnabled 0x88a12b4)
	bool GetLocalNotificationsEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetLicensedAudioTreatmentInternal (Underlying native function: GetLicensedAudioTreatmentInternal 0x2d00dc4)
	enum ELicensedAudioTreatment GetLicensedAudioTreatmentInternal(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetLicensedAudioTreatment (Underlying native function: GetLicensedAudioTreatment 0x88a1224)
	enum ELicensedAudioTreatment GetLicensedAudioTreatment(bool& bIgnoreGameStreamingCheck); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetLargeTeamReplayRecordingEnabled (Underlying native function: GetLargeTeamReplayRecordingEnabled 0x2d00d1c)
	bool GetLargeTeamReplayRecordingEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetKeyboardStrafeDiagonal (Underlying native function: GetKeyboardStrafeDiagonal 0x88a120c)
	float GetKeyboardStrafeDiagonal(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetKeyboardForwardDiagonal (Underlying native function: GetKeyboardForwardDiagonal 0x88a11f4)
	float GetKeyboardForwardDiagonal(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetKeyboardBackwardDiagonal (Underlying native function: GetKeyboardBackwardDiagonal 0x88a11dc)
	float GetKeyboardBackwardDiagonal(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetJoyConMotionSelection (Underlying native function: GetJoyConMotionSelection 0x88a11c4)
	enum EJoyConMotionSelection GetJoyConMotionSelection(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetInvertedYawForMotion (Underlying native function: GetInvertedYawForMotion 0x2d00adc)
	bool GetInvertedYawForMotion(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetInvertedYaw (Underlying native function: GetInvertedYaw 0x88a11a0)
	bool GetInvertedYaw(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetInvertedPitchForMotion (Underlying native function: GetInvertedPitchForMotion 0x2d00a94)
	bool GetInvertedPitchForMotion(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetInvertedPitchForAircraftSecondary (Underlying native function: GetInvertedPitchForAircraftSecondary 0x2d00ac4)
	bool GetInvertedPitchForAircraftSecondary(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetInvertedPitchForAircraftPrimary (Underlying native function: GetInvertedPitchForAircraftPrimary 0x2d00aac)
	bool GetInvertedPitchForAircraftPrimary(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetInvertedPitch (Underlying native function: GetInvertedPitch 0x16a8644)
	bool GetInvertedPitch(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetIgnoreGamepadInput (Underlying native function: GetIgnoreGamepadInput 0x2d00e70)
	bool GetIgnoreGamepadInput(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHUDScaleRaw (Underlying native function: GetHUDScaleRaw 0x2d0112c)
	float GetHUDScaleRaw(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHUDScaleMultiplier (Underlying native function: GetHUDScaleMultiplier 0x88a0ff0)
	float GetHUDScaleMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHUDScale (Underlying native function: GetHUDScale 0x88a0fc8)
	float GetHUDScale(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHousepartyCastingEnabled (Underlying native function: GetHousepartyCastingEnabled 0x88a1188)
	bool GetHousepartyCastingEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHitNumbersMode (Underlying native function: GetHitNumbersMode 0x2d8fd4c)
	enum EHitNumbersMode GetHitNumbersMode(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHitFeedbackMode (Underlying native function: GetHitFeedbackMode 0x2d8fd64)
	enum EHitFeedbackMode GetHitFeedbackMode(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHighResTexturesReminderEnabled (Underlying native function: GetHighResTexturesReminderEnabled 0x2d00bb4)
	bool GetHighResTexturesReminderEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHighQualityReplayRecordingEnabled (Underlying native function: GetHighQualityReplayRecordingEnabled 0x2d00d4c)
	bool GetHighQualityReplayRecordingEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHideOtherPlayerNames (Underlying native function: GetHideOtherPlayerNames 0x88a1170)
	bool GetHideOtherPlayerNames(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHiddenMatchmakingDelayMax (Underlying native function: GetHiddenMatchmakingDelayMax 0x2d00cd4)
	int GetHiddenMatchmakingDelayMax(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetHasAttendedEvent (Underlying native function: GetHasAttendedEvent 0x88a1008)
	bool GetHasAttendedEvent(struct FString& Event); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroYawDirection (Underlying native function: GetGyroYawDirection 0x2d0127c)
	enum EAxisDirection GetGyroYawDirection(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroVibrationConpensationSetting (Underlying native function: GetGyroVibrationConpensationSetting 0x2d0154c)
	bool GetGyroVibrationConpensationSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroVerticalMultiplierSetting (Underlying native function: GetGyroVerticalMultiplierSetting 0x2d01444)
	float GetGyroVerticalMultiplierSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroV2TargetingSensitivitySetting (Underlying native function: GetGyroV2TargetingSensitivitySetting 0x2d012dc)
	float GetGyroV2TargetingSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroV2SensitivitySetting (Underlying native function: GetGyroV2SensitivitySetting 0x2d012c4)
	float GetGyroV2SensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroV2ScopedSensitivitySetting (Underlying native function: GetGyroV2ScopedSensitivitySetting 0x2d012f4)
	float GetGyroV2ScopedSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroV2HarvestingSensitivitySetting (Underlying native function: GetGyroV2HarvestingSensitivitySetting 0x2d0130c)
	float GetGyroV2HarvestingSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroV2EditingSensitivitySetting (Underlying native function: GetGyroV2EditingSensitivitySetting 0x2d0133c)
	float GetGyroV2EditingSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroV2BuildingSensitivitySetting (Underlying native function: GetGyroV2BuildingSensitivitySetting 0x2d01324)
	float GetGyroV2BuildingSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroTrackballDecaySetting (Underlying native function: GetGyroTrackballDecaySetting 0x2d01504)
	float GetGyroTrackballDecaySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroTouchMode (Underlying native function: GetGyroTouchMode 0x88a0fb0)
	enum EGyroTouchMode GetGyroTouchMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroTighteningThresholdSetting (Underlying native function: GetGyroTighteningThresholdSetting 0x2d014a4)
	float GetGyroTighteningThresholdSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroStickMode (Underlying native function: GetGyroStickMode 0x2d013cc)
	enum EGyroStickMode GetGyroStickMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroSteadyingThresholdSetting (Underlying native function: GetGyroSteadyingThresholdSetting 0x2d0145c)
	float GetGyroSteadyingThresholdSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroSpaceDetachedSetting (Underlying native function: GetGyroSpaceDetachedSetting 0x2d0124c)
	enum EGyroSpace GetGyroSpaceDetachedSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroSpaceAttachedSetting (Underlying native function: GetGyroSpaceAttachedSetting 0x88a0f98)
	enum EGyroSpace GetGyroSpaceAttachedSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroSmoothingWindowSetting (Underlying native function: GetGyroSmoothingWindowSetting 0x2d0148c)
	float GetGyroSmoothingWindowSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroSmoothingThresholdSetting (Underlying native function: GetGyroSmoothingThresholdSetting 0x2d01474)
	float GetGyroSmoothingThresholdSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroRollDirection (Underlying native function: GetGyroRollDirection 0x2d012ac)
	enum EAxisDirection GetGyroRollDirection(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroPitchDirection (Underlying native function: GetGyroPitchDirection 0x2d01294)
	enum EAxisDirection GetGyroPitchDirection(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroLookSensitivitySetting (Underlying native function: GetGyroLookSensitivitySetting 0x2d01264)
	float GetGyroLookSensitivitySetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroDisableWhileDrivingSetting (Underlying native function: GetGyroDisableWhileDrivingSetting 0x2d01534)
	bool GetGyroDisableWhileDrivingSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroDeadZone (Underlying native function: GetGyroDeadZone 0x2d014bc)
	float GetGyroDeadZone(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroButtonHoldTimeSetting (Underlying native function: GetGyroButtonHoldTimeSetting 0x2d0151c)
	float GetGyroButtonHoldTimeSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroAimAssist (Underlying native function: GetGyroAimAssist 0x2d013e4)
	bool GetGyroAimAssist(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroAdvancedSettingsEnabled (Underlying native function: GetGyroAdvancedSettingsEnabled 0x2d0136c)
	bool GetGyroAdvancedSettingsEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroActiveMode (Underlying native function: GetGyroActiveMode 0x2d0139c)
	enum EGyroActiveMode GetGyroActiveMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroActiveBuildMode (Underlying native function: GetGyroActiveBuildMode 0x2d013b4)
	enum EGyroActiveBuildMode GetGyroActiveBuildMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroAccelerationMode (Underlying native function: GetGyroAccelerationMode 0x2d01384)
	enum EGyroAcceleration GetGyroAccelerationMode(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroAccelerationMinThresholdSetting (Underlying native function: GetGyroAccelerationMinThresholdSetting 0x2d01414)
	float GetGyroAccelerationMinThresholdSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGyroAccelerationMaxThresholdSetting (Underlying native function: GetGyroAccelerationMaxThresholdSetting 0x2d0142c)
	float GetGyroAccelerationMaxThresholdSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadTargetingMultiplier (Underlying native function: GetGamepadTargetingMultiplier 0x2d011a4)
	float GetGamepadTargetingMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadScopedMultiplier (Underlying native function: GetGamepadScopedMultiplier 0x2d011bc)
	float GetGamepadScopedMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadMoveStickDeadZone (Underlying native function: GetGamepadMoveStickDeadZone 0x2d010b4)
	float GetGamepadMoveStickDeadZone(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadLookStickDeadZone (Underlying native function: GetGamepadLookStickDeadZone 0x2d010cc)
	float GetGamepadLookStickDeadZone(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadLookSensitivityY (Underlying native function: GetGamepadLookSensitivityY 0x2ceb0bc)
	float GetGamepadLookSensitivityY(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadLookSensitivityX (Underlying native function: GetGamepadLookSensitivityX 0x2ceb09c)
	float GetGamepadLookSensitivityX(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadEditModeMultiplier (Underlying native function: GetGamepadEditModeMultiplier 0x2d011ec)
	float GetGamepadEditModeMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetGamepadBuildingMultiplier (Underlying native function: GetGamepadBuildingMultiplier 0x2d011d4)
	float GetGamepadBuildingMultiplier(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetForceFeedbackEnabled (Underlying native function: GetForceFeedbackEnabled 0x16a868c)
	bool GetForceFeedbackEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena (Underlying native function: GetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena 0x2d0157c)
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFocusOnFirstBuildingPieceWhenQuickbarSwapped (Underlying native function: GetFocusOnFirstBuildingPieceWhenQuickbarSwapped 0x2d01564)
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwapped(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFlickTime (Underlying native function: GetFlickTime 0x2d01024)
	float GetFlickTime(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFlickStickWindingSpeed (Underlying native function: GetFlickStickWindingSpeed 0x2d01054)
	float GetFlickStickWindingSpeed(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFlickStickSmoothingThreshold (Underlying native function: GetFlickStickSmoothingThreshold 0x2d0103c)
	float GetFlickStickSmoothingThreshold(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFlickStickEnabled (Underlying native function: GetFlickStickEnabled 0x2d0100c)
	bool GetFlickStickEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFlickForwardDeadZone (Underlying native function: GetFlickForwardDeadZone 0x2d0109c)
	float GetFlickForwardDeadZone(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetFlickDeadZone (Underlying native function: GetFlickDeadZone 0x2d01084)
	float GetFlickDeadZone(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetEnableTryBuildOnFocus (Underlying native function: GetEnableTryBuildOnFocus 0x2d00b6c)
	bool GetEnableTryBuildOnFocus(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetEnableRudderControl (Underlying native function: GetEnableRudderControl 0x2d00e28)
	bool GetEnableRudderControl(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetEditConfirmOnReleaseEnabled (Underlying native function: GetEditConfirmOnReleaseEnabled 0x2d00f64)
	bool GetEditConfirmOnReleaseEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetEditButtonHoldTime (Underlying native function: GetEditButtonHoldTime 0x2d00b84)
	float GetEditButtonHoldTime(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetDisablePreEditsWhenPlacingBuilding (Underlying native function: GetDisablePreEditsWhenPlacingBuilding 0x2d01594)
	bool GetDisablePreEditsWhenPlacingBuilding(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetDisableFunctionY (Underlying native function: GetDisableFunctionY 0x2d014ec)
	enum EGyroButtonResponse GetDisableFunctionY(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetDisableFunctionX (Underlying native function: GetDisableFunctionX 0x2d014d4)
	enum EGyroButtonResponse GetDisableFunctionX(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetDialogueVolume (Underlying native function: GetDialogueVolume 0x2d00c2c)
	float GetDialogueVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetDeviceFeedbackBlockedWithAttachedController (Underlying native function: GetDeviceFeedbackBlockedWithAttachedController 0x2d78184)
	bool GetDeviceFeedbackBlockedWithAttachedController(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCustomizeKeyboardDiagonals (Underlying native function: GetCustomizeKeyboardDiagonals 0x88a0f80)
	bool GetCustomizeKeyboardDiagonals(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCrossplayPreference (Underlying native function: GetCrossplayPreference 0x88a0f5c)
	enum ECrossplayPreference GetCrossplayPreference(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCreativeTurboDelete (Underlying native function: GetCreativeTurboDelete 0x2d00b0c)
	bool GetCreativeTurboDelete(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCreativeModeReplayRecordingEnabled (Underlying native function: GetCreativeModeReplayRecordingEnabled 0x2d00d34)
	bool GetCreativeModeReplayRecordingEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetContextTutorialEnabled (Underlying native function: GetContextTutorialEnabled 0x2d00f7c)
	bool GetContextTutorialEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetConsoleFPSUnlocked (Underlying native function: GetConsoleFPSUnlocked 0x2d781b4)
	bool GetConsoleFPSUnlocked(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetColorBlindStrength (Underlying native function: GetColorBlindStrength 0x2d00df4)
	int GetColorBlindStrength(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetColorBlindMode (Underlying native function: GetColorBlindMode 0x2d00ddc)
	enum EColorBlindMode GetColorBlindMode(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetClipRemindersEnabled (Underlying native function: GetClipRemindersEnabled 0x2dae064)
	bool GetClipRemindersEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetClippingEnabled (Underlying native function: GetClippingEnabled 0x2cf8a18)
	bool GetClippingEnabled(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCinematicsVolume (Underlying native function: GetCinematicsVolume 0x2d00c5c)
	float GetCinematicsVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetChatVolume (Underlying native function: GetChatVolume 0x2d00c44)
	float GetChatVolume(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetChatDisabledForPlatform (Underlying native function: GetChatDisabledForPlatform 0x88a0f44)
	bool GetChatDisabledForPlatform(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCameraResetTime (Underlying native function: GetCameraResetTime 0x2160334)
	float GetCameraResetTime(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetCameraResetAxes (Underlying native function: GetCameraResetAxes 0x28c8e5c)
	enum ECameraResetAxes GetCameraResetAxes(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetBuildingPossessionShown (Underlying native function: GetBuildingPossessionShown 0x2d7819c)
	bool GetBuildingPossessionShown(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoSortConsumablesToRight (Underlying native function: GetAutoSortConsumablesToRight 0x2d00b54)
	bool GetAutoSortConsumablesToRight(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoPickupWeaponsConsolePC (Underlying native function: GetAutoPickupWeaponsConsolePC 0x2d00b3c)
	bool GetAutoPickupWeaponsConsolePC(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoPickupWeapons (Underlying native function: GetAutoPickupWeapons 0x2d7810c)
	bool GetAutoPickupWeapons(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoOpenDoors (Underlying native function: GetAutoOpenDoors 0x2ce97c0)
	bool GetAutoOpenDoors(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoMulchMode (Underlying native function: GetAutoMulchMode 0x88a0e7c)
	enum EFortAutoMulchMode GetAutoMulchMode(enum EFortAutoMulchCategory& category); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoJoinGameVoiceChannel (Underlying native function: GetAutoJoinGameVoiceChannel 0x2d00d7c)
	bool GetAutoJoinGameVoiceChannel(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoHurdle (Underlying native function: GetAutoHurdle 0x88a0e64)
	bool GetAutoHurdle(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoHideBuildingMaterials (Underlying native function: GetAutoHideBuildingMaterials 0x2d0115c)
	bool GetAutoHideBuildingMaterials(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoEquipBetterItems (Underlying native function: GetAutoEquipBetterItems 0x2d015ac)
	bool GetAutoEquipBetterItems(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoClamber (Underlying native function: GetAutoClamber 0x2d00b24)
	bool GetAutoClamber(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAutoChangeMaterial (Underlying native function: GetAutoChangeMaterial 0x88a0e40)
	bool GetAutoChangeMaterial(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAttendingSocialEvent (Underlying native function: GetAttendingSocialEvent 0x88a0db4)
	bool GetAttendingSocialEvent(int& EventId); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAnonymousModeEnabled (Underlying native function: GetAnonymousModeEnabled 0x88a0d9c)
	bool GetAnonymousModeEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAnonymousCharacterModeEnabled (Underlying native function: GetAnonymousCharacterModeEnabled 0x88a0d84)
	bool GetAnonymousCharacterModeEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAllowSidekickFeature1 (Underlying native function: GetAllowSidekickFeature1 0x88a0d6c)
	bool GetAllowSidekickFeature1(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAllowAudioInBackgroundSetting (Underlying native function: GetAllowAudioInBackgroundSetting 0x2d01654)
	enum EFortAllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAimAssistEnabled (Underlying native function: GetAimAssistEnabled 0x28a9430)
	bool GetAimAssistEnabled(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.GetAccelerationMultiplierSetting (Underlying native function: GetAccelerationMultiplierSetting 0x2d013fc)
	float GetAccelerationMultiplierSetting(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.ForceToggleHousepartyCastingEnabled (Underlying native function: ForceToggleHousepartyCastingEnabled 0x88a0d00)
	void ForceToggleHousepartyCastingEnabled(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortClientSettingsRecord.DoesMoveStickAccelerateVehicles (Underlying native function: DoesMoveStickAccelerateVehicles 0x298dcc8)
	bool DoesMoveStickAccelerateVehicles(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortClientSettingsRecord.AddNewSubscriptionNotificationViewed (Underlying native function: AddNewSubscriptionNotificationViewed 0x88a0bac)
	void AddNewSubscriptionNotificationViewed(struct FName& NotificationId); // (Final | 0x00000002 | Native | Public | HasOutParms)
};

