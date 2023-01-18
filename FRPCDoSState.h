// ScriptStruct /Script/Engine.RPCDoSState
// Size: 0x48
struct FRPCDoSState
{
	bool bLogEscalate; // 0x8 (0x1)
	bool bSendEscalateAnalytics; // 0x9 (0x1)
	bool bKickPlayer; // 0xa (0x1)
	bool bTrackRecentRPCs; // 0xb (0x1)
	int16_t EscalateQuotaRPCsPerFrame; // 0xc (0x2)
	int16_t EscalateTimeQuotaMSPerFrame; // 0xe (0x2)
	int16_t EscalateQuotaRPCsPerPeriod; // 0x10 (0x2)
	int16_t EscalateTimeQuotaMSPerPeriod; // 0x12 (0x2)
	int8_t EscalateQuotaTimePeriod; // 0x14 (0x1)
	int8_t EscalationCountTolerance; // 0x15 (0x1)
	int16_t EscalationTimeToleranceMS; // 0x16 (0x2)
	int16_t RPCRepeatLimitPerPeriod; // 0x18 (0x2)
	int16_t RPCRepeatLimitMSPerPeriod; // 0x1a (0x2)
	int8_t RPCRepeatLimitTimePeriod; // 0x1c (0x1)
	unsigned char unreflected_1d[0x1]; // 0x1d (0x1) 
	int16_t CooloffTime; // 0x1e (0x2)
	int16_t AutoEscalateTime; // 0x20 (0x2)
	unsigned char padding_22[0x26]; // 0x22 (0x26)
};

