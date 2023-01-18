// BlueprintGeneratedClass /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C
// Size: 0x2a8
class AB_PhysicsTree_Reporter_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* Scene; // 0x290 (0x8)
	struct TArray<struct FPhysicsLogAnalyticsStruct> PhysicsLogData; // 0x298 (0x10)

	/* Functions */

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.WrapString (Has no native function)
	void WrapString(struct FString& Prepend, struct FString& String, struct FString& Append, struct FString& Result, struct FString& CallFuncConcatStrStrReturnValue, struct FString& CallFuncConcatStrStrReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportTreeAnalytics (Has no native function)
	void ReportTreeAnalytics(struct TArray<struct FString>& InstanceRowArray, struct TArray<struct FString>& TempStringArray, struct FString& TempString, struct TArray<struct FFortAnalyticsEventAttribute>& AttributeArray, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintArrayIndexVariable1, bool& CallFuncIsServerReturnValue, struct FString& CallFuncJoinStringArrayReturnValue, struct FString& CallFuncWrapStringResult, struct FFortAnalyticsEventAttribute& CallFuncConstructAnalyticsAttributeReturnValue, int& CallFuncArrayAddReturnValue, struct FString& CallFuncJoinStringArrayReturnValue1, struct FString& CallFuncWrapStringResult1, int& TempintLoopCounterVariable1, int& CallFuncArrayAddReturnValue1, int& CallFuncAddIntIntReturnValue1, struct FPhysicsLogAnalyticsStruct& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, struct FString& CallFuncConvDoubleToStringReturnValue, struct FString& CallFuncConvDoubleToStringReturnValue1, struct FString& CallFuncConvDoubleToStringReturnValue2, struct FString& CallFuncConvDoubleToStringReturnValue3, struct FString& CallFuncConvDoubleToStringReturnValue4, struct FString& CallFuncConvVectorToStringReturnValue, struct FString& CallFuncConvDoubleToStringReturnValue5, struct FString& CallFuncConvVectorToStringReturnValue1, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, struct TArray<struct FString>& K2NodeMakeArrayArray, struct FString& CallFuncGetGameSessionIDReturnValue, struct FString& CallFuncArrayGetItem1, struct FFortAnalyticsEventAttribute& CallFuncConstructAnalyticsAttributeReturnValue1, struct FString& CallFuncWrapStringResult2, int& CallFuncArrayAddReturnValue2, int& CallFuncArrayAddReturnValue3, int& CallFuncArrayLengthReturnValue1, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue1, bool& CallFuncLessIntIntReturnValue1, struct FName& CallFuncGetCurrentPlaylistNameReturnValue, struct FString& CallFuncConvNameToStringReturnValue, struct FFortAnalyticsEventAttribute& CallFuncConstructAnalyticsAttributeReturnValue2, int& CallFuncArrayAddReturnValue4, double& CallFuncConvDoubleToStringInDoubleImplicitCast, double& CallFuncConvDoubleToStringInDoubleImplicitCast1, double& CallFuncConvDoubleToStringInDoubleImplicitCast2, double& CallFuncConvDoubleToStringInDoubleImplicitCast3, double& CallFuncConvDoubleToStringInDoubleImplicitCast4, double& CallFuncConvDoubleToStringInDoubleImplicitCast5); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.GetLogDataByInstanceName (Has no native function)
	void GetLogDataByInstanceName(struct FString& InstanceName, struct FPhysicsLogAnalyticsStruct& Data, int& Index, bool& Success, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, struct FPhysicsLogAnalyticsStruct& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, bool& CallFuncEqualEqualStrStrReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportDamageInflicted (Has no native function)
	void ReportDamageInflicted(struct FString& InstanceName, struct TEnumAsByte<PhysicsLogAnalytics_DamageCategory>& DamageCategory, double& Amount, struct TArray<double>& DamageCounts, int& CallFuncConvByteToIntReturnValue, struct FPhysicsLogAnalyticsStruct& CallFuncGetLogDataByInstanceNameData, int& CallFuncGetLogDataByInstanceNameIndex, bool& CallFuncGetLogDataByInstanceNameSuccess, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct TArray<double>& K2NodeMakeArrayArray, double& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, double& CallFuncArrayGetItem1, double& CallFuncArrayGetItem2, double& CallFuncArrayGetItem3, double& CallFuncArrayGetItem4, double& CallFuncArrayGetItem5, double& CallFuncArrayGetItem6, struct FPhysicsLogAnalyticsStruct& K2NodeMakeStructPhysicsLogAnalyticsStruct, double& CallFuncArrayGetItem7, double& CallFuncArrayGetItem8, struct FPhysicsLogAnalyticsStruct& K2NodeMakeStructPhysicsLogAnalyticsStruct1, int& TempintVariable, int& CallFuncArrayAddReturnValue, double& K2NodeSelectDefault, double& CallFuncAddDoubleDoubleReturnValue, double& K2NodeSelectOption0ImplicitCast, double& K2NodeSelectOption1ImplicitCast, double& K2NodeSelectOption2ImplicitCast, double& K2NodeSelectOption3ImplicitCast, float& K2NodeMakeStructDamageToAI269671D0A943425BB2EC73159C0B19C99DImplicitCast, float& K2NodeMakeStructDamageToAI269671D0A943425BB2EC73159C0B19C99DImplicitCast1, float& K2NodeMakeStructDamageToVehicles2469A07F714B43DF853CA180B441A6A29CImplicitCast, float& K2NodeMakeStructDamageToStructures22636FABDE409E1A51BAF808863B05D213ImplicitCast, float& K2NodeMakeStructDamageToPlayers20F701392440AAC7AC33A8B2BCAEB3C5D0ImplicitCast, float& K2NodeMakeStructDamageToVehicles2469A07F714B43DF853CA180B441A6A29CImplicitCast1, float& K2NodeMakeStructDamageToStructures22636FABDE409E1A51BAF808863B05D213ImplicitCast1, float& K2NodeMakeStructDamageToPlayers20F701392440AAC7AC33A8B2BCAEB3C5D0ImplicitCast1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogDestroyed (Has no native function)
	void ReportLogDestroyed(struct FString& InstanceName, struct FVector& Location, struct FPhysicsLogAnalyticsStruct& CallFuncGetLogDataByInstanceNameData, int& CallFuncGetLogDataByInstanceNameIndex, bool& CallFuncGetLogDataByInstanceNameSuccess, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, float& CallFuncGetMatchTimeReturnValue, struct FPhysicsLogAnalyticsStruct& K2NodeMakeStructPhysicsLogAnalyticsStruct, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue1, float& CallFuncGetMatchTimeReturnValue1, struct FPhysicsLogAnalyticsStruct& K2NodeMakeStructPhysicsLogAnalyticsStruct1, int& CallFuncArrayAddReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogFelled (Has no native function)
	void ReportLogFelled(struct FString& InstanceName, struct FString& FelledBy, struct FVector& Location, struct FPhysicsLogAnalyticsStruct& CallFuncGetLogDataByInstanceNameData, int& CallFuncGetLogDataByInstanceNameIndex, bool& CallFuncGetLogDataByInstanceNameSuccess, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, float& CallFuncGetMatchTimeReturnValue, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue1, struct FPhysicsLogAnalyticsStruct& K2NodeMakeStructPhysicsLogAnalyticsStruct, float& CallFuncGetMatchTimeReturnValue1, struct FPhysicsLogAnalyticsStruct& K2NodeMakeStructPhysicsLogAnalyticsStruct1, int& CallFuncArrayAddReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.OnReady_FFF47C8E40A1C412A19C8B8828BD5787 (Has no native function)
	void OnReadyFFF47C8E40A1C412A19C8B8828BD5787(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.EndMatchReport (Has no native function)
	void EndMatchReport(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.PhaseChanged (Has no native function)
	void PhaseChanged(enum EAthenaGamePhase& GamePhase); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ExecuteUbergraph_B_PhysicsTree_Reporter (Has no native function)
	void ExecuteUbergraphBPhysicsTreeReporter(int& EntryPoint, class AFortGameStateAthena*& K2NodeCustomEventGameState, class UFortPlaylist*& K2NodeCustomEventPlaylist, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayTagContainer& TempstructVariable, class UFortPlaylist*& TempobjectVariable, class AFortGameStateAthena*& TempobjectVariable1, class UFortAsyncAction_CurrentPlaylistReady*& CallFuncPlaylistDataReadyAsyncReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, bool& CallFuncIsServerReturnValue, enum EAthenaGamePhase& K2NodeCustomEventGamePhase, bool& K2NodeSwitchEnumCmpSuccess); // (Final | 0x00008000 | HasDefaults)
};
