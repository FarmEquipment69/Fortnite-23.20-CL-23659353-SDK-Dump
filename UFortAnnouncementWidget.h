// Class /Script/FortniteUI.FortAnnouncementWidget
// Size: 0x298
class UFortAnnouncementWidget : public UCommonUserWidget
{
	class AFortClientAnnouncement* BoundAnnouncement; // 0x290 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAnnouncementWidget.UpdateWidgetData (Has no native function)
	void UpdateWidgetData(class AFortClientAnnouncement*& Announcement); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAnnouncementWidget.GetTextForAction (Underlying native function: GetTextForAction 0xa6b335c)
	struct FText GetTextForAction(struct FName& ActionName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAnnouncementWidget.FindFirstUnboundAction (Underlying native function: FindFirstUnboundAction 0xa6b1e3c)
	struct FName FindFirstUnboundAction(struct FText& AnnouncementBody); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAnnouncementWidget.BindUpdateEvents (Underlying native function: BindUpdateEvents 0xa6b1b98)
	void BindUpdateEvents(class AFortClientAnnouncement*& Announcement); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAnnouncementWidget.AnnouncementStopped (Has no native function)
	void AnnouncementStopped(class AFortClientAnnouncement*& Announcement); // (BlueprintCosmetic | Event | Public | BlueprintEvent)
};

