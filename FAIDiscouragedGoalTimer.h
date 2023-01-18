// ScriptStruct /Script/FortniteAI.AIDiscouragedGoalTimer
// Size: 0x38
struct FAIDiscouragedGoalTimer
{
	struct FFortAIGoalInfo DiscouragedGoalInfo; // 0x0 (0x28)
	double ExpirationTime; // 0x28 (0x8)
	uint32_t NumberOfTimesMarkedForDiscouragement; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

