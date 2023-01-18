// Class /Script/FortniteUI.FortSettingsContext
// Size: 0x108
class UFortSettingsContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0xc]; // 0x30 (0xc) 
	float MinGammaValue; // 0x3c (0x4)
	float MaxGammaValue; // 0x40 (0x4)
	unsigned char padding_44[0xc4]; // 0x44 (0xc4)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingsContext.YawInversionReset (Underlying native function: YawInversionReset 0xa66a194)
	void YawInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.YawInversionChanged (Underlying native function: YawInversionChanged 0xa66a114)
	void YawInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.YawForMotionInversionReset (Underlying native function: YawForMotionInversionReset 0xa66a094)
	void YawForMotionInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.YawForMotionInversionChanged (Underlying native function: YawForMotionInversionChanged 0xa66a094)
	void YawForMotionInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.UpdateGammaSettings (Underlying native function: UpdateGammaSettings 0xa669ee0)
	void UpdateGammaSettings(float& GammaValue); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortSettingsContext.TouchVerticalSensitivityValueChanged (Underlying native function: TouchVerticalSensitivityValueChanged 0xa669c2c)
	void TouchVerticalSensitivityValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchTargetingMultiplierValueChanged (Underlying native function: TouchTargetingMultiplierValueChanged 0xa669ba8)
	void TouchTargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchLookSensitivityChanged (Underlying native function: TouchLookSensitivityChanged 0xa669b24)
	void TouchLookSensitivityChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchLookAccelerationMultiplierValueChanged (Underlying native function: TouchLookAccelerationMultiplierValueChanged 0xa669aa0)
	void TouchLookAccelerationMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchEditModeMultiplierValueChanged (Underlying native function: TouchEditModeMultiplierValueChanged 0xa669a1c)
	void TouchEditModeMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchDragScopedSensitivityValueChanged (Underlying native function: TouchDragScopedSensitivityValueChanged 0xa669998)
	void TouchDragScopedSensitivityValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TouchBuildingMultiplierValueChanged (Underlying native function: TouchBuildingMultiplierValueChanged 0xa669914)
	void TouchBuildingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TargetingToggleChanged (Underlying native function: TargetingToggleChanged 0xa669894)
	void TargetingToggleChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TargetingMultiplierValueChanged (Underlying native function: TargetingMultiplierValueChanged 0xa669810)
	void TargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.TapInteractChanged (Underlying native function: TapInteractChanged 0xa669790)
	void TapInteractChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SprintToggleChanged (Underlying native function: SprintToggleChanged 0xa66964c)
	void SprintToggleChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SprintCancelsReloadChanged (Underlying native function: SprintCancelsReloadChanged 0x71a6cc4)
	void SprintCancelsReloadChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SoundFXVolumeChanged (Underlying native function: SoundFXVolumeChanged 0xa6695c8)
	void SoundFXVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SliderSettingReset (Underlying native function: SliderSettingReset 0xa66946c)
	void SliderSettingReset(enum ESettingType& InSettingType, struct FText& NameText, float& PreviousValue, float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SliderSettingChanged (Underlying native function: SliderSettingChanged 0xa669310)
	void SliderSettingChanged(enum ESettingType& InSettingType, struct FText& NameText, float& PreviousValue, float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ShowViewerCountChanged (Underlying native function: ShowViewerCountChanged 0xa669268)
	void ShowViewerCountChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ShowTemperatureChanged (Underlying native function: ShowTemperatureChanged 0xa6691f8)
	void ShowTemperatureChanged(bool& IsChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ShowSeasonLevelChanged (Underlying native function: ShowSeasonLevelChanged 0xa669158)
	void ShowSeasonLevelChanged(bool& bInChanged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChatSettings (Underlying native function: SetVoiceChatSettings 0xa669020)
	void SetVoiceChatSettings(enum ESocialCommsPermission& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChatPTTEnabled (Underlying native function: SetVoiceChatPTTEnabled 0xa668fa0)
	void SetVoiceChatPTTEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChatEnabled (Underlying native function: SetVoiceChatEnabled 0xa668f20)
	void SetVoiceChatEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVoiceChat3DEnabled (Underlying native function: SetVoiceChat3DEnabled 0xa668ea0)
	void SetVoiceChat3DEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetVisualizeAudioSources (Underlying native function: SetVisualizeAudioSources 0xa668e20)
	void SetVisualizeAudioSources(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetSubtitlesEnabled (Underlying native function: SetSubtitlesEnabled 0xa668bec)
	void SetSubtitlesEnabled(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetShowVoiceIndicators (Underlying native function: SetShowVoiceIndicators 0xa668aec)
	void SetShowVoiceIndicators(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetQuality (Underlying native function: SetQuality 0xa668a80)
	void SetQuality(int& NewQuality); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetLockPrimaryInputMethodToMouse (Underlying native function: SetLockPrimaryInputMethodToMouse 0xa668a00)
	void SetLockPrimaryInputMethodToMouse(bool& bLock); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetIgnoreGamepadInput (Underlying native function: SetIgnoreGamepadInput 0xa668900)
	void SetIgnoreGamepadInput(bool& bIgnore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetEnableRudderControl (Underlying native function: SetEnableRudderControl 0xa6687f0)
	void SetEnableRudderControl(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetColorBlindStrength (Underlying native function: SetColorBlindStrength 0xa668770)
	void SetColorBlindStrength(int& InColorBlindStrength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetColorBlindMode (Underlying native function: SetColorBlindMode 0xa6686f0)
	void SetColorBlindMode(int& InMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetAutoJoinGameVoiceChannel (Underlying native function: SetAutoJoinGameVoiceChannel 0xa668670)
	void SetAutoJoinGameVoiceChannel(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SetAllowSidekickFeature1 (Underlying native function: SetAllowSidekickFeature1 0xa6685d0)
	void SetAllowSidekickFeature1(bool& bInChecked); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortSettingsContext.SetAllowGameVolumeWhenMinimized (Underlying native function: SetAllowGameVolumeWhenMinimized 0xa668534)
	void SetAllowGameVolumeWhenMinimized(enum EFortAllowBackgroundAudioSetting& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ScopedMultiplierValueChanged (Underlying native function: ScopedMultiplierValueChanged 0xa668420)
	void ScopedMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.SafeZoneChanged (Underlying native function: SafeZoneChanged 0xa6683ac)
	void SafeZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RudderMaxThrottleChanged (Underlying native function: RudderMaxThrottleChanged 0xa668328)
	void RudderMaxThrottleChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RudderDeadZoneChanged (Underlying native function: RudderDeadZoneChanged 0xa6682a4)
	void RudderDeadZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RotatorSettingReset (Underlying native function: RotatorSettingReset 0xa66814c)
	void RotatorSettingReset(enum ESettingType& InSettingType, struct FText& NameText, int& PreviousValue, int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.RotatorSettingChanged (Underlying native function: RotatorSettingChanged 0xa667ff4)
	void RotatorSettingChanged(enum ESettingType& InSettingType, struct FText& NameText, int& PreviousValue, int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ResetGamepadMoveStickDeadZone (Underlying native function: ResetGamepadMoveStickDeadZone 0xa667f48)
	void ResetGamepadMoveStickDeadZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ResetGamepadLookStickDeadZone (Underlying native function: ResetGamepadLookStickDeadZone 0xa667f00)
	void ResetGamepadLookStickDeadZone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PowerSaverModeChanged (Underlying native function: PowerSaverModeChanged 0xa6677e4)
	void PowerSaverModeChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchInversionReset (Underlying native function: PitchInversionReset 0xa667474)
	void PitchInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchInversionChanged (Underlying native function: PitchInversionChanged 0xa6673f4)
	void PitchInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForMotionInversionReset (Underlying native function: PitchForMotionInversionReset 0xa667374)
	void PitchForMotionInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForMotionInversionChanged (Underlying native function: PitchForMotionInversionChanged 0xa667374)
	void PitchForMotionInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftSecondaryInversionReset (Underlying native function: PitchForAircraftSecondaryInversionReset 0xa6672f4)
	void PitchForAircraftSecondaryInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftSecondaryInversionChanged (Underlying native function: PitchForAircraftSecondaryInversionChanged 0xa6672f4)
	void PitchForAircraftSecondaryInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftPrimaryInversionReset (Underlying native function: PitchForAircraftPrimaryInversionReset 0xa667274)
	void PitchForAircraftPrimaryInversionReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PitchForAircraftPrimaryInversionChanged (Underlying native function: PitchForAircraftPrimaryInversionChanged 0xa667274)
	void PitchForAircraftPrimaryInversionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.PeripheralLightingChanged (Underlying native function: PeripheralLightingChanged 0xa6671f4)
	void PeripheralLightingChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OpenSettingsIfSaved (Underlying native function: OpenSettingsIfSaved 0xa6671e0)
	void OpenSettingsIfSaved(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnTurboBuildReset (Underlying native function: OnTurboBuildReset 0xa667160)
	void OnTurboBuildReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnTurboBuildChanged (Underlying native function: OnTurboBuildChanged 0xa6670e0)
	void OnTurboBuildChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnTouchEditChanged (Underlying native function: OnTouchEditChanged 0xa667060)
	void OnTouchEditChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnSmartBuildChanged (Underlying native function: OnSmartBuildChanged 0xa666fc0)
	void OnSmartBuildChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnSlideButtonHoldTimeChanged (Underlying native function: OnSlideButtonHoldTimeChanged 0xa666f3c)
	void OnSlideButtonHoldTimeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnShowGlobalChatEnabledChanged (Underlying native function: OnShowGlobalChatEnabledChanged 0xa666ebc)
	void OnShowGlobalChatEnabledChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnShadowPlayHighlightsChanged (Underlying native function: OnShadowPlayHighlightsChanged 0xa666e3c)
	void OnShadowPlayHighlightsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnReplayRecordingPreferenceChanged (Underlying native function: OnReplayRecordingPreferenceChanged 0xa666dbc)
	void OnReplayRecordingPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnQuickEditChanged (Underlying native function: OnQuickEditChanged 0xa666d3c)
	void OnQuickEditChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnPlayerSurveysAllowedChanged (Underlying native function: OnPlayerSurveysAllowedChanged 0xa666cbc)
	void OnPlayerSurveysAllowedChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnPlaceDangerMarkerWhenTargetingChanged (Underlying native function: OnPlaceDangerMarkerWhenTargetingChanged 0xa666c3c)
	void OnPlaceDangerMarkerWhenTargetingChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnLocalNotificationsChanged (Underlying native function: OnLocalNotificationsChanged 0xa666b3c)
	void OnLocalNotificationsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnLargeTeamsReplayRecordingPreferenceChanged (Underlying native function: OnLargeTeamsReplayRecordingPreferenceChanged 0xa666abc)
	void OnLargeTeamsReplayRecordingPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnHUDScaleChanged (Underlying native function: OnHUDScaleChanged 0xa666a38)
	void OnHUDScaleChanged(float& bInHUDScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnGamepadAutoRunChanged (Underlying native function: OnGamepadAutoRunChanged 0xa6669b8)
	void OnGamepadAutoRunChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnForceFeedbackChanged (Underlying native function: OnForceFeedbackChanged 0xa666938)
	void OnForceFeedbackChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena (Underlying native function: OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena 0xa6668b8)
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged (Underlying native function: OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged 0xa666838)
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEnableTryBuildOnFocusChanged (Underlying native function: OnEnableTryBuildOnFocusChanged 0xa6667b8)
	void OnEnableTryBuildOnFocusChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEnablePreferredItemSlotsChanged (Underlying native function: OnEnablePreferredItemSlotsChanged 0xa666718)
	void OnEnablePreferredItemSlotsChanged(bool& bInChanged); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEditModeAimAssistChanged (Underlying native function: OnEditModeAimAssistChanged 0xa666698)
	void OnEditModeAimAssistChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEditConfirmOnReleaseChanged (Underlying native function: OnEditConfirmOnReleaseChanged 0xa666618)
	void OnEditConfirmOnReleaseChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnEditButtonHoldTimeChanged (Underlying native function: OnEditButtonHoldTimeChanged 0xa666594)
	void OnEditButtonHoldTimeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnDisablePreEditsWhenPlacingBuildingChanged (Underlying native function: OnDisablePreEditsWhenPlacingBuildingChanged 0xa666514)
	void OnDisablePreEditsWhenPlacingBuildingChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCrossplayPreferenceChanged (Underlying native function: OnCrossplayPreferenceChanged 0xa666494)
	void OnCrossplayPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCreativeTurboDeleteReset (Underlying native function: OnCreativeTurboDeleteReset 0xa666414)
	void OnCreativeTurboDeleteReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCreativeTurboDeleteChanged (Underlying native function: OnCreativeTurboDeleteChanged 0xa666414)
	void OnCreativeTurboDeleteChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnCreativeModeReplayRecordingPreferenceChanged (Underlying native function: OnCreativeModeReplayRecordingPreferenceChanged 0xa666394)
	void OnCreativeModeReplayRecordingPreferenceChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnContextTutorialChanged (Underlying native function: OnContextTutorialChanged 0xa666314)
	void OnContextTutorialChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnClipRemindersEnabledChanged (Underlying native function: OnClipRemindersEnabledChanged 0xa666230)
	void OnClipRemindersEnabledChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnBuildingPossessionChanged (Underlying native function: OnBuildingPossessionChanged 0xa6661b0)
	void OnBuildingPossessionChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoSortConsumablesToRightChanged (Underlying native function: OnAutoSortConsumablesToRightChanged 0xa66606c)
	void OnAutoSortConsumablesToRightChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoPickupWeaponsConsolePCChanged (Underlying native function: OnAutoPickupWeaponsConsolePCChanged 0xa665fec)
	void OnAutoPickupWeaponsConsolePCChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoPickupWeaponsChanged (Underlying native function: OnAutoPickupWeaponsChanged 0xa665f6c)
	void OnAutoPickupWeaponsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoOpenDoorsChanged (Underlying native function: OnAutoOpenDoorsChanged 0xa665eec)
	void OnAutoOpenDoorsChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoClamberChanged (Underlying native function: OnAutoClamberChanged 0xa665e4c)
	void OnAutoClamberChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoChangeMaterialReset (Underlying native function: OnAutoChangeMaterialReset 0xa665dcc)
	void OnAutoChangeMaterialReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAutoChangeMaterialChanged (Underlying native function: OnAutoChangeMaterialChanged 0xa665d4c)
	void OnAutoChangeMaterialChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAimAssistReset (Underlying native function: OnAimAssistReset 0xa665ccc)
	void OnAimAssistReset(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.OnAimAssistChanged (Underlying native function: OnAimAssistChanged 0xa665c4c)
	void OnAimAssistChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MusicVolumeChanged (Underlying native function: MusicVolumeChanged 0xa665bc8)
	void MusicVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MouseSensitivityYChanged (Underlying native function: MouseSensitivityYChanged 0xa665b44)
	void MouseSensitivityYChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MouseSensitivityXChanged (Underlying native function: MouseSensitivityXChanged 0xa665ac0)
	void MouseSensitivityXChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MouseSensitivityMultiplierForAircraftChanged (Underlying native function: MouseSensitivityMultiplierForAircraftChanged 0xa665a3c)
	void MouseSensitivityMultiplierForAircraftChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionTargetingMultiplierValueChanged (Underlying native function: MotionTargetingMultiplierValueChanged 0xa6659b8)
	void MotionTargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionScopedMultiplierValueChanged (Underlying native function: MotionScopedMultiplierValueChanged 0xa665934)
	void MotionScopedMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionHarvestingToolMultiplierValueChanged (Underlying native function: MotionHarvestingToolMultiplierValueChanged 0xa6658b0)
	void MotionHarvestingToolMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionControlEnabledValueChanged (Underlying native function: MotionControlEnabledValueChanged 0xa665830)
	void MotionControlEnabledValueChanged(bool& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MotionAxisValueChanged (Underlying native function: MotionAxisValueChanged 0xa6657b0)
	void MotionAxisValueChanged(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.MasterVolumeChanged (Underlying native function: MasterVolumeChanged 0xa66572c)
	void MasterVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.InWorldInteractChanged (Underlying native function: InWorldInteractChanged 0xa665140)
	void InWorldInteractChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HoldToSwapPickupChanged (Underlying native function: HoldToSwapPickupChanged 0xa6650c0)
	void HoldToSwapPickupChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HideOtherPlayerNamesChanged (Underlying native function: HideOtherPlayerNamesChanged 0xa664f44)
	void HideOtherPlayerNamesChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HiddenMatchmakingDelayMaxReset (Underlying native function: HiddenMatchmakingDelayMaxReset 0xa664f30)
	void HiddenMatchmakingDelayMaxReset(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.HiddenMatchmakingDelayMaxChanged (Underlying native function: HiddenMatchmakingDelayMaxChanged 0xa664eb0)
	void HiddenMatchmakingDelayMaxChanged(int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GyroSensitivityValueChanged (Underlying native function: GyroSensitivityValueChanged 0xa6643d8)
	void GyroSensitivityValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetYawInversionState (Underlying native function: GetYawInversionState 0xa6643b4)
	bool GetYawInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetYawForMotionInversionState (Underlying native function: GetYawForMotionInversionState 0xa664390)
	bool GetYawForMotionInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChatSettings (Underlying native function: GetVoiceChatSettings 0xa664354)
	enum ESocialCommsPermission GetVoiceChatSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChatPTTEnabled (Underlying native function: GetVoiceChatPTTEnabled 0xa664318)
	bool GetVoiceChatPTTEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChatEnabled (Underlying native function: GetVoiceChatEnabled 0xa6642d8)
	bool GetVoiceChatEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVoiceChat3DEnabled (Underlying native function: GetVoiceChat3DEnabled 0xa66429c)
	bool GetVoiceChat3DEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetVisualizeAudioSources (Underlying native function: GetVisualizeAudioSources 0xa664260)
	bool GetVisualizeAudioSources(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTurboBuild (Underlying native function: GetTurboBuild 0xa663df4)
	bool GetTurboBuild(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchVerticalSensitivityValue (Underlying native function: GetTouchVerticalSensitivityValue 0xa663dcc)
	float GetTouchVerticalSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchTargetingMultiplierValue (Underlying native function: GetTouchTargetingMultiplierValue 0xa663da4)
	float GetTouchTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchLookSensitivityValue (Underlying native function: GetTouchLookSensitivityValue 0xa663d7c)
	float GetTouchLookSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchLookAccelerationMultiplier (Underlying native function: GetTouchLookAccelerationMultiplier 0xa663d54)
	float GetTouchLookAccelerationMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchEditState (Underlying native function: GetTouchEditState 0xa663d18)
	bool GetTouchEditState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchEditModeMultiplierValue (Underlying native function: GetTouchEditModeMultiplierValue 0xa663cf0)
	float GetTouchEditModeMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchDragScopedSensitivityValue (Underlying native function: GetTouchDragScopedSensitivityValue 0xa663cc8)
	float GetTouchDragScopedSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTouchBuildingMultiplierValue (Underlying native function: GetTouchBuildingMultiplierValue 0xa663ca0)
	float GetTouchBuildingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTargetTypeIndicatorVisible (Underlying native function: GetTargetTypeIndicatorVisible 0xa662a58)
	bool GetTargetTypeIndicatorVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTargetingToggleState (Underlying native function: GetTargetingToggleState 0xa662abc)
	bool GetTargetingToggleState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTargetingMultiplierValue (Underlying native function: GetTargetingMultiplierValue 0xa662a94)
	float GetTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetTapInteractState (Underlying native function: GetTapInteractState 0xa662a34)
	bool GetTapInteractState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSubtitlesEnabled (Underlying native function: GetSubtitlesEnabled 0xa6629f8)
	bool GetSubtitlesEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSprintToggleState (Underlying native function: GetSprintToggleState 0xa6629d4)
	bool GetSprintToggleState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSprintCancelsReloadState (Underlying native function: GetSprintCancelsReloadState 0x2486284)
	bool GetSprintCancelsReloadState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSoundFXVolumeValue (Underlying native function: GetSoundFXVolumeValue 0xa6629ac)
	float GetSoundFXVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSmartBuildState (Underlying native function: GetSmartBuildState 0xa6626b0)
	bool GetSmartBuildState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSliderSettingValue (Underlying native function: GetSliderSettingValue 0xa662620)
	float GetSliderSettingValue(enum ESettingType& InSettingType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetSlideButtonHoldTimeValue (Underlying native function: GetSlideButtonHoldTimeValue 0xa6625f8)
	float GetSlideButtonHoldTimeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowVoiceIndicators (Underlying native function: GetShowVoiceIndicators 0xa6625a4)
	bool GetShowVoiceIndicators(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowViewerCountEnabled (Underlying native function: GetShowViewerCountEnabled 0xa662580)
	bool GetShowViewerCountEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowTemperature (Underlying native function: GetShowTemperature 0xa662540)
	bool GetShowTemperature(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowSeasonLevel (Underlying native function: GetShowSeasonLevel 0xa662500)
	bool GetShowSeasonLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShowGlobalChatEnabled (Underlying native function: GetShowGlobalChatEnabled 0xa6624c4)
	bool GetShowGlobalChatEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetShadowPlayHighlightsEnabled (Underlying native function: GetShadowPlayHighlightsEnabled 0xa662484)
	bool GetShadowPlayHighlightsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSettingDisplayNames (Underlying native function: GetSettingDisplayNames 0xa6623c0)
	struct TArray<struct FText> GetSettingDisplayNames(enum ESettingType& InSettingType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetScopedMultiplierValue (Underlying native function: GetScopedMultiplierValue 0xa66230c)
	float GetScopedMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetSafeZoneValue (Underlying native function: GetSafeZoneValue 0xa6622dc)
	float GetSafeZoneValue(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetRudderMaxThrottle (Underlying native function: GetRudderMaxThrottle 0xa6622b4)
	float GetRudderMaxThrottle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetRudderDeadZone (Underlying native function: GetRudderDeadZone 0xa66228c)
	float GetRudderDeadZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetRotatorSettingValue (Underlying native function: GetRotatorSettingValue 0xa662200)
	int GetRotatorSettingValue(enum ESettingType& InSettingType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetReplayRecordingEnabled (Underlying native function: GetReplayRecordingEnabled 0xa6621dc)
	bool GetReplayRecordingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetQuickEditState (Underlying native function: GetQuickEditState 0xa6621a0)
	bool GetQuickEditState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetQuality (Underlying native function: GetQuality 0xa662170)
	int GetQuality(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPreferredItemSlotType (Underlying native function: GetPreferredItemSlotType 0xa6620e4)
	enum EFortPreferredItemSlotItemType GetPreferredItemSlotType(int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPowerSaverMode (Underlying native function: GetPowerSaverMode 0xa6620a8)
	bool GetPowerSaverMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPlayerSurveysAllowed (Underlying native function: GetPlayerSurveysAllowed 0xa66206c)
	bool GetPlayerSurveysAllowed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPlaceDangerMarkerWhenTargeting (Underlying native function: GetPlaceDangerMarkerWhenTargeting 0xa662030)
	bool GetPlaceDangerMarkerWhenTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchInversionState (Underlying native function: GetPitchInversionState 0xa66200c)
	bool GetPitchInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchForMotionInversionState (Underlying native function: GetPitchForMotionInversionState 0xa661fe8)
	bool GetPitchForMotionInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchForAircraftSecondaryInversionState (Underlying native function: GetPitchForAircraftSecondaryInversionState 0xa661fc4)
	bool GetPitchForAircraftSecondaryInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPitchForAircraftPrimaryInversionState (Underlying native function: GetPitchForAircraftPrimaryInversionState 0xa661fa0)
	bool GetPitchForAircraftPrimaryInversionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetPeripheralLightingEnabled (Underlying native function: GetPeripheralLightingEnabled 0xa661f7c)
	bool GetPeripheralLightingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMusicVolumeValue (Underlying native function: GetMusicVolumeValue 0x2b9332c)
	float GetMusicVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMouseSensitivityValue (Underlying native function: GetMouseSensitivityValue 0xa661960)
	struct FVector2D GetMouseSensitivityValue(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMouseSensitivityMultiplierForAircraft (Underlying native function: GetMouseSensitivityMultiplierForAircraft 0xa661938)
	float GetMouseSensitivityMultiplierForAircraft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionTargetingMultiplierValue (Underlying native function: GetMotionTargetingMultiplierValue 0xa661910)
	float GetMotionTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionScopedMultiplierValue (Underlying native function: GetMotionScopedMultiplierValue 0xa6618e8)
	float GetMotionScopedMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionHarvestingToolMultiplierValue (Underlying native function: GetMotionHarvestingToolMultiplierValue 0xa6618c0)
	float GetMotionHarvestingToolMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionControlsEnabledValue (Underlying native function: GetMotionControlsEnabledValue 0xa661880)
	bool GetMotionControlsEnabledValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionAxisValue (Underlying native function: GetMotionAxisValue 0xa66185c)
	int GetMotionAxisValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetMotionAxisNames (Underlying native function: GetMotionAxisNames 0xa661820)
	struct TArray<struct FText> GetMotionAxisNames(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GetMasterVolumeValue (Underlying native function: GetMasterVolumeValue 0xa66149c)
	float GetMasterVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetLockPrimaryInputMethodToMouse (Underlying native function: GetLockPrimaryInputMethodToMouse 0xa661460)
	bool GetLockPrimaryInputMethodToMouse(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetLocalNotificationsState (Underlying native function: GetLocalNotificationsState 0xa661418)
	bool GetLocalNotificationsState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetLargeTeamsReplayRecordingEnabled (Underlying native function: GetLargeTeamsReplayRecordingEnabled 0xa66137c)
	bool GetLargeTeamsReplayRecordingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetInWorldInteractState (Underlying native function: GetInWorldInteractState 0xa6612d4)
	bool GetInWorldInteractState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetIgnoreGamepadInput (Underlying native function: GetIgnoreGamepadInput 0xa661298)
	bool GetIgnoreGamepadInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHUDScaleRaw (Underlying native function: GetHUDScaleRaw 0xa6610b0)
	float GetHUDScaleRaw(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHUDScale (Underlying native function: GetHUDScale 0xa661074)
	float GetHUDScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHoldToSwapPickupState (Underlying native function: GetHoldToSwapPickupState 0xa661274)
	bool GetHoldToSwapPickupState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHitNumbersMode (Underlying native function: GetHitNumbersMode 0xa661238)
	enum EHitNumbersMode GetHitNumbersMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHitFeedbackMode (Underlying native function: GetHitFeedbackMode 0xa6611fc)
	enum EHitFeedbackMode GetHitFeedbackMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHideOtherPlayerNames (Underlying native function: GetHideOtherPlayerNames 0xa6611b4)
	bool GetHideOtherPlayerNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetHiddenMatchmakingDelayMax (Underlying native function: GetHiddenMatchmakingDelayMax 0xa6610d8)
	int GetHiddenMatchmakingDelayMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGyroSensitivityValue (Underlying native function: GetGyroSensitivityValue 0xa660fa0)
	float GetGyroSensitivityValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGammaSettings (Underlying native function: GetGammaSettings 0xa660f18)
	float GetGammaSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadTargetingMultiplierValue (Underlying native function: GetGamepadTargetingMultiplierValue 0xa660ef0)
	float GetGamepadTargetingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadScopedMultiplierValue (Underlying native function: GetGamepadScopedMultiplierValue 0xa660ec8)
	float GetGamepadScopedMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadMoveStickDeadZone (Underlying native function: GetGamepadMoveStickDeadZone 0xa660ea0)
	float GetGamepadMoveStickDeadZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadLookStickDeadZone (Underlying native function: GetGamepadLookStickDeadZone 0xa660e78)
	float GetGamepadLookStickDeadZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadLookSensitivityValue (Underlying native function: GetGamepadLookSensitivityValue 0xa660e48)
	struct FVector2D GetGamepadLookSensitivityValue(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadEditModeMultiplierValue (Underlying native function: GetGamepadEditModeMultiplierValue 0xa660e20)
	float GetGamepadEditModeMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadBuildingMultiplierValue (Underlying native function: GetGamepadBuildingMultiplierValue 0xa660df8)
	float GetGamepadBuildingMultiplierValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetGamepadAutoRunState (Underlying native function: GetGamepadAutoRunState 0xa660dd4)
	bool GetGamepadAutoRunState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetForceFeedbackState (Underlying native function: GetForceFeedbackState 0xa660d30)
	bool GetForceFeedbackState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena (Underlying native function: GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena 0xa660d0c)
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState (Underlying native function: GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState 0xa660ce8)
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetFirstPersonCameraState (Underlying native function: GetFirstPersonCameraState 0xa660cc4)
	bool GetFirstPersonCameraState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEnableTryBuildOnFocus (Underlying native function: GetEnableTryBuildOnFocus 0xa660c88)
	bool GetEnableTryBuildOnFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEnableRudderControl (Underlying native function: GetEnableRudderControl 0xa660c4c)
	bool GetEnableRudderControl(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEnablePreferredItemSlots (Underlying native function: GetEnablePreferredItemSlots 0xa660c0c)
	bool GetEnablePreferredItemSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEditModeAimAssistState (Underlying native function: GetEditModeAimAssistState 0xa660bd0)
	bool GetEditModeAimAssistState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEditConfirmOnReleaseState (Underlying native function: GetEditConfirmOnReleaseState 0xa660b94)
	bool GetEditConfirmOnReleaseState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetEditButtonHoldTimeValue (Underlying native function: GetEditButtonHoldTimeValue 0xa660b6c)
	float GetEditButtonHoldTimeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetDisablePreEditsWhenPlacingBuildingState (Underlying native function: GetDisablePreEditsWhenPlacingBuildingState 0xa6609d0)
	bool GetDisablePreEditsWhenPlacingBuildingState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetDialogVolumeValue (Underlying native function: GetDialogVolumeValue 0xa6609a8)
	float GetDialogVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCrossplayPreference (Underlying native function: GetCrossplayPreference 0xa6607e8)
	bool GetCrossplayPreference(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCreativeTurboDelete (Underlying native function: GetCreativeTurboDelete 0xa6607c4)
	bool GetCreativeTurboDelete(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCreativeModeReplayRecordingEnabled (Underlying native function: GetCreativeModeReplayRecordingEnabled 0xa6607a0)
	bool GetCreativeModeReplayRecordingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetContextTutorialState (Underlying native function: GetContextTutorialState 0xa66077c)
	bool GetContextTutorialState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetColorBlindStrength (Underlying native function: GetColorBlindStrength 0xa66040c)
	int GetColorBlindStrength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetColorBlindModeNames (Underlying native function: GetColorBlindModeNames 0xa6603d0)
	struct TArray<struct FText> GetColorBlindModeNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetColorBlindMode (Underlying native function: GetColorBlindMode 0xa660394)
	int GetColorBlindMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetClipRemindersEnabled (Underlying native function: GetClipRemindersEnabled 0xa660358)
	bool GetClipRemindersEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetCinematicsVolume (Underlying native function: GetCinematicsVolume 0xa660330)
	float GetCinematicsVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetChatVolumeValue (Underlying native function: GetChatVolumeValue 0xa66023c)
	float GetChatVolumeValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetBuildingPossessionShown (Underlying native function: GetBuildingPossessionShown 0xa660134)
	bool GetBuildingPossessionShown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoSortConsumablesToRight (Underlying native function: GetAutoSortConsumablesToRight 0xa6600f8)
	bool GetAutoSortConsumablesToRight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoPickupWeaponsConsolePC (Underlying native function: GetAutoPickupWeaponsConsolePC 0xa6600bc)
	bool GetAutoPickupWeaponsConsolePC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoPickupWeapons (Underlying native function: GetAutoPickupWeapons 0xa660080)
	bool GetAutoPickupWeapons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoOpenDoors (Underlying native function: GetAutoOpenDoors 0xa660040)
	bool GetAutoOpenDoors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoJoinGameVoiceChannel (Underlying native function: GetAutoJoinGameVoiceChannel 0xa660004)
	bool GetAutoJoinGameVoiceChannel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoEquipState (Underlying native function: GetAutoEquipState 0xa65ffe0)
	bool GetAutoEquipState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoClamberEnabled (Underlying native function: GetAutoClamberEnabled 0xa65ffa4)
	bool GetAutoClamberEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAutoChangeMaterial (Underlying native function: GetAutoChangeMaterial 0xa65ff80)
	bool GetAutoChangeMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAnonymousModeEnabled (Underlying native function: GetAnonymousModeEnabled 0xa65ff5c)
	bool GetAnonymousModeEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAnonymousCharacterModeEnabled (Underlying native function: GetAnonymousCharacterModeEnabled 0xa65ff38)
	bool GetAnonymousCharacterModeEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAllowSidekickFeature1 (Underlying native function: GetAllowSidekickFeature1 0xa65fefc)
	bool GetAllowSidekickFeature1(); // (Final | Native | Public | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAllowGameVolumeWhenMinimized (Underlying native function: GetAllowGameVolumeWhenMinimized 0xa65fec0)
	enum EFortAllowBackgroundAudioSetting GetAllowGameVolumeWhenMinimized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GetAimAssistState (Underlying native function: GetAimAssistState 0xa65fe80)
	bool GetAimAssistState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadTargetingMultiplierValueChanged (Underlying native function: GamepadTargetingMultiplierValueChanged 0xa65fdfc)
	void GamepadTargetingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadScopedMultiplierValueChanged (Underlying native function: GamepadScopedMultiplierValueChanged 0xa65fd78)
	void GamepadScopedMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadMoveStickDeadZoneChanged (Underlying native function: GamepadMoveStickDeadZoneChanged 0xa65fcf4)
	void GamepadMoveStickDeadZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadLookStickDeadZoneChanged (Underlying native function: GamepadLookStickDeadZoneChanged 0xa65fc70)
	void GamepadLookStickDeadZoneChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadLookSensitivityYChanged (Underlying native function: GamepadLookSensitivityYChanged 0xa65fbec)
	void GamepadLookSensitivityYChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadLookSensitivityXChanged (Underlying native function: GamepadLookSensitivityXChanged 0xa65fb68)
	void GamepadLookSensitivityXChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadEditModeMultiplierValueChanged (Underlying native function: GamepadEditModeMultiplierValueChanged 0xa65fae4)
	void GamepadEditModeMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.GamepadBuildingMultiplierValueChanged (Underlying native function: GamepadBuildingMultiplierValueChanged 0xa65fa60)
	void GamepadBuildingMultiplierValueChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.FirstPersonCameraChanged (Underlying native function: FirstPersonCameraChanged 0xa65f9e0)
	void FirstPersonCameraChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.DialogVolumeChanged (Underlying native function: DialogVolumeChanged 0xa65f24c)
	void DialogVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.CinematicsVolumeChanged (Underlying native function: CinematicsVolumeChanged 0xa65f16c)
	void CinematicsVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.ChatVolumeChanged (Underlying native function: ChatVolumeChanged 0xa65f0b0)
	void ChatVolumeChanged(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.AutoEquipChanged (Underlying native function: AutoEquipChanged 0xa65eccc)
	void AutoEquipChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.AnonymousModeChanged (Underlying native function: AnonymousModeChanged 0xa65ebe8)
	void AnonymousModeChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingsContext.AnonymousCharacterModeChanged (Underlying native function: AnonymousCharacterModeChanged 0xa65eb68)
	void AnonymousCharacterModeChanged(bool& bInChecked); // (Final | Native | Public | BlueprintCallable)
};

