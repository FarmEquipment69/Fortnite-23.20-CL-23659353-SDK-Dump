// Class /Script/FortniteUI.EndOfMatchQuestEntryWidget
// Size: 0x2d0
class UEndOfMatchQuestEntryWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnEndOfMatchQuestIntroFinishedDelegate; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnEndOfMatchQuestMoveDownFinishedDelegate; // 0x2a0 (0x10)
	float MoveDownDuration; // 0x2b0 (0x4)
	unsigned char unreflected_2b4[0x4]; // 0x2b4 (0x4) 
	class UFortNotificationEntry_Quest* QuestNotification; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.EndOfMatchQuestEntryWidget.OnEndOfMatchQuestMoveDownFinished__DelegateSignature (Has no native function)
	void OnEndOfMatchQuestMoveDownFinishedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.EndOfMatchQuestEntryWidget.OnEndOfMatchQuestCreateFinished__DelegateSignature (Has no native function)
	void OnEndOfMatchQuestCreateFinishedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.EndOfMatchQuestEntryWidget.HandleNotificationDisplayed (Underlying native function: HandleNotificationDisplayed 0xa4e13ec)
	void HandleNotificationDisplayed(); // (Final | Native | Private)

	// Function /Script/FortniteUI.EndOfMatchQuestEntryWidget.HandleMoveDownFinished (Underlying native function: HandleMoveDownFinished 0xa4e1334)
	void HandleMoveDownFinished(); // (Final | Native | Protected | BlueprintCallable)
};

