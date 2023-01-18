// Class /Script/FortniteGame.LiveStreamPiPBlockManager
// Size: 0x38
class ULiveStreamPiPBlockManager : public UObject
{
	struct FMulticastInlineDelegate PIPPlayerBlockingEvent; // 0x28 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.LiveStreamPiPBlockManager.SetPlayerBlocked (Underlying native function: SetPlayerBlocked 0x8d3e5b4)
	void SetPlayerBlocked(bool& bInBlocked, bool& bInOutsideBlocked); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.LiveStreamPiPBlockManager.IsPlayerBlocked (Underlying native function: IsPlayerBlocked 0x8d3d320)
	bool IsPlayerBlocked(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.LiveStreamPiPBlockManager.IsOutSideBlocked (Underlying native function: IsOutSideBlocked 0x8d3d308)
	bool IsOutSideBlocked(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.LiveStreamPiPBlockManager.GetPiPBlockManager (Underlying native function: GetPiPBlockManager 0x8d3c6ac)
	static class ULiveStreamPiPBlockManager* GetPiPBlockManager(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

