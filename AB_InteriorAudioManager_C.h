// BlueprintGeneratedClass /Game/Sounds/InteriorAudio/B_InteriorAudioManager.B_InteriorAudioManager_C
// Size: 0x310
class AB_InteriorAudioManager_C : public AFortInteriorAudioManager
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UInteriorAudioComponent_Debug_C* InteriorAudioComponentDebug; // 0x290 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x298 (0x8)
	enum EInteriorAudioState State; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	struct FGameplayTag RoomSizeTag; // 0x2a4 (0x4)
	class UAmbientAudioDataAsset* AmbientBank; // 0x2a8 (0x8)
	int Sum; // 0x2b0 (0x4)
	int TotalBuildingCountRequiredForInterior; // 0x2b4 (0x4)
	bool bInteriorSoundMixApplied; // 0x2b8 (0x1)
	bool bPartialInteriorMixState; // 0x2b9 (0x1)
	bool bPartialExteriorMixState; // 0x2ba (0x1)
	unsigned char unreflected_2bb[0x5]; // 0x2bb (0x5) 
	struct FInteriorAudioScanResults CurrentScanResults; // 0x2c0 (0x38)
	bool bInsidePlayerBuilt; // 0x2f8 (0x1)
	unsigned char unreflected_2f9[0x7]; // 0x2f9 (0x7) 
	struct TArray<class UInteriorAudioComponent_C*> RegisteredComponents; // 0x300 (0x10)

	/* Functions */

	// Function /Game/Sounds/InteriorAudio/B_InteriorAudioManager.B_InteriorAudioManager_C.OnComponentRemoved (Has no native function)
	void OnComponentRemoved(class UInteriorAudioComponent_C*& Component, class UInteriorAudioComponent_C*& NewLocalVar, bool& CallFuncArrayRemoveItemReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/InteriorAudio/B_InteriorAudioManager.B_InteriorAudioManager_C.OnComponentAdded (Has no native function)
	void OnComponentAdded(class UInteriorAudioComponent_C*& Component, int& CallFuncArrayAddUniqueReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/InteriorAudio/B_InteriorAudioManager.B_InteriorAudioManager_C.UpdateAmbientAudio (Has no native function)
	void UpdateAmbientAudio(struct FInteriorAudioScanResults& ScanResults); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Sounds/InteriorAudio/B_InteriorAudioManager.B_InteriorAudioManager_C.ExecuteUbergraph_B_InteriorAudioManager (Has no native function)
	void ExecuteUbergraphBInteriorAudioManager(int& EntryPoint, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FInteriorAudioScanResults& K2NodeEventScanResults, class UInteriorAudioComponent_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

