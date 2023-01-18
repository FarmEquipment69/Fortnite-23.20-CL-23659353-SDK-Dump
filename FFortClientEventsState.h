// ScriptStruct /Script/FortniteGame.FortClientEventsState
// Size: 0x1f0
struct FFortClientEventsState : FFortRotationalContentEventsState
{
	int SeasonNumber; // 0x140 (0x4)
	unsigned char unreflected_144[0x4]; // 0x144 (0x4) 
	struct FString SeasonTemplateId; // 0x148 (0x10)
	float MatchXpBonusPoints; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct FDateTime* SeasonBegin; // 0x160 (0x8)
	struct FDateTime* SeasonEnd; // 0x168 (0x8)
	struct FDateTime* SeasonDisplayedEnd; // 0x170 (0x8)
	struct FDateTime* WeeklyStoreEnd; // 0x178 (0x8)
	struct FDateTime* DailyStoreEnd; // 0x180 (0x8)
	struct FDateTime* StwDailyStoreEnd; // 0x188 (0x8)
	struct FDateTime* StwEventStoreEnd; // 0x190 (0x8)
	struct FDateTime* StwWeeklyStoreEnd; // 0x198 (0x8)
	struct TMap<struct FName, struct FDateTime*> SectionStoreEnds; // 0x1a0 (0x50)
};

