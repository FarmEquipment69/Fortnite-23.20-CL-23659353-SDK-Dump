// Class /Script/FortniteUI.AthenaBattleMapNodeTooltip
// Size: 0x2d0
class UAthenaBattleMapNodeTooltip : public UCommonUserWidget
{
	class UCommonTextBlock* TextBlockNodeTitle; // 0x290 (0x8)
	class UCommonTextBlock* TextBlockNodeDescription; // 0x298 (0x8)
	class UCommonTextBlock* TextBlockNodeTime; // 0x2a0 (0x8)
	class UWidget* WidgetSelection; // 0x2a8 (0x8)
	class UWidget* WidgetScrubbing; // 0x2b0 (0x8)
	class UWidget* WidgetScrubbingGamepad; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.OnReplayLevelStreamingChanged (Underlying native function: OnReplayLevelStreamingChanged 0x18f7858)
	void OnReplayLevelStreamingChanged(bool& bStreaming); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.HandleUnhoveredNode (Underlying native function: HandleUnhoveredNode 0xa5badbc)
	void HandleUnhoveredNode(class ABattleMapNode*& Node, enum BattleMapHoveredReason& Reason); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.HandleToggledBattleMapLive (Underlying native function: HandleToggledBattleMapLive 0xa5bab28)
	void HandleToggledBattleMapLive(class ABattleMapPawnLive*& BattleMapPawn); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.HandleTimelineModeChanged (Underlying native function: HandleTimelineModeChanged 0xa5ba814)
	void HandleTimelineModeChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.HandleInputMethodChanged (Underlying native function: HandleInputMethodChanged 0xa5b9db0)
	void HandleInputMethodChanged(enum ECommonInputType& NewInputType); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.HandleHoveredNode (Underlying native function: HandleHoveredNode 0xa5b9cec)
	void HandleHoveredNode(class ABattleMapNode*& Node, enum BattleMapHoveredReason& Reason); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBattleMapNodeTooltip.HandleCameraTypeChanged (Underlying native function: HandleCameraTypeChanged 0x23ce1ec)
	void HandleCameraTypeChanged(class AFortPlayerControllerSpectating*& SpectatorPC, enum ESpectatorCameraType& NewCameraType); // (Final | Native | Protected)
};

