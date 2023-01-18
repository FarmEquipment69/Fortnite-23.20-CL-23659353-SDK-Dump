// Class /Script/FortniteUI.BacchusQuickbarSlotBase
// Size: 0x4e0
class UBacchusQuickbarSlotBase : public UAthenaQuickBarSlot
{
	bool bHasOngoingUseAction; // 0x488 (0x1)
	bool bTapToLockEnabled; // 0x489 (0x1)
	bool bIsLocked; // 0x48a (0x1)
	bool bSupportsDragAndDrop; // 0x48b (0x1)
	bool bDragDetected; // 0x48c (0x1)
	bool bDragOpStarted; // 0x48d (0x1)
	bool bInteractionStarted; // 0x48e (0x1)
	unsigned char unreflected_48f[0x1]; // 0x48f (0x1) 
	struct FSlateColor TouchedColor; // 0x490 (0x14)
	struct FSlateColor UntouchedColor; // 0x4a4 (0x14)
	unsigned char unreflected_4b8[0x8]; // 0x4b8 (0x8) 
	class UImage* SelectionHighlight; // 0x4c0 (0x8)
	class UImage* LockIcon; // 0x4c8 (0x8)
	unsigned char padding_4d0[0x10]; // 0x4d0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.BacchusQuickbarSlotBase.StopUseSlot (Underlying native function: StopUseSlot 0xa5a4694)
	void StopUseSlot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusQuickbarSlotBase.StartOngoingUse (Has no native function)
	void StartOngoingUse(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusQuickbarSlotBase.SlotSelected (Underlying native function: SlotSelected 0xa5a4614)
	void SlotSelected(bool& bStopUseImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusQuickbarSlotBase.ResetSlot (Underlying native function: ResetSlot 0xa5a4130)
	void ResetSlot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.BacchusQuickbarSlotBase.EndInteraction (Has no native function)
	void EndInteraction(); // (Event | Public | BlueprintEvent)
};

