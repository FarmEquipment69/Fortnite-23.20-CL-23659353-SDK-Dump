// Class /Script/FortniteGame.FortAsyncAction_WaitForClientAnnouncement
// Size: 0x68
class UFortAsyncAction_WaitForClientAnnouncement : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnAllClientsReady; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnCanceled; // 0x40 (0x10)
	struct FGuid AnnouncementID; // 0x50 (0x10)
	struct FTimerHandle* CheckAllPlayersReadyTimerHandle; // 0x60 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_WaitForClientAnnouncement.WaitForClientAnnouncement (Underlying native function: WaitForClientAnnouncement 0x82680e8)
	static class UFortAsyncAction_WaitForClientAnnouncement* WaitForClientAnnouncement(class UObject*& InWorldContextObject, class AFortClientAnnouncement*& AnnouncementToWaitFor); // (Final | Native | Static | Public | BlueprintCallable)
};

