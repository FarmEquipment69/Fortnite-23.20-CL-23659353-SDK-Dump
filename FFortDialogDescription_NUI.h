// ScriptStruct /Script/FortniteGame.FortDialogDescription_NUI
// Size: 0x160
struct FFortDialogDescription_NUI
{
	struct FSlateBrush Icon; // 0x0 (0xc0)
	struct FText MessageHeader; // 0xc0 (0x18)
	struct FText MessageBody; // 0xd8 (0x18)
	struct TArray<struct FConfirmationDialogAction> ConfirmButtonInputActions; // 0xf0 (0x10)
	struct FName DeclineButtonInputAction; // 0x100 (0x4)
	unsigned char unreflected_104[0x4]; // 0x104 (0x4) 
	class UWidget* AdditionalContent; // 0x108 (0x8)
	class UWidget* LeftAdditionalContent; // 0x110 (0x8)
	float DisplayTime; // 0x118 (0x4)
	bool Dismissable; // 0x11c (0x1)
	bool Cancelable; // 0x11d (0x1)
	bool bCloseOnEsc; // 0x11e (0x1)
	bool bShouldWaitForLatentActionOnConfirmAction; // 0x11f (0x1)
	class UFortNotificationHandler* NotificationHandler; // 0x120 (0x8)
	class USoundBase* ShowSound; // 0x128 (0x8)
	unsigned char padding_130[0x30]; // 0x130 (0x30)
};

