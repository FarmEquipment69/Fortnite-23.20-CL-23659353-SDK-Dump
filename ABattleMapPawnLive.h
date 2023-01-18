// Class /Script/FortniteGame.BattleMapPawnLive
// Size: 0x6a0
class ABattleMapPawnLive : public AFortReplaySpectatorPawnBase
{
	unsigned char unreflected_400[0x200]; // 0x400 (0x200) 
	class UClass* GroundMoveNodeClass; // 0x600 (0x8)
	class UClass* AirMoveNodeClass; // 0x608 (0x8)
	class UClass* GotKillNodeClass; // 0x610 (0x8)
	class UClass* ZoneNodeClass; // 0x618 (0x8)
	class UClass* TeamFlightNodeClass; // 0x620 (0x8)
	class UClass* TimeIndicatorClass; // 0x628 (0x8)
	class USoundBase* SelectedNodeSound; // 0x630 (0x8)
	class USoundBase* HoveredNodeSound; // 0x638 (0x8)
	unsigned char padding_640[0x60]; // 0x640 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.BattleMapPawnLive.ZoomIn (Underlying native function: ZoomIn 0x85a9dec)
	void ZoomIn(float& Val); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.BattleMapPawnLive.HandleTimeIndicatorUpdatedSegment (Underlying native function: HandleTimeIndicatorUpdatedSegment 0x85a3d18)
	void HandleTimeIndicatorUpdatedSegment(class ABattleMapNode*& StartNode, class ABattleMapEdge*& Edge, class ABattleMapNode*& EndNode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleMapPawnLive.HandleClickReleased (Underlying native function: HandleClickReleased 0x85a39a8)
	bool HandleClickReleased(struct FKey& ButtonReleased); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BattleMapPawnLive.HandleClickPressed (Underlying native function: HandleClickPressed 0x85a38c4)
	bool HandleClickPressed(struct FKey& ButtonPressed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BattleMapPawnLive.BP_SetTimelineMode (Underlying native function: BP_SetTimelineMode 0x85a30f0)
	bool BPSetTimelineMode(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BattleMapPawnLive.BP_IsOnTimelineMode (Underlying native function: BP_IsOnTimelineMode 0x85a30c0)
	bool BPIsOnTimelineMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

