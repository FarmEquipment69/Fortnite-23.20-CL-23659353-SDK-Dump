// ScriptStruct /Script/FortniteGame.FortFeedbackEventData
// Size: 0x30
struct FFortFeedbackEventData
{
	struct FFortFeedbackHandle Handle; // 0x0 (0x10)
	float ChanceToPlay; // 0x10 (0x4)
	float MinReplayTime; // 0x14 (0x4)
	float MinReplayTimeForSpeaker; // 0x18 (0x4)
	float MaxWitnessDistance; // 0x1c (0x4)
	bool bInterruptCurrentLine; // 0x20 (0x1)
	bool bCanBeInterrupted; // 0x21 (0x1)
	bool bCanQue; // 0x22 (0x1)
	struct TEnumAsByte<EFortFeedbackBroadcastFilter> MultiplayerBroadcastFilter; // 0x23 (0x1)
	struct TEnumAsByte<EFortFeedbackSelectionMethod> ContextSelectionMethod; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	float FeedbackDelay; // 0x28 (0x4)
	float TimeLastPlayed; // 0x2c (0x4)
};

