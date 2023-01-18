// Class /Script/FortniteUI.FortUIMessagesPageBase
// Size: 0x508
class UFortUIMessagesPageBase : public UCommonActivatablePanelLegacy
{
	int MaximumMessagesShown; // 0x4e0 (0x4)
	unsigned char unreflected_4e4[0x4]; // 0x4e4 (0x4) 
	class UCommonListView* MessagesList; // 0x4e8 (0x8)
	unsigned char unreflected_4f0[0x8]; // 0x4f0 (0x8) 
	struct TArray<class UFortUINotification*> MessagesShown; // 0x4f8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortUIMessagesPageBase.OnNotificationCleared (Underlying native function: OnNotificationCleared 0xa848bc4)
	void OnNotificationCleared(class UFortUINotification*& ClearedMessage); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIMessagesPageBase.OnMessageAvailable (Underlying native function: OnMessageAvailable 0xa846adc)
	void OnMessageAvailable(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUIMessagesPageBase.FillMessagesList (Underlying native function: FillMessagesList 0xa846adc)
	void FillMessagesList(); // (Final | Native | Public | BlueprintCallable)
};

