// ScriptStruct /Script/FortniteGame.ControlPointInstanceData
// Size: 0x50
struct FControlPointInstanceData
{
	class AAthenaCapturePoint* ControlPoint; // 0x0 (0x8)
	enum EControlPointState ControlPointState; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int SpawnDataIdx; // 0xc (0x4)
	float SpawnTime; // 0x10 (0x4)
	float EnableTime; // 0x14 (0x4)
	float DisableTime; // 0x18 (0x4)
	unsigned char PrevOwningTeam; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	class AFortTeamInfoAthena* CachedOwningTeamInfo; // 0x20 (0x8)
	float PointAccrualTime; // 0x28 (0x4)
	float PointsRemainder; // 0x2c (0x4)
	float BonusPointAccrualTime; // 0x30 (0x4)
	float BonusPointsRemainder; // 0x34 (0x4)
	float CachedPointAccrualValue; // 0x38 (0x4)
	float CachedBonusPointAccrualValue; // 0x3c (0x4)
	bool bPointFinished; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int CachedSafeZonePhaseWhenToSpawn; // 0x44 (0x4)
	bool bIgnoreForOrderMessaging; // 0x48 (0x1)
	bool bAlwaysInPlay; // 0x49 (0x1)
	unsigned char unreflected_4a[0x2]; // 0x4a (0x2) 
	float TimeOfShutdown; // 0x4c (0x4)
};

