// BlueprintGeneratedClass /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
// Size: 0x318
class AB_EmotePreviewDisplay_C : public AFortEmotePreviewActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2a0 (0x8)
	class USceneComponent* Scene; // 0x2a8 (0x8)
	class UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x2b0 (0x8)
	struct TWeakObjectPtr<class UAnimMontage> Animation; // 0x2b8 (0x28)
	class UFortMontageItemDefinitionBase* DanceOrEmojiItemDefinition; // 0x2e0 (0x8)
	struct FName StartSectionName; // 0x2e8 (0x4)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	struct FMulticastInlineDelegate OnEmoteSetupFinished; // 0x2f0 (0x10)
	class UAthenaShoutItemDefinition* ShoutItemDefinition; // 0x300 (0x8)
	struct TArray<class UAudioComponent*> DynamicallySpawnedSounds; // 0x308 (0x10)

	/* Functions */

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds (Has no native function)
	void CleanupDynamicSounds(int& TempintVariable, int& TempintVariable1, int& CallFuncAddIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, class UAudioComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class UAudioComponent*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet (Has no native function)
	void ApplyEmoteToPet(bool& IsRemoval, class UFortFrontEndContext*& CallFuncGetContextReturnValue, bool& CallFuncNotPreBoolReturnValue, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, class UFortPetAnimInstance*& K2NodeDynamicCastAsFortPetAnimInstance, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958 (Has no native function)
	void OnLoaded638F148342254A777E929B88915A8958(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote (Has no native function)
	void PreviewEmote(class UFortMontageItemDefinitionBase*& Emote); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction (Has no native function)
	void PerformSpecialAction(struct FName& ActionName); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.SpecialCaseShoutHandler (Has no native function)
	void SpecialCaseShoutHandler(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay (Has no native function)
	void ExecuteUbergraphBEmotePreviewDisplay(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct FName& K2NodeEventActionName, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, class UObject*& TempobjectVariable, class UAnimMontage*& K2NodeDynamicCastAsAnimMontage, bool& K2NodeDynamicCastbSuccess, class UFortMontageItemDefinitionBase*& K2NodeEventEmote, class UObject*& K2NodeCustomEventLoaded, class UFortFrontEndContext*& CallFuncGetContextReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue, class UFortEmojiPreviewComponent*& CallFuncGetComponentByClassReturnValue, struct FTransform& TempstructVariable, bool& CallFuncIsValidReturnValue1, class UFortEmojiPreviewComponent*& CallFuncAddComponentReturnValue, class UFortFrontEndContext*& CallFuncGetContextReturnValue1, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue1, class UAthenaShoutItemDefinition*& K2NodeDynamicCastAsAthenaShoutItemDefinition, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue2, struct FTransform& CallFuncGetTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, class UAthenaEmojiItemDefinition*& K2NodeDynamicCastAsAthenaEmojiItemDefinition, bool& K2NodeDynamicCastbSuccess2, class UFortFrontEndContext*& CallFuncGetContextReturnValue2, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue2, struct TEnumAsByte<EFortCustomGender>& CallFuncGetCharacterGenderReturnValue, struct TEnumAsByte<EFortCustomBodyType>& CallFuncGetCharacterBodyTypeReturnValue, struct TWeakObjectPtr<class UAnimMontage>& CallFuncGetFrontendPreviewAnimationReturnValue, bool& CallFuncIsValidSoftObjectReferenceReturnValue, struct FTransform& TempstructVariable1, class UFortFrontEndContext*& CallFuncGetContextReturnValue3, class UAudioComponent*& CallFuncSpawnSoundComponentSpawnedComponent, class AFortPlayerPawn*& CallFuncGetHeroPlayerPawnForCurrentDisplayedItemReturnValue3, class UFortEmojiPreviewComponent*& CallFuncAddComponentReturnValue1, class UFortEmojiPreviewComponent*& CallFuncGetComponentByClassReturnValue1, float& CallFuncPlayLocalAnimMontageReturnValue, bool& CallFuncIsValidReturnValue3, struct FName& CallFuncPickMontageSectionReturnValue, int& CallFuncArrayAddReturnValue); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished__DelegateSignature (Has no native function)
	void OnEmoteSetupFinishedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

