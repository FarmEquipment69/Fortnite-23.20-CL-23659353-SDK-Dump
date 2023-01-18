// Class /Script/FortniteAI.FortBTTask_TriggerVOEvent
// Size: 0xa0
class UFortBTTask_TriggerVOEvent : public UBTTaskNode
{
	unsigned char bUseFeedbackBank; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct FString CustomEventName; // 0x78 (0x10)
	struct FString SelectedEvent; // 0x88 (0x10)
	class UFortFeedbackBank* FeedbackBank; // 0x98 (0x8)
};

