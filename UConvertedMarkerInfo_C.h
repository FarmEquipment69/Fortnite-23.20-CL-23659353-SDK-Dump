// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C
// Size: 0x388
class UConvertedMarkerInfo_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UImage* ImageAvatar; // 0x298 (0x8)
	class UImage* ImageCommand; // 0x2a0 (0x8)
	class UCommonVisibilitySwitcher* ImageSwitcher; // 0x2a8 (0x8)
	class UImage* SquadMarker; // 0x2b0 (0x8)
	struct FTimerHandle* DBNOPulseTimer; // 0x2b8 (0x8)
	struct FGameplayTagContainer RelevantPlaylistTags; // 0x2c0 (0x20)
	bool bIsTalking; // 0x2e0 (0x1)
	bool bShowBackgroundOverridden; // 0x2e1 (0x1)
	bool bEnemyVersion; // 0x2e2 (0x1)
	unsigned char unreflected_2e3[0x5]; // 0x2e3 (0x5) 
	struct TWeakObjectPtr<class UTexture2D> IconMove; // 0x2e8 (0x28)
	struct TWeakObjectPtr<class UTexture2D> IconHold; // 0x310 (0x28)
	struct TWeakObjectPtr<class UTexture2D> IconBackToMe; // 0x338 (0x28)
	struct TWeakObjectPtr<class UTexture2D> IconRevive; // 0x360 (0x28)

	/* Functions */

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.SetBackgroundVisibility (Has no native function)
	void SetBackgroundVisibility(bool& bOverride, bool& bBackgroundVisible, bool& bLocalBackgroundVisible, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, bool& CallFuncK2IsValidTimerHandleReturnValue, enum ESlateVisibility& K2NodeSelectDefault, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_68559753464A154900ECA9BC6BB940C0 (Has no native function)
	void OnLoaded68559753464A154900ECA9BC6BB940C0(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3 (Has no native function)
	void OnLoaded25BCEE7642585A8BD6CE1CAFC70FEAF3(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.OverrideShowBackground (Has no native function)
	void OverrideShowBackground(bool& bShowBackground); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitPlayerIconState (Has no native function)
	void InitPlayerIconState(class AFortPlayerStateAthena*& PSA); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.UpdateCommandIcon (Has no native function)
	void UpdateCommandIcon(enum PingCommandType& PingCommand, class AFortPlayerStateAthena*& PSA); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitNPCCommandIcon (Has no native function)
	void InitNPCCommandIcon(class AFortPlayerStateAthena*& PSA); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C.ExecuteUbergraph_ConvertedMarkerInfo (Has no native function)
	void ExecuteUbergraphConvertedMarkerInfo(int& EntryPoint, enum PingCommandType& TempbyteVariable, struct TWeakObjectPtr<class UTexture2D>& TempsoftobjectVariable, struct TWeakObjectPtr<class UTexture2D>& TempsoftobjectVariable1, struct TWeakObjectPtr<class UTexture2D>& TempsoftobjectVariable2, struct TWeakObjectPtr<class UTexture2D>& TempsoftobjectVariable3, bool& K2NodeCustomEventbShowBackground, bool& K2NodeEventIsDesignTime, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class AFortPlayerStateAthena*& K2NodeCustomEventPSA2, class AFortPlayerControllerAthena*& K2NodeDynamicCastAsFortPlayerControllerAthena, bool& K2NodeDynamicCastbSuccess, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetSocialAvatarBrushReturnValue, struct FLinearColor& CallFuncGetPinColorReturnValue, class UObject*& TempobjectVariable, class UTexture2D*& K2NodeDynamicCastAsTexture2D, bool& K2NodeDynamicCastbSuccess1, class UObject*& K2NodeCustomEventLoaded, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, enum PingCommandType& K2NodeCustomEventPingCommand, class AFortPlayerStateAthena*& K2NodeCustomEventPSA1, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FLinearColor& CallFuncGetPinColorReturnValue1, bool& K2NodeSwitchEnumCmpSuccess, struct TWeakObjectPtr<class UTexture2D>& K2NodeSelectDefault, class AFortPlayerStateAthena*& K2NodeCustomEventPSA, class UObject*& TempobjectVariable1, class UObject*& K2NodeCustomEventLoaded1, class UTexture2D*& K2NodeDynamicCastAsTexture2D1, bool& K2NodeDynamicCastbSuccess2, struct FDelegate& K2NodeCreateDelegateOutputDelegate1); // (Final | 0x00008000 | HasDefaults)
};

