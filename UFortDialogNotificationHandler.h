// Class /Script/FortniteGame.FortDialogNotificationHandler
// Size: 0x1e0
class UFortDialogNotificationHandler : public UFortNotificationHandler
{
	struct FMulticastInlineDelegate OnAccepted; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnDeclined; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnTimedOut; // 0x60 (0x10)
	struct FFortDialogDescription DialogDescription; // 0x70 (0x170)

	/* Functions */

	// Function /Script/FortniteGame.FortDialogNotificationHandler.Timeout (Underlying native function: Timeout 0xfb0c9c)
	void Timeout(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortDialogNotificationHandler.SetDialogDescription (Underlying native function: SetDialogDescription 0x8f7d9d0)
	void SetDialogDescription(struct FFortDialogDescription& InDialogDescription); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortDialogNotificationHandler.OnActionComplete__DelegateSignature (Has no native function)
	void OnActionCompleteDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortDialogNotificationHandler.Decline (Underlying native function: Decline 0x28b2a48)
	void Decline(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortDialogNotificationHandler.Accept (Underlying native function: Accept 0x14f9024)
	void Accept(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintEvent)
};

