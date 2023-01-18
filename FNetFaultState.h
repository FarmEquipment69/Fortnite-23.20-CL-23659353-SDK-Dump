// ScriptStruct /Script/NetCore.NetFaultState
// Size: 0x40
struct FNetFaultState : FEscalationState
{
	bool bCloseConnection; // 0x30 (0x1)
	unsigned char unreflected_31[0x1]; // 0x31 (0x1) 
	int16_t EscalateQuotaFaultsPerPeriod; // 0x32 (0x2)
	int8_t EscalateQuotaFaultPercentPerPeriod; // 0x34 (0x1)
	unsigned char unreflected_35[0x1]; // 0x35 (0x1) 
	int16_t DescalateQuotaFaultsPerPeriod; // 0x36 (0x2)
	int8_t DescalateQuotaFaultPercentPerPeriod; // 0x38 (0x1)
	int8_t EscalateQuotaTimePeriod; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

