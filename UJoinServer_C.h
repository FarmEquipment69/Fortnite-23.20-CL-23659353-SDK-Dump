// WidgetBlueprintGeneratedClass /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C
// Size: 0x580
class UJoinServer_C : public UFortUIStateWidget_JoinServer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x570 (0x8)
	class UBuildWatermark_C* BuildWatermark; // 0x578 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C.OnEnterState (Has no native function)
	void OnEnterState(enum EFortUIState& PreviousUIState); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C.OnShowTutorialDialog (Has no native function)
	void OnShowTutorialDialog(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer (Has no native function)
	void ExecuteUbergraphJoinServer(int& EntryPoint, enum EFortUIState& K2NodeEventPreviousUIState); // (Final | 0x00008000)
};

