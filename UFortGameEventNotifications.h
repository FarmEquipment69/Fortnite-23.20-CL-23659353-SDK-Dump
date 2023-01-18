// Class /Script/FortniteUI.FortGameEventNotifications
// Size: 0x360
class UFortGameEventNotifications : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x48]; // 0x2d0 (0x48) 
	class UClass* DefaultEntryClass; // 0x318 (0x8)
	bool bHasPrioritizedWidgetFocus; // 0x320 (0x1)
	bool bShowFeatQuests; // 0x321 (0x1)
	bool bFeatShowNonVisibleObjectives; // 0x322 (0x1)
	unsigned char unreflected_323[0x5]; // 0x323 (0x5) 
	class UFortNotificationEntry* ActiveWidget; // 0x328 (0x8)
	struct TArray<class UFortNotificationEntry*> WidgetQueue; // 0x330 (0x10)
	class UVerticalBox* NotificationUpdatesBox; // 0x340 (0x8)
	struct TArray<struct FNotificationWidgetClass> NotificationClassPoolData; // 0x348 (0x10)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x358 (0x2)
	unsigned char padding_35a[0x6]; // 0x35a (0x6)

	/* Functions */

	// Function /Script/FortniteUI.FortGameEventNotifications.HandleNotificationUpdateFinished (Underlying native function: HandleNotificationUpdateFinished 0xa7c3458)
	void HandleNotificationUpdateFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortGameEventNotifications.HandleDisplayDynamicQuestUpdate (Underlying native function: HandleDisplayDynamicQuestUpdate 0xa7c3174)
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& DisplayStatusUpdate, bool& DisplayAnnouncementUpdate); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortGameEventNotifications.ActionFreedForNotifications (Underlying native function: ActionFreedForNotifications 0xa7c2b4c)
	void ActionFreedForNotifications(struct FName& ActionName); // (Final | Native | Protected)
};

