// ScriptStruct /Script/FortniteGame.FortFeedbackEvent
// Size: 0x28
struct FFortFeedbackEvent
{
	class AFortPawn* Instigator; // 0x0 (0x8)
	class AFortPawn* Recipient; // 0x8 (0x8)
	struct FFortFeedbackHandle Handle; // 0x10 (0x10)
	float Delay; // 0x20 (0x4)
	bool bOverriddenQueuing; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

