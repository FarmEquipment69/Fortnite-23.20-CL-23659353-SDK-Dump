// ScriptStruct /Script/FortniteAI.FortWorldConditionTimeOfDay
// Size: 0x20
struct FFortWorldConditionTimeOfDay : FWorldConditionCommonBase
{
	struct FWorldConditionContextDataRef* ActorContextRef; // 0x10 (0x8)
	int ValidTimesOfDay; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

