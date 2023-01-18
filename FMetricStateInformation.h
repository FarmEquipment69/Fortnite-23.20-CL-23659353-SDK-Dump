// ScriptStruct /Script/FortniteGame.MetricStateInformation
// Size: 0x30
struct FMetricStateInformation
{
	struct FString Name; // 0x0 (0x10)
	struct FString Description; // 0x10 (0x10)
	enum EFortBudgetCategory category; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int Cost; // 0x24 (0x4)
	int Budget; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

