// ScriptStruct /Script/NetCore.EscalationState
// Size: 0x30
struct FEscalationState : FStateStruct
{
	bool bLogEscalate; // 0x18 (0x1)
	bool bDormant; // 0x19 (0x1)
	int16_t CooloffTime; // 0x1a (0x2)
	int16_t AutoEscalateTime; // 0x1c (0x2)
	int8_t HighestTimePeriod; // 0x1e (0x1)
	unsigned char unreflected_1f[0x1]; // 0x1f (0x1) 
	struct TArray<int8_t> AllTimePeriods; // 0x20 (0x10)
};

