// BlueprintGeneratedClass /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C
// Size: 0x440
class USR_Valet_C : public UStreamingRadioPlayerComponent_Valet
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x438 (0x8)

	/* Functions */

	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.On Source Played (Has no native function)
	void OnSourcePlayed(class UStreamingRadioPlayerComponent*& Component, struct FAthenaRadioStation& AffectedSource); // (BlueprintCallable | BlueprintEvent)

	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.On Source Stopped (Has no native function)
	void OnSourceStopped(class UStreamingRadioPlayerComponent*& Component, struct FAthenaRadioStation& AffectedSource); // (BlueprintCallable | BlueprintEvent)

	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.ExecuteUbergraph_SR_Valet (Has no native function)
	void ExecuteUbergraphSRValet(int& EntryPoint, class UMusicEventSubsystem*& CallFuncGetGameInstanceSubsystemReturnValue, bool& CallFuncIsValidReturnValue, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, class UStreamingRadioPlayerComponent*& K2NodeCustomEventComponent1, struct FAthenaRadioStation& K2NodeCustomEventAffectedSource1, class UStreamingRadioPlayerComponent*& K2NodeCustomEventComponent, struct FAthenaRadioStation& K2NodeCustomEventAffectedSource, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UMusicEventSubsystem*& CallFuncGetGameInstanceSubsystemReturnValue1, class UMusicEventSubsystem*& CallFuncGetGameInstanceSubsystemReturnValue2); // (Final | 0x00008000 | HasDefaults)
};

