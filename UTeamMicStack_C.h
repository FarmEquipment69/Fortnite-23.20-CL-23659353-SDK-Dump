// WidgetBlueprintGeneratedClass /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C
// Size: 0x2f8
class UTeamMicStack_C : public UFortHUDElementWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2d0 (0x8)
	class UVerticalBox* VerticalBoxTeamMembers; // 0x2d8 (0x8)
	class UCommonBorder* BorderFrame; // 0x2e0 (0x8)
	struct TArray<class UCinematic-TeamMics_C*> TeamMembers; // 0x2e8 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.ClearContents (Has no native function)
	void ClearContents(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.AppendTeamMember (Has no native function)
	void AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo, int& CurrentIndex, struct FMargin& K2NodeMakeStructMargin, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class UCinematic-TeamMics_C*& CallFuncCreateReturnValue, int& CallFuncArrayAddReturnValue, class UVerticalBoxSlot*& CallFuncAddChildToVerticalBoxReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged (Has no native function)
	void HandleTeamMemberChanged(struct FFortTeamMemberInfo& MemberInfo, int& CallFuncArrayLengthReturnValue, class UFortMcpContext*& CallFuncGetContextReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncIsLocalPlayersUniqueIDReturnValue, class UCinematic-TeamMics_C*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved (Has no native function)
	void HandleTeamMemberRemoved(int& MemberIndex, int& CallFuncSubtractIntIntReturnValue, int& CallFuncGetChildrenCountReturnValue, bool& CallFuncRemoveChildAtReturnValue, bool& CallFuncEqualEqualIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.HandlePartyLeft (Has no native function)
	void HandlePartyLeft(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack (Has no native function)
	void ExecuteUbergraphTeamMicStack(int& EntryPoint, int& TempintArrayIndexVariable, bool& CallFuncGreaterIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, int& TempintLoopCounterVariable, class UFortPartyContext*& CallFuncGetContextReturnValue, class UFortUITeamInfo*& CallFuncGetLocalPlayerTeamReturnValue, int& CallFuncAddIntIntReturnValue, struct TArray<struct FFortTeamMemberInfo>& CallFuncGetTeamMembersTeamMembers, struct FFortTeamMemberInfo& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Final | 0x00008000 | HasDefaults)
};

