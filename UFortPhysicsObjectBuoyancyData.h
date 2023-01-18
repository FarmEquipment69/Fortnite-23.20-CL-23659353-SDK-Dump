// Class /Script/FortniteGame.FortPhysicsObjectBuoyancyData
// Size: 0xd0
class UFortPhysicsObjectBuoyancyData : public UDataAsset
{
	float DefaultPontoonRadius; // 0x30 (0x4)
	bool bSleepInsteadOfSink; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float MinTimeInWaterToSink; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FBuoyancyData BuoyancyData; // 0x40 (0x90)
};

