// Class /Script/Engine.GameplayStatics
// Size: 0x28
class UGameplayStatics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.GameplayStatics.UnRetainAllSoundsInSoundClass (Underlying native function: UnRetainAllSoundsInSoundClass 0x9da3cbc)
	static void UnRetainAllSoundsInSoundClass(class USoundClass*& InSoundClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.UnloadStreamLevelBySoftObjectPtr (Underlying native function: UnloadStreamLevelBySoftObjectPtr 0x9da3e84)
	static void UnloadStreamLevelBySoftObjectPtr(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UWorld>& Level, struct FLatentActionInfo& LatentInfo, bool& bShouldBlockOnUnload); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.UnloadStreamLevel (Underlying native function: UnloadStreamLevel 0x9da3d2c)
	static void UnloadStreamLevel(class UObject*& WorldContextObject, struct FName& LevelName, struct FLatentActionInfo& LatentInfo, bool& bShouldBlockOnUnload); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SuggestProjectileVelocity_CustomArc (Underlying native function: SuggestProjectileVelocity_CustomArc 0x9da3acc)
	static bool SuggestProjectileVelocityCustomArc(class UObject*& WorldContextObject, struct FVector& OutLaunchVelocity, struct FVector& StartPos, struct FVector& EndPos, float& OverrideGravityZ, float& ArcParam); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnSoundAttached (Underlying native function: SpawnSoundAttached 0xecb2b0)
	static class UAudioComponent* SpawnSoundAttached(class USoundBase*& sound, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bStopWhenAttachedToDestroyed, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundAttenuation*& AttenuationSettings, class USoundConcurrency*& ConcurrencySettings, bool& bAutoDestroy); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnSoundAtLocation (Underlying native function: SpawnSoundAtLocation 0x17fe0b8)
	static class UAudioComponent* SpawnSoundAtLocation(class UObject*& WorldContextObject, class USoundBase*& sound, struct FVector& Location, struct FRotator& Rotation, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundAttenuation*& AttenuationSettings, class USoundConcurrency*& ConcurrencySettings, bool& bAutoDestroy); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnSound2D (Underlying native function: SpawnSound2D 0x17fdb1c)
	static class UAudioComponent* SpawnSound2D(class UObject*& WorldContextObject, class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundConcurrency*& ConcurrencySettings, bool& bPersistAcrossLevelTransition, bool& bAutoDestroy); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnObject (Underlying native function: SpawnObject 0x18da588)
	static class UObject* SpawnObject(class UClass*& ObjectClass, class UObject*& Outer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnForceFeedbackAttached (Underlying native function: SpawnForceFeedbackAttached 0x9da364c)
	static class UForceFeedbackComponent* SpawnForceFeedbackAttached(class UForceFeedbackEffect*& ForceFeedbackEffect, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bStopWhenAttachedToDestroyed, bool& bLooping, float& IntensityMultiplier, float& StartTime, class UForceFeedbackAttenuation*& AttenuationSettings, bool& bAutoDestroy); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnForceFeedbackAtLocation (Underlying native function: SpawnForceFeedbackAtLocation 0x271ec08)
	static class UForceFeedbackComponent* SpawnForceFeedbackAtLocation(class UObject*& WorldContextObject, class UForceFeedbackEffect*& ForceFeedbackEffect, struct FVector& Location, struct FRotator& Rotation, bool& bLooping, float& IntensityMultiplier, float& StartTime, class UForceFeedbackAttenuation*& AttenuationSettings, bool& bAutoDestroy); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnEmitterAttached (Underlying native function: SpawnEmitterAttached 0x22ceb1c)
	static class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem*& EmitterTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnEmitterAtLocation (Underlying native function: SpawnEmitterAtLocation 0x25f9bac)
	static class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject*& WorldContextObject, class UParticleSystem*& EmitterTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivateSystem); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnDialogueAttached (Underlying native function: SpawnDialogueAttached 0x9da31a8)
	static class UAudioComponent* SpawnDialogueAttached(class UDialogueWave*& Dialogue, struct FDialogueContext& Context, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bStopWhenAttachedToDestroyed, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundAttenuation*& AttenuationSettings, bool& bAutoDestroy); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnDialogueAtLocation (Underlying native function: SpawnDialogueAtLocation 0x9da2ddc)
	static class UAudioComponent* SpawnDialogueAtLocation(class UObject*& WorldContextObject, class UDialogueWave*& Dialogue, struct FDialogueContext& Context, struct FVector& Location, struct FRotator& Rotation, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundAttenuation*& AttenuationSettings, bool& bAutoDestroy); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnDialogue2D (Underlying native function: SpawnDialogue2D 0x9da2b54)
	static class UAudioComponent* SpawnDialogue2D(class UObject*& WorldContextObject, class UDialogueWave*& Dialogue, struct FDialogueContext& Context, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, bool& bAutoDestroy); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnDecalAttached (Underlying native function: SpawnDecalAttached 0x9da261c)
	static class UDecalComponent* SpawnDecalAttached(class UMaterialInterface*& DecalMaterial, struct FVector& DecalSize, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct TEnumAsByte<EAttachLocation>& LocationType, float& LifeSpan); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SpawnDecalAtLocation (Underlying native function: SpawnDecalAtLocation 0x206900c)
	static class UDecalComponent* SpawnDecalAtLocation(class UObject*& WorldContextObject, class UMaterialInterface*& DecalMaterial, struct FVector& DecalSize, struct FVector& Location, struct FRotator& Rotation, float& LifeSpan); // (Final | BlueprintCosmetic | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetWorldOriginLocation (Underlying native function: SetWorldOriginLocation 0x9da24b4)
	static void SetWorldOriginLocation(class UObject*& WorldContextObject, struct FIntVector& NewLocation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetViewportMouseCaptureMode (Underlying native function: SetViewportMouseCaptureMode 0x9da2364)
	static void SetViewportMouseCaptureMode(class UObject*& WorldContextObject, enum EMouseCaptureMode& MouseCaptureMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetSubtitlesEnabled (Underlying native function: SetSubtitlesEnabled 0x9da2178)
	static void SetSubtitlesEnabled(bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetSoundMixClassOverride (Underlying native function: SetSoundMixClassOverride 0x9da1d1c)
	static void SetSoundMixClassOverride(class UObject*& WorldContextObject, class USoundMix*& InSoundMixModifier, class USoundClass*& InSoundClass, float& Volume, float& Pitch, float& FadeInTime, bool& bApplyToChildren); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetSoundClassDistanceScale (Underlying native function: SetSoundClassDistanceScale 0x9da1be4)
	static void SetSoundClassDistanceScale(class UObject*& WorldContextObject, class USoundClass*& SoundClass, float& DistanceAttenuationScale, float& TimeSec); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetPlayerPlatformUserId (Underlying native function: SetPlayerPlatformUserId 0x9da16c0)
	static void SetPlayerPlatformUserId(class APlayerController*& PlayerController, struct FPlatformUserId& UserId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetPlayerControllerID (Underlying native function: SetPlayerControllerID 0x9da15bc)
	static void SetPlayerControllerID(class APlayerController*& Player, int& ControllerId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetMaxAudioChannelsScaled (Underlying native function: SetMaxAudioChannelsScaled 0x9da1480)
	static void SetMaxAudioChannelsScaled(class UObject*& WorldContextObject, float& MaxChannelCountScale); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetGlobalTimeDilation (Underlying native function: SetGlobalTimeDilation 0x9da13c8)
	static void SetGlobalTimeDilation(class UObject*& WorldContextObject, float& TimeDilation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetGlobalPitchModulation (Underlying native function: SetGlobalPitchModulation 0x9da12d0)
	static void SetGlobalPitchModulation(class UObject*& WorldContextObject, float& PitchModulation, float& TimeSec); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetGlobalListenerFocusParameters (Underlying native function: SetGlobalListenerFocusParameters 0x9da1038)
	static void SetGlobalListenerFocusParameters(class UObject*& WorldContextObject, float& FocusAzimuthScale, float& NonFocusAzimuthScale, float& FocusDistanceScale, float& NonFocusDistanceScale, float& FocusVolumeScale, float& NonFocusVolumeScale, float& FocusPriorityScale, float& NonFocusPriorityScale); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetGamePaused (Underlying native function: SetGamePaused 0x9da0ec0)
	static bool SetGamePaused(class UObject*& WorldContextObject, bool& bPaused); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetForceDisableSplitscreen (Underlying native function: SetForceDisableSplitscreen 0x9da0cd8)
	static void SetForceDisableSplitscreen(class UObject*& WorldContextObject, bool& bDisable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetEnableWorldRendering (Underlying native function: SetEnableWorldRendering 0x9da0ba4)
	static void SetEnableWorldRendering(class UObject*& WorldContextObject, bool& bEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetBaseSoundMix (Underlying native function: SetBaseSoundMix 0x9da0978)
	static void SetBaseSoundMix(class UObject*& WorldContextObject, class USoundMix*& InSoundMix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SetActiveSpatialPluginByName (Underlying native function: SetActiveSpatialPluginByName 0x9da0784)
	static bool SetActiveSpatialPluginByName(class UObject*& WorldContextObject, struct FName& InPluginName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.SaveGameToSlot (Underlying native function: SaveGameToSlot 0x9da0464)
	static bool SaveGameToSlot(class USaveGame*& SaveGameObject, struct FString& SlotName, int& UserIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.RemovePlayer (Underlying native function: RemovePlayer 0x9d9ff84)
	static void RemovePlayer(class APlayerController*& Player, bool& bDestroyPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.RebaseZeroOriginOntoLocal (Underlying native function: RebaseZeroOriginOntoLocal 0x9d9fe88)
	static struct FVector RebaseZeroOriginOntoLocal(class UObject*& WorldContextObject, struct FVector& WorldLocation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.RebaseLocalOriginOntoZero (Underlying native function: RebaseLocalOriginOntoZero 0x9d9fd8c)
	static struct FVector RebaseLocalOriginOntoZero(class UObject*& WorldContextObject, struct FVector& WorldLocation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.PushSoundMixModifier (Underlying native function: PushSoundMixModifier 0x2d927a4)
	static void PushSoundMixModifier(class UObject*& WorldContextObject, class USoundMix*& InSoundMixModifier); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ProjectWorldToScreen (Underlying native function: ProjectWorldToScreen 0x9d9fc30)
	static bool ProjectWorldToScreen(class APlayerController*& Player, struct FVector& WorldPosition, struct FVector2D& ScreenPosition, bool& bPlayerViewportRelative); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.PrimeSound (Underlying native function: PrimeSound 0x9d9fa6c)
	static void PrimeSound(class USoundBase*& InSound); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PrimeAllSoundsInSoundClass (Underlying native function: PrimeAllSoundsInSoundClass 0x9d9f9fc)
	static void PrimeAllSoundsInSoundClass(class USoundClass*& InSoundClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PopSoundMixModifier (Underlying native function: PopSoundMixModifier 0x113c920)
	static void PopSoundMixModifier(class UObject*& WorldContextObject, class USoundMix*& InSoundMixModifier); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PlayWorldCameraShake (Underlying native function: PlayWorldCameraShake 0x21d25dc)
	static void PlayWorldCameraShake(class UObject*& WorldContextObject, class UClass*& Shake, struct FVector& Epicenter, float& InnerRadius, float& OuterRadius, float& Falloff, bool& bOrientShakeTowardsEpicenter); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PlaySoundAtLocation (Underlying native function: PlaySoundAtLocation 0x11865e0)
	static void PlaySoundAtLocation(class UObject*& WorldContextObject, class USoundBase*& sound, struct FVector& Location, struct FRotator& Rotation, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundAttenuation*& AttenuationSettings, class USoundConcurrency*& ConcurrencySettings, class AActor*& OwningActor, class UInitialActiveSoundParams*& initialParams); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PlaySound2D (Underlying native function: PlaySound2D 0x18f4de8)
	static void PlaySound2D(class UObject*& WorldContextObject, class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundConcurrency*& ConcurrencySettings, class AActor*& OwningActor, bool& bIsUISound); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PlayDialogueAtLocation (Underlying native function: PlayDialogueAtLocation 0x9d9f684)
	static void PlayDialogueAtLocation(class UObject*& WorldContextObject, class UDialogueWave*& Dialogue, struct FDialogueContext& Context, struct FVector& Location, struct FRotator& Rotation, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundAttenuation*& AttenuationSettings); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.PlayDialogue2D (Underlying native function: PlayDialogue2D 0x9d9f458)
	static void PlayDialogue2D(class UObject*& WorldContextObject, class UDialogueWave*& Dialogue, struct FDialogueContext& Context, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ParseOption (Underlying native function: ParseOption 0x9d9f1c8)
	static struct FString ParseOption(struct FString& Options, struct FString& Key); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.OpenLevelBySoftObjectPtr (Underlying native function: OpenLevelBySoftObjectPtr 0x9d9eeb0)
	static void OpenLevelBySoftObjectPtr(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UWorld>& Level, bool& bAbsolute, struct FString& Options); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.OpenLevel (Underlying native function: OpenLevel 0x9d9ec90)
	static void OpenLevel(class UObject*& WorldContextObject, struct FName& LevelName, bool& bAbsolute, struct FString& Options); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ObjectIsA (Underlying native function: ObjectIsA 0x9d9ea6c)
	static bool ObjectIsA(class UObject*& Object, class UClass*& ObjectClass); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.MakeHitResult (Underlying native function: MakeHitResult 0x9d9e434)
	static struct FHitResult MakeHitResult(bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, struct FVector& Location, struct FVector& ImpactPoint, struct FVector& Normal, struct FVector& ImpactNormal, class UPhysicalMaterial*& PhysMat, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, struct FName& HitBoneName, struct FName& BoneName, int& HitItem, int& ElementIndex, int& FaceIndex, struct FVector& TraceStart, struct FVector& TraceEnd); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.LoadStreamLevelBySoftObjectPtr (Underlying native function: LoadStreamLevelBySoftObjectPtr 0x9d9e118)
	static void LoadStreamLevelBySoftObjectPtr(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UWorld>& Level, bool& bMakeVisibleAfterLoad, bool& bShouldBlockOnLoad, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.LoadStreamLevel (Underlying native function: LoadStreamLevel 0x9d9df64)
	static void LoadStreamLevel(class UObject*& WorldContextObject, struct FName& LevelName, bool& bMakeVisibleAfterLoad, bool& bShouldBlockOnLoad, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.LoadGameFromSlot (Underlying native function: LoadGameFromSlot 0x9d9dd48)
	static class USaveGame* LoadGameFromSlot(struct FString& SlotName, int& UserIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.IsSplitscreenForceDisabled (Underlying native function: IsSplitscreenForceDisabled 0x9d9dad8)
	static bool IsSplitscreenForceDisabled(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.IsGamePaused (Underlying native function: IsGamePaused 0x9d9d9e0)
	static bool IsGamePaused(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.HasOption (Underlying native function: HasOption 0x9d9d720)
	static bool HasOption(struct FString& Options, struct FString& InKey); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.HasLaunchOption (Underlying native function: HasLaunchOption 0x9d9d5b4)
	static bool HasLaunchOption(struct FString& OptionToCheck); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GrassOverlappingSphereCount (Underlying native function: GrassOverlappingSphereCount 0x9d9d43c)
	static int GrassOverlappingSphereCount(class UObject*& WorldContextObject, class UStaticMesh*& StaticMesh, struct FVector& CenterPosition, float& Radius); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetWorldOriginLocation (Underlying native function: GetWorldOriginLocation 0x9d9d3ac)
	static struct FIntVector GetWorldOriginLocation(class UObject*& WorldContextObject); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetWorldDeltaSeconds (Underlying native function: GetWorldDeltaSeconds 0x145ee60)
	static double GetWorldDeltaSeconds(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetViewProjectionMatrix (Underlying native function: GetViewProjectionMatrix 0x9d9d114)
	static void GetViewProjectionMatrix(struct FMinimalViewInfo& DesiredView, struct FMatrix& ViewMatrix, struct FMatrix& ProjectionMatrix, struct FMatrix& ViewProjectionMatrix); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetViewportMouseCaptureMode (Underlying native function: GetViewportMouseCaptureMode 0x9d9d304)
	static enum EMouseCaptureMode GetViewportMouseCaptureMode(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetUnpausedTimeSeconds (Underlying native function: GetUnpausedTimeSeconds 0x27a71a0)
	static double GetUnpausedTimeSeconds(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetTimeSeconds (Underlying native function: GetTimeSeconds 0x20bd4a8)
	static double GetTimeSeconds(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetSurfaceType (Underlying native function: GetSurfaceType 0x9d9cffc)
	static struct TEnumAsByte<EPhysicalSurface> GetSurfaceType(struct FHitResult& Hit); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetStreamingLevel (Underlying native function: GetStreamingLevel 0x9d9cf38)
	static class ULevelStreaming* GetStreamingLevel(class UObject*& WorldContextObject, struct FName& PackageName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetRealTimeSeconds (Underlying native function: GetRealTimeSeconds 0x9d9cb20)
	static double GetRealTimeSeconds(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerStateFromUniqueNetID (Underlying native function: GetPlayerStateFromUniqueNetID 0x9d9c9dc)
	static class APlayerState* GetPlayerStateFromUniqueNetID(class UObject*& WorldContextObject, struct FUniqueNetIdRepl& UniqueId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerState (Underlying native function: GetPlayerState 0x9d9c8fc)
	static class APlayerState* GetPlayerState(class UObject*& WorldContextObject, int& PlayerStateIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerPawn (Underlying native function: GetPlayerPawn 0x9d9c6fc)
	static class APawn* GetPlayerPawn(class UObject*& WorldContextObject, int& PlayerIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerControllerID (Underlying native function: GetPlayerControllerID 0x29c5f4c)
	static int GetPlayerControllerID(class APlayerController*& Player); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerControllerFromPlatformUser (Underlying native function: GetPlayerControllerFromPlatformUser 0x9d9c638)
	static class APlayerController* GetPlayerControllerFromPlatformUser(class UObject*& WorldContextObject, struct FPlatformUserId& UserId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerControllerFromID (Underlying native function: GetPlayerControllerFromID 0x9d9c574)
	static class APlayerController* GetPlayerControllerFromID(class UObject*& WorldContextObject, int& ControllerId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerController (Underlying native function: GetPlayerController 0x24b1cbc)
	static class APlayerController* GetPlayerController(class UObject*& WorldContextObject, int& PlayerIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerCharacter (Underlying native function: GetPlayerCharacter 0x9d9c498)
	static class ACharacter* GetPlayerCharacter(class UObject*& WorldContextObject, int& PlayerIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlayerCameraManager (Underlying native function: GetPlayerCameraManager 0x1311018)
	static class APlayerCameraManager* GetPlayerCameraManager(class UObject*& WorldContextObject, int& PlayerIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetPlatformName (Underlying native function: GetPlatformName 0x24f5828)
	static struct FString GetPlatformName(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetObjectClass (Underlying native function: GetObjectClass 0x277df0c)
	static class UClass* GetObjectClass(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetNumPlayerStates (Underlying native function: GetNumPlayerStates 0x9d9c3bc)
	static int GetNumPlayerStates(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetNumPlayerControllers (Underlying native function: GetNumPlayerControllers 0x9d9c328)
	static int GetNumPlayerControllers(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetNumLocalPlayerControllers (Underlying native function: GetNumLocalPlayerControllers 0x9d9c284)
	static int GetNumLocalPlayerControllers(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetMaxAudioChannelCount (Underlying native function: GetMaxAudioChannelCount 0x9d9c204)
	static int GetMaxAudioChannelCount(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetKeyValue (Underlying native function: GetKeyValue 0x9d9be38)
	static void GetKeyValue(struct FString& Pair, struct FString& Key, struct FString& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetIntOption (Underlying native function: GetIntOption 0x9d9bb9c)
	static int GetIntOption(struct FString& Options, struct FString& Key, int& DefaultValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetGlobalTimeDilation (Underlying native function: GetGlobalTimeDilation 0x9d9bb1c)
	static float GetGlobalTimeDilation(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetGameState (Underlying native function: GetGameState 0x1bede18)
	static class AGameStateBase* GetGameState(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetGameMode (Underlying native function: GetGameMode 0x2987a98)
	static class AGameModeBase* GetGameMode(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetGameInstance (Underlying native function: GetGameInstance 0x9d9ba9c)
	static class UGameInstance* GetGameInstance(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetEnableWorldRendering (Underlying native function: GetEnableWorldRendering 0x9d9b9dc)
	static bool GetEnableWorldRendering(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetCurrentReverbEffect (Underlying native function: GetCurrentReverbEffect 0x9d9b804)
	static class UReverbEffect* GetCurrentReverbEffect(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetCurrentLevelName (Underlying native function: GetCurrentLevelName 0x1a0a2e0)
	static struct FString GetCurrentLevelName(class UObject*& WorldContextObject, bool& bRemovePrefixString); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetClosestListenerLocation (Underlying native function: GetClosestListenerLocation 0x9d9b634)
	static bool GetClosestListenerLocation(class UObject*& WorldContextObject, struct FVector& Location, float& MaximumRange, bool& bAllowAttenuationOverride, struct FVector& ListenerPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetAvailableSpatialPluginNames (Underlying native function: GetAvailableSpatialPluginNames 0x9d9b530)
	static struct TArray<struct FName> GetAvailableSpatialPluginNames(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetAudioTimeSeconds (Underlying native function: GetAudioTimeSeconds 0x9d9b4a0)
	static double GetAudioTimeSeconds(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.GetAllActorsWithTag (Underlying native function: GetAllActorsWithTag 0x1e8a1f8)
	static void GetAllActorsWithTag(class UObject*& WorldContextObject, struct FName& tag, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetAllActorsWithInterface (Underlying native function: GetAllActorsWithInterface 0x9d9b388)
	static void GetAllActorsWithInterface(class UObject*& WorldContextObject, class UClass*& Interface, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetAllActorsOfClassWithTag (Underlying native function: GetAllActorsOfClassWithTag 0x9d9b230)
	static void GetAllActorsOfClassWithTag(class UObject*& WorldContextObject, class UClass*& ActorClass, struct FName& tag, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetAllActorsOfClass (Underlying native function: GetAllActorsOfClass 0x14f4ab8)
	static void GetAllActorsOfClass(class UObject*& WorldContextObject, class UClass*& ActorClass, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetActorOfClass (Underlying native function: GetActorOfClass 0x26b6a8c)
	static class AActor* GetActorOfClass(class UObject*& WorldContextObject, class UClass*& ActorClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetActorArrayBounds (Underlying native function: GetActorArrayBounds 0x9d9b0a4)
	static void GetActorArrayBounds(struct TArray<class AActor*>& Actors, bool& bOnlyCollidingComponents, struct FVector& Center, struct FVector& BoxExtent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetActorArrayAverageLocation (Underlying native function: GetActorArrayAverageLocation 0x9d9aff4)
	static struct FVector GetActorArrayAverageLocation(struct TArray<class AActor*>& Actors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetActiveSpatialPluginName (Underlying native function: GetActiveSpatialPluginName 0x9d9af30)
	static struct FName GetActiveSpatialPluginName(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.GetAccurateRealTime (Underlying native function: GetAccurateRealTime 0x9d9ae54)
	static void GetAccurateRealTime(int& Seconds, double& PartialSeconds); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.FlushLevelStreaming (Underlying native function: FlushLevelStreaming 0x9d9add8)
	static void FlushLevelStreaming(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.FinishSpawningActor (Underlying native function: FinishSpawningActor 0x24710b4)
	static class AActor* FinishSpawningActor(class AActor*& Actor, struct FTransform& SpawnTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.FindNearestActor (Underlying native function: FindNearestActor 0x9d9ac90)
	static class AActor* FindNearestActor(struct FVector& Origin, struct TArray<class AActor*>& ActorsToCheck, float& Distance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.FindCollisionUV (Underlying native function: FindCollisionUV 0x9d9ab50)
	static bool FindCollisionUV(struct FHitResult& Hit, int& UVChannel, struct FVector2D& uv); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.EnableLiveStreaming (Underlying native function: EnableLiveStreaming 0x9d9aac0)
	static void EnableLiveStreaming(bool& Enable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.DoesSaveGameExist (Underlying native function: DoesSaveGameExist 0x9d9a838)
	static bool DoesSaveGameExist(struct FString& SlotName, int& UserIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.DeprojectScreenToWorld (Underlying native function: DeprojectScreenToWorld 0x9d9a6c8)
	static bool DeprojectScreenToWorld(class APlayerController*& Player, struct FVector2D& ScreenPosition, struct FVector& WorldPosition, struct FVector& WorldDirection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.DeprojectSceneCaptureToWorld (Underlying native function: DeprojectSceneCaptureToWorld 0x9d9a558)
	static bool DeprojectSceneCaptureToWorld(class ASceneCapture2D*& SceneCapture2D, struct FVector2D& TargetUV, struct FVector& WorldPosition, struct FVector& WorldDirection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.DeleteGameInSlot (Underlying native function: DeleteGameInSlot 0x9d9a390)
	static bool DeleteGameInSlot(struct FString& SlotName, int& UserIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.DeactivateReverbEffect (Underlying native function: DeactivateReverbEffect 0x9d9a284)
	static void DeactivateReverbEffect(class UObject*& WorldContextObject, struct FName& TagName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.CreateSound2D (Underlying native function: CreateSound2D 0x9d99ba0)
	static class UAudioComponent* CreateSound2D(class UObject*& WorldContextObject, class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier, float& StartTime, class USoundConcurrency*& ConcurrencySettings, bool& bPersistAcrossLevelTransition, bool& bAutoDestroy); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.CreateSaveGameObject (Underlying native function: CreateSaveGameObject 0x9d99ab4)
	static class USaveGame* CreateSaveGameObject(class UClass*& SaveGameClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.CreatePlayerFromPlatformUser (Underlying native function: CreatePlayerFromPlatformUser 0x9d999b8)
	static class APlayerController* CreatePlayerFromPlatformUser(class UObject*& WorldContextObject, struct FPlatformUserId& UserId, bool& bSpawnPlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.CreatePlayer (Underlying native function: CreatePlayer 0x9d998c0)
	static class APlayerController* CreatePlayer(class UObject*& WorldContextObject, int& ControllerId, bool& bSpawnPlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ClearSoundMixModifiers (Underlying native function: ClearSoundMixModifiers 0x9d99850)
	static void ClearSoundMixModifiers(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ClearSoundMixClassOverride (Underlying native function: ClearSoundMixClassOverride 0x9d99494)
	static void ClearSoundMixClassOverride(class UObject*& WorldContextObject, class USoundMix*& InSoundMixModifier, class USoundClass*& InSoundClass, float& FadeOutTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.CancelAsyncLoading (Underlying native function: CancelAsyncLoading 0x9d992b0)
	static void CancelAsyncLoading(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.BreakHitResult (Underlying native function: BreakHitResult 0xe87718)
	static void BreakHitResult(struct FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, struct FVector& Location, struct FVector& ImpactPoint, struct FVector& Normal, struct FVector& ImpactNormal, class UPhysicalMaterial*& PhysMat, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, struct FName& HitBoneName, struct FName& BoneName, int& HitItem, int& ElementIndex, int& FaceIndex, struct FVector& TraceStart, struct FVector& TraceEnd); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.BlueprintSuggestProjectileVelocity (Underlying native function: BlueprintSuggestProjectileVelocity 0x9d982b8)
	static bool BlueprintSuggestProjectileVelocity(class UObject*& WorldContextObject, struct FVector& TossVelocity, struct FVector& StartLocation, struct FVector& EndLocation, float& LaunchSpeed, float& OverrideGravityZ, struct TEnumAsByte<ESuggestProjVelocityTraceOption>& TraceOption, float& CollisionRadius, bool& bFavorHighArc, bool& bDrawDebug); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel (Underlying native function: Blueprint_PredictProjectilePath_ByTraceChannel 0x9d98ca4)
	static bool BlueprintPredictProjectilePathByTraceChannel(class UObject*& WorldContextObject, struct FHitResult& OutHit, struct TArray<struct FVector>& OutPathPositions, struct FVector& OutLastTraceDestination, struct FVector& StartPos, struct FVector& LaunchVelocity, bool& bTracePath, float& ProjectileRadius, struct TEnumAsByte<ECollisionChannel>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, float& DrawDebugTime, float& SimFrequency, float& MaxSimTime, float& OverrideGravityZ); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType (Underlying native function: Blueprint_PredictProjectilePath_ByObjectType 0x9d98748)
	static bool BlueprintPredictProjectilePathByObjectType(class UObject*& WorldContextObject, struct FHitResult& OutHit, struct TArray<struct FVector>& OutPathPositions, struct FVector& OutLastTraceDestination, struct FVector& StartPos, struct FVector& LaunchVelocity, bool& bTracePath, float& ProjectileRadius, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, float& DrawDebugTime, float& SimFrequency, float& MaxSimTime, float& OverrideGravityZ); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.Blueprint_PredictProjectilePath_Advanced (Underlying native function: Blueprint_PredictProjectilePath_Advanced 0x9d985cc)
	static bool BlueprintPredictProjectilePathAdvanced(class UObject*& WorldContextObject, struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult& PredictResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.BeginSpawningActorFromBlueprint (Underlying native function: BeginSpawningActorFromBlueprint 0x9d97ca8)
	static class AActor* BeginSpawningActorFromBlueprint(class UObject*& WorldContextObject, class UBlueprint*& Blueprint, struct FTransform& SpawnTransform, bool& bNoCollisionFail); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.BeginDeferredActorSpawnFromClass (Underlying native function: BeginDeferredActorSpawnFromClass 0x237deb0)
	static class AActor* BeginDeferredActorSpawnFromClass(class UObject*& WorldContextObject, class UClass*& ActorClass, struct FTransform& SpawnTransform, enum ESpawnActorCollisionHandlingMethod& CollisionHandlingOverride, class AActor*& Owner); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.AreSubtitlesEnabled (Underlying native function: AreSubtitlesEnabled 0x9d97c88)
	static bool AreSubtitlesEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.GameplayStatics.AreAnyListenersWithinRange (Underlying native function: AreAnyListenersWithinRange 0x22d6bb4)
	static bool AreAnyListenersWithinRange(class UObject*& WorldContextObject, struct FVector& Location, float& MaximumRange); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ApplyRadialDamageWithFalloff (Underlying native function: ApplyRadialDamageWithFalloff 0x9d977dc)
	static bool ApplyRadialDamageWithFalloff(class UObject*& WorldContextObject, float& BaseDamage, float& MinimumDamage, struct FVector& Origin, float& DamageInnerRadius, float& DamageOuterRadius, float& DamageFalloff, class UClass*& DamageTypeClass, struct TArray<class AActor*>& IgnoreActors, class AActor*& DamageCauser, class AController*& InstigatedByController, struct TEnumAsByte<ECollisionChannel>& DamagePreventionChannel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ApplyRadialDamage (Underlying native function: ApplyRadialDamage 0x9d974c8)
	static bool ApplyRadialDamage(class UObject*& WorldContextObject, float& BaseDamage, struct FVector& Origin, float& DamageRadius, class UClass*& DamageTypeClass, struct TArray<class AActor*>& IgnoreActors, class AActor*& DamageCauser, class AController*& InstigatedByController, bool& bDoFullDamage, struct TEnumAsByte<ECollisionChannel>& DamagePreventionChannel); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ApplyPointDamage (Underlying native function: ApplyPointDamage 0x9d971ec)
	static float ApplyPointDamage(class AActor*& DamagedActor, float& BaseDamage, struct FVector& HitFromDirection, struct FHitResult& HitInfo, class AController*& EventInstigator, class AActor*& DamageCauser, class UClass*& DamageTypeClass); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ApplyDamage (Underlying native function: ApplyDamage 0x9d96ff4)
	static float ApplyDamage(class AActor*& DamagedActor, float& BaseDamage, class AController*& EventInstigator, class AActor*& DamageCauser, class UClass*& DamageTypeClass); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.AnnounceAccessibleString (Underlying native function: AnnounceAccessibleString 0x9d96e54)
	static void AnnounceAccessibleString(struct FString& AnnouncementString); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.GameplayStatics.ActivateReverbEffect (Underlying native function: ActivateReverbEffect 0x113b54c)
	static void ActivateReverbEffect(class UObject*& WorldContextObject, class UReverbEffect*& ReverbEffect, struct FName& TagName, float& Priority, float& Volume, float& FadeTime); // (Final | Native | Static | Public | BlueprintCallable)
};

