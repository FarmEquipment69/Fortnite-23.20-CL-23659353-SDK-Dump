// Class /Script/XpEverywhereUI.XpEverywhereRewardWidget
// Size: 0x360
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x48]; // 0x2d0 (0x48) 
	class UClass* DefaultEntryClass; // 0x318 (0x8)
	bool bHasPrioritizedWidgetFocus; // 0x320 (0x1)
	unsigned char unreflected_321[0x7]; // 0x321 (0x7) 
	class UFortNotificationEntry* ActiveWidget; // 0x328 (0x8)
	struct TArray<class UFortNotificationEntry*> WidgetQueue; // 0x330 (0x10)
	class UVerticalBox* NotificationUpdatesBox; // 0x340 (0x8)
	struct TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData; // 0x348 (0x10)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x358 (0x2)
	unsigned char padding_35a[0x6]; // 0x35a (0x6)

	/* Functions */

	// Function /Script/XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished (Underlying native function: HandleNotificationUpdateFinished 0x77ec248)
	void HandleNotificationUpdateFinished(); // (Final | Native | Protected)
};

