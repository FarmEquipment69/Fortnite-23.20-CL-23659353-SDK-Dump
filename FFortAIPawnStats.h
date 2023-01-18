// ScriptStruct /Script/FortniteGame.FortAIPawnStats
// Size: 0x118
struct FFortAIPawnStats : FFortPawnStats
{
	int ScoreValue; // 0xc0 (0x4)
	float DormantSightRadius; // 0xc4 (0x4)
	float DormantHearingThreshold; // 0xc8 (0x4)
	bool bDormantCanHearHostile; // 0xcc (0x1)
	bool bDormantCanHearNeutral; // 0xcd (0x1)
	bool bDormantCanHearFriendly; // 0xce (0x1)
	unsigned char unreflected_cf[0x1]; // 0xcf (0x1) 
	float DormantPeripheralVisionAngle; // 0xd0 (0x4)
	float AlertSightRadius; // 0xd4 (0x4)
	float AlertHearingThreshold; // 0xd8 (0x4)
	bool bAlertCanHearHostile; // 0xdc (0x1)
	bool bAlertCanHearNeutral; // 0xdd (0x1)
	bool bAlertCanHearFriendly; // 0xde (0x1)
	unsigned char unreflected_df[0x1]; // 0xdf (0x1) 
	float AlertPeripheralVisionAngle; // 0xe0 (0x4)
	float AutoSuccessRangeFromLastSeenLocation; // 0xe4 (0x4)
	class UCurveTable* HealthScalingTable; // 0xe8 (0x8)
	struct FName HealthScalingTableRow; // 0xf0 (0x4)
	unsigned char unreflected_f4[0x4]; // 0xf4 (0x4) 
	class UCurveTable* ControlResistanceScalingTable; // 0xf8 (0x8)
	struct FName ControlResistanceScalingTableRow; // 0x100 (0x4)
	unsigned char unreflected_104[0x4]; // 0x104 (0x4) 
	class UCurveTable* DifficultyRatingTable; // 0x108 (0x8)
	struct FName DifficultyRatingTableRow; // 0x110 (0x4)
	unsigned char padding_114[0x4]; // 0x114 (0x4)
};

