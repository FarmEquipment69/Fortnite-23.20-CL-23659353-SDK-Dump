// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// Size: 0x358
class AVaultCharacterPlacementHelper_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UStaticMeshComponent* floor; // 0x290 (0x8)
	class UStaticMeshComponent* CharacterPlacement; // 0x298 (0x8)
	class USceneComponent* Root; // 0x2a0 (0x8)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	struct FTransform OriginalTransform; // 0x2b0 (0x60)
	struct FVector OffsetTranslate; // 0x310 (0x18)
	struct FRotator OffsetRotate; // 0x328 (0x18)
	bool Athena; // 0x340 (0x1)
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct FMulticastInlineDelegate OnZoomLevelUpdated; // 0x348 (0x10)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera (Has no native function)
	void UpdatePositionForCamera(enum EFrontEndCamera& FrontEndCamera, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue2, struct TArray<enum EFrontEndCamera>& K2NodeMakeArrayArray, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncArrayContainsReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FVector& CallFuncAddVectorVectorReturnValue, struct FRotator& CallFuncComposeRotatorsReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, struct FHitResult& CallFuncK2SetActorTransformSweepHitResult, bool& CallFuncK2SetActorTransformReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct FTransform& CallFuncGetTransformReturnValue); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event_0 (Has no native function)
	void SubGameChangedEvent0(enum ESubGame& SubGame); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged (Has no native function)
	void OnFrontEndCameraChanged(enum EFrontEndCamera& NewCamera, enum EFrontEndCamera& OldCamera); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper (Has no native function)
	void ExecuteUbergraphVaultCharacterPlacementHelper(int& EntryPoint, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, enum ESubGame& CallFuncGetSubGameReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& K2NodeSwitchEnumCmpSuccess, class UFortGlobalUIContext*& CallFuncGetContextReturnValue1, enum ESubGame& CallFuncGetSubGameReturnValue1, bool& CallFuncIsInZoneReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, enum ESubGame& K2NodeCustomEventSubGame, bool& CallFuncBooleanANDReturnValue, struct FHitResult& CallFuncK2SetActorTransformSweepHitResult, bool& CallFuncK2SetActorTransformReturnValue, class UFortFrontEndContext*& CallFuncGetContextReturnValue2, enum EFrontEndCamera& K2NodeCustomEventNewCamera, enum EFrontEndCamera& K2NodeCustomEventOldCamera, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTransform& CallFuncGetTransformReturnValue); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated__DelegateSignature (Has no native function)
	void OnZoomLevelUpdatedDelegateSignature(double& CurrentZoomLevel); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

