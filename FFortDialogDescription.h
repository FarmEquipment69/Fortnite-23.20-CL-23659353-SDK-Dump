// ScriptStruct /Script/FortniteGame.FortDialogDescription
// Size: 0x170
struct FFortDialogDescription
{
	struct FSlateBrush Icon; // 0x0 (0xc0)
	struct FText MessageHeader; // 0xc0 (0x18)
	struct FText MessageBody; // 0xd8 (0x18)
	struct FText AcceptButtonText; // 0xf0 (0x18)
	struct FText IgnoreButtonText; // 0x108 (0x18)
	struct FText DismissButtonText; // 0x120 (0x18)
	float DisplayTime; // 0x138 (0x4)
	unsigned char unreflected_13c[0x4]; // 0x13c (0x4) 
	class UUserWidget* AdditionalContent; // 0x140 (0x8)
	enum EFortDialogFeedbackType FeedBackType; // 0x148 (0x1)
	bool Dismissable; // 0x149 (0x1)
	unsigned char unreflected_14a[0x6]; // 0x14a (0x6) 
	class UFortNotificationHandler* NotificationHandler; // 0x150 (0x8)
	unsigned char padding_158[0x18]; // 0x158 (0x18)
};

