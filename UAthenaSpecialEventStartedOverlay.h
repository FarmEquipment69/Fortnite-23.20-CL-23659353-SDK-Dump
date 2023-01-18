// Class /Script/FortniteUI.AthenaSpecialEventStartedOverlay
// Size: 0x320
class UAthenaSpecialEventStartedOverlay : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class AFortPlayerStateAthena* AttachedPlayerState; // 0x310 (0x8)
	struct FFortPrioritizedWidgetData PrioritizedWidgetData; // 0x318 (0x2)
	unsigned char padding_31a[0x6]; // 0x31a (0x6)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpecialEventStartedOverlay.OnShowUrgentQuestMessage (Has no native function)
	void OnShowUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData, float& EventTimeRemaining); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventStartedOverlay.OnPrioitizedFinished (Has no native function)
	void OnPrioitizedFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventStartedOverlay.OnPrioitizedActivated (Has no native function)
	void OnPrioitizedActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpecialEventStartedOverlay.HandleShowUrgentQuestMessage (Underlying native function: HandleShowUrgentQuestMessage 0xa5319b0)
	void HandleShowUrgentQuestMessage(struct FUrgentQuestData& UrgentQuestData, float& EventTimeRemaining); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpecialEventStartedOverlay.HandleDisplayDynamicQuestUpdate (Underlying native function: HandleDisplayDynamicQuestUpdate 0xa530ba8)
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& DisplayStatusUpdate, bool& DisplayAnnouncementUpdate); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpecialEventStartedOverlay.GetOutroDelay (Underlying native function: GetOutroDelay 0xa530918)
	float GetOutroDelay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

