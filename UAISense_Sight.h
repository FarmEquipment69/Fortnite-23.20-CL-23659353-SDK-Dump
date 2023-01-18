// Class /Script/AIModule.AISense_Sight
// Size: 0x1b0
class UAISense_Sight : public UAISense
{
	unsigned char unreflected_80[0xd8]; // 0x80 (0xd8) 
	int MaxTracesPerTick; // 0x158 (0x4)
	int MaxAsyncTracesPerTick; // 0x15c (0x4)
	int MinQueriesPerTimeSliceCheck; // 0x160 (0x4)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	double MaxTimeSlicePerTick; // 0x168 (0x8)
	float HighImportanceQueryDistanceThreshold; // 0x170 (0x4)
	unsigned char unreflected_174[0x4]; // 0x174 (0x4) 
	float MaxQueryImportance; // 0x178 (0x4)
	float SightLimitQueryImportance; // 0x17c (0x4)
	float PendingQueriesBudgetReductionRatio; // 0x180 (0x4)
	bool bUseAsynchronousTraceForDefaultSightQueries; // 0x184 (0x1)
	unsigned char padding_185[0x2b]; // 0x185 (0x2b)
};

