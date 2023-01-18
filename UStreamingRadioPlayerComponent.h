// Class /Script/SrirachaRanch.StreamingRadioPlayerComponent
// Size: 0x438
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	struct TMap<struct FName, struct FSrirachaInputMappingData> InputMappingData; // 0xb0 (0x50)
	struct FMulticastInlineDelegate OnSourceLoading; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnSourcePlayed; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnSourceStopped; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnSourceFailed; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnRadioExplicitStop; // 0x140 (0x10)
	float PercentAutostartRadio; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	struct TArray<struct FName> DisabledVehicleList; // 0x158 (0x10)
	struct TMap<struct FName, float> ExteriorVolumeMultiplierMap; // 0x168 (0x50)
	struct TMap<struct FName, float> InteriorVolumeMultiplierMap; // 0x1b8 (0x50)
	bool bMinimalStateOnPlatform; // 0x208 (0x1)
	unsigned char unreflected_209[0x7]; // 0x209 (0x7) 
	struct TArray<struct FString> DisabledStationList; // 0x210 (0x10)
	bool bAutostartOnEntry; // 0x220 (0x1)
	bool bDisabledForCurrentPlayerState; // 0x221 (0x1)
	unsigned char unreflected_222[0x6]; // 0x222 (0x6) 
	struct FStreamingRadioSourceData ReplicatedRadioSourceData; // 0x228 (0x48)
	class UMediaSoundComponent* SoundComponent; // 0x270 (0x8)
	class UStreamingRadioAudioShapeComponent* AudioShape; // 0x278 (0x8)
	class USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource; // 0x280 (0x8)
	struct FAthenaRadioStation LastSource; // 0x288 (0x38)
	struct TArray<class URadioContentSourceItemDefinition*> Sources; // 0x2c0 (0x10)
	struct FAthenaRadioStation FallbackSource; // 0x2d0 (0x38)
	struct TMap<struct FName, struct FSrirachaPerClassSpecialSeats> SpecialSeatList; // 0x308 (0x50)
	class UMediaPlayer* MediaPlayer; // 0x358 (0x8)
	class UMediaPlayer* MediaPlayerInstance; // 0x360 (0x8)
	class UFortMediaPlayerCtrl* MediaController; // 0x368 (0x8)
	class USoundSubmixBase* DefaultSoundSubmix; // 0x370 (0x8)
	class USoundSubmixBase* LicensedSoundSubmix; // 0x378 (0x8)
	class UFortStreamMediaSource* LastMediaSource; // 0x380 (0x8)
	class UFortStreamMediaSource* IncomingMediaSource; // 0x388 (0x8)
	enum ERadioSource CurrentMode; // 0x390 (0x1)
	unsigned char unreflected_391[0x3]; // 0x391 (0x3) 
	int MaximumRetries; // 0x394 (0x4)
	int FadeoutWhenUnpoweredInMS; // 0x398 (0x4)
	int FadeoutWhenOwnerBeingDestroyedInMS; // 0x39c (0x4)
	int MaxFadeoutTimeMS; // 0x3a0 (0x4)
	int DefaultPlayingIndex; // 0x3a4 (0x4)
	class USoundMix* SoundMixInside; // 0x3a8 (0x8)
	class USoundMix* SoundMixOutside; // 0x3b0 (0x8)
	unsigned char unreflected_3b8[0x4]; // 0x3b8 (0x4) 
	float ActivationRadius; // 0x3bc (0x4)
	struct FName ComponentToAttachTo; // 0x3c0 (0x4)
	struct FName ComponentSocketAttachTo; // 0x3c4 (0x4)
	class UFortStreamMediaSource* MediaSource; // 0x3c8 (0x8)
	struct TArray<struct FAthenaRadioStation> RadioStationList; // 0x3d0 (0x10)
	class UObject* DelegateContextObject; // 0x3e0 (0x8)
	float MediaStartTimeFromInit; // 0x3e8 (0x4)
	unsigned char padding_3ec[0x4c]; // 0x3ec (0x4c)

	/* Functions */

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive (Underlying native function: ToggleRadioActive 0x754882c)
	void ToggleRadioActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout (Underlying native function: StopRadioWithFadeout 0x75487ac)
	void StopRadioWithFadeout(int& Milliseconds); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadio (Underlying native function: StopRadio 0x7548798)
	void StopRadio(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver (Underlying native function: StopIfNoDriver 0x7548708)
	void StopIfNoDriver(struct TScriptInterface<class IFortVehicleInterface>& Vehicle); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StartRadio (Underlying native function: StartRadio 0x7548644)
	void StartRadio(int& IdxToPlay, bool& bFallbackOverride); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState (Underlying native function: SoundMixUpdateWeaponState 0x7548418)
	void SoundMixUpdateWeaponState(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState (Underlying native function: SoundMixUpdateTargetingState 0x7548390)
	void SoundMixUpdateTargetingState(bool& bNewIsTargeting); // (Final | Native | Private)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume (Underlying native function: SetInteriorVolume 0x7548300)
	void SetInteriorVolume(struct TScriptInterface<class IFortVehicleInterface>& Vehicle); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume (Underlying native function: SetExteriorVolume 0x7548270)
	void SetExteriorVolume(struct TScriptInterface<class IFortVehicleInterface>& Vehicle); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius (Underlying native function: SetActivationRadius 0x75481e0)
	void SetActivationRadius(float& InRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio (Underlying native function: ServerStopRadio 0x14cfdb4)
	void ServerStopRadio(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState (Underlying native function: ServerSetDisabledForCurrentPlayerState 0x754815c)
	void ServerSetDisabledForCurrentPlayerState(bool& bInDisableForCurrentPlayerState); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime (Underlying native function: ServerSaveFadeOutTime 0x720c758)
	void ServerSaveFadeOutTime(float& InFadeOutSeconds); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource (Underlying native function: ServerSavedSource 0x75480c8)
	void ServerSavedSource(struct FAthenaRadioStation& InSource); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart (Underlying native function: ServerSaveAutoStart 0x7548044)
	void ServerSaveAutoStart(bool& bInAutoStart); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex (Underlying native function: ServerPlayIndex 0x7547f7c)
	void ServerPlayIndex(int& InIndex, enum EStreamingRadioSourceState& InState); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex (Underlying native function: PlayPrevIndex 0x7547f68)
	void PlayPrevIndex(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex (Underlying native function: PlayNextIndex 0x7547f54)
	void PlayNextIndex(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex (Underlying native function: PlayDefaultIndex 0x7547f38)
	void PlayDefaultIndex(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL (Underlying native function: OnSuccessfulURL 0x7547dd8)
	void OnSuccessfulURL(struct FString& URL); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData (Underlying native function: OnRep_RadioSourceData 0x14d3504)
	void OnRepRadioSourceData(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged (Underlying native function: OnPiPPlayerBlockedChanged 0x7547d50)
	void OnPiPPlayerBlockedChanged(bool& bPiPPlayerBlocking); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle (Has no native function)
	void OnPawnExitVehicle(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat (Has no native function)
	void OnPawnExitSeat(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle (Has no native function)
	void OnPawnEnterVehicle(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat (Has no native function)
	void OnPawnEnterSeat(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied (Underlying native function: OnOwningVehicleDied 0x7547bc8)
	void OnOwningVehicleDied(class AFortAthenaVehicle*& DeadVehicle, struct FGameplayTagContainer& InTags, class AController*& EventInstigator, class AActor*& DamageCauser); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered (Underlying native function: OnOwnerUnpowered 0x7547bb0)
	void OnOwnerUnpowered(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled (Underlying native function: OnOwnerReFueled 0x26a0894)
	void OnOwnerReFueled(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel (Underlying native function: OnOwnerOutOfFuel 0x7547b90)
	void OnOwnerOutOfFuel(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded (Underlying native function: OnOwnerExploded 0x7547b78)
	void OnOwnerExploded(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnLicensedAudioSettingChanged (Underlying native function: OnLicensedAudioSettingChanged 0x7547af8)
	void OnLicensedAudioSettingChanged(class UFortClientSettingsRecord*& Settings); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL (Underlying native function: OnFailedURL 0x7547998)
	void OnFailedURL(struct FString& URL); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged (Underlying native function: NativeOnVehicleOwnerChanged 0x7547880)
	void NativeOnVehicleOwnerChanged(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AActor*& NewOwner, class AActor*& PrevOwner); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle (Underlying native function: NativeOnPawnExitVehicle 0x14d3ab0)
	void NativeOnPawnExitVehicle(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat (Underlying native function: NativeOnPawnExitSeat 0x14d3c58)
	void NativeOnPawnExitSeat(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle (Underlying native function: NativeOnPawnEnterVehicle 0x27c2c4c)
	void NativeOnPawnEnterVehicle(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat (Underlying native function: NativeOnPawnEnterSeat 0x14d3764)
	void NativeOnPawnEnterSeat(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaReady (Underlying native function: MediaReady 0x7547720)
	void MediaReady(struct FString& String); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed (Underlying native function: MediaPlayed 0x754770c)
	void MediaPlayed(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad (Underlying native function: MediaLoad 0x75476f8)
	void MediaLoad(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed (Underlying native function: MediaFinishedOrClosed 0x75476e4)
	void MediaFinishedOrClosed(); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen (Underlying native function: MediaFailedToOpen 0x7547584)
	void MediaFailedToOpen(struct FString& String); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose (Underlying native function: MediaExplicitClose 0x7547504)
	void MediaExplicitClose(bool& bReallyExplicit); // (Final | Native | Protected)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed (Underlying native function: IsPlayingLiveFeed 0x75474dc)
	bool IsPlayingLiveFeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat (Underlying native function: IsExternalSeat 0x7547450)
	bool IsExternalSeat(int& SeatIdx); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt (Underlying native function: GetOptionAt 0x75473a8)
	struct FAthenaRadioStation GetOptionAt(int& idx); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

