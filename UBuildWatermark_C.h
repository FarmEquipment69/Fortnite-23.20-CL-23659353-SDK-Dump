// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C
// Size: 0x2f0
class UBuildWatermark_C : public UFortBuildWatermark
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2e8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.HandlePartyJoined (Has no native function)
	void HandlePartyJoined(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged (Has no native function)
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark (Has no native function)
	void ExecuteUbergraphBuildWatermark(int& EntryPoint, class UFortPartyContext*& CallFuncGetContextReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FFortTeamMemberInfo& K2NodeCustomEventPlayerInfo); // (Final | 0x00008000 | HasDefaults)
};

