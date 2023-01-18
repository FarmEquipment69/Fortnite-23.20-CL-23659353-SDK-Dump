// BlueprintGeneratedClass /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
// Size: 0x88
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{
	struct FVector ParticleRelativeOffset; // 0x68 (0x18)
	class USoundBase* BubbleSound; // 0x80 (0x8)

	/* Functions */

	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UAudioComponent*& CallFuncSpawnSound2DReturnValue, bool& CallFuncIsLocallyViewedReturnValue); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnExecute (Has no native function)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnStartParticleSystemSpawned (Has no native function)
	void OnStartParticleSystemSpawned(class UParticleSystemComponent*& SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, class APlayerController*& CallFuncGetPlayerControllerReturnValue, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class AFortLiveBroadcastController*& K2NodeDynamicCastAsFortLiveBroadcastController, bool& K2NodeDynamicCastbSuccess, class UAthenaEmojiItemDefinition*& K2NodeDynamicCastAsAthenaEmojiItemDefinition, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerPawn*& CallFuncGetPlayerPawnReturnValue, class UAthenaEmojiItemDefinition*& K2NodeDynamicCastAsAthenaEmojiItemDefinition1, bool& K2NodeDynamicCastbSuccess2, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncEqualEqualObjectObjectReturnValue, struct TWeakObjectPtr<class UTexture2D>& CallFuncConvObjectToSoftObjectReferenceReturnValue, class APawn*& CallFuncGetPlayerPawnReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue1, struct FHitResult& CallFuncK2SetRelativeLocationSweepHitResult); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)
};

