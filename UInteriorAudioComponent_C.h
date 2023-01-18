// BlueprintGeneratedClass /Game/Sounds/InteriorAudio/InteriorAudioComponent.InteriorAudioComponent_C
// Size: 0xb0
class UInteriorAudioComponent_C : public UActorComponent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa0 (0x8)
	class AB_InteriorAudioManager_C* Manager; // 0xa8 (0x8)

	/* Functions */

	// Function /Game/Sounds/InteriorAudio/InteriorAudioComponent.InteriorAudioComponent_C.Update (Has no native function)
	void Update(struct FInteriorAudioScanResults& ScanResults); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/InteriorAudio/InteriorAudioComponent.InteriorAudioComponent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /Game/Sounds/InteriorAudio/InteriorAudioComponent.InteriorAudioComponent_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /Game/Sounds/InteriorAudio/InteriorAudioComponent.InteriorAudioComponent_C.ExecuteUbergraph_InteriorAudioComponent (Has no native function)
	void ExecuteUbergraphInteriorAudioComponent(int& EntryPoint, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue, class AB_InteriorAudioManager_C*& K2NodeDynamicCastAsBInteriorAudioManager, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason); // (Final | 0x00008000)
};

