// ScriptStruct /Script/RidingCodeRuntime.RidingAnalyticsData_Stopped
// Size: 0x90
struct FRidingAnalyticsData_Stopped : FRidingAnalyticsData_Base
{
	float TotalRidingTime; // 0x58 (0x4)
	float RiderStartHealth; // 0x5c (0x4)
	float RiderStartShield; // 0x60 (0x4)
	float RiderEndHealth; // 0x64 (0x4)
	float RiderEndShield; // 0x68 (0x4)
	float TotalDistanceTraveled; // 0x6c (0x4)
	int JumpUseCount; // 0x70 (0x4)
	int AbilityUseCount; // 0x74 (0x4)
	float RiderDamageDealt; // 0x78 (0x4)
	float RiderDamageTaken; // 0x7c (0x4)
	float RiderHealingReceived; // 0x80 (0x4)
	float RiderShieldGained; // 0x84 (0x4)
	unsigned char bRidableEliminated; // 0x88 (0x1)
	unsigned char bRidableExhausted; // 0x88 (0x1)
	unsigned char padding_89[0x7]; // 0x89 (0x7)
};

