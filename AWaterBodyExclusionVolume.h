// Class /Script/Water.WaterBodyExclusionVolume
// Size: 0x2e8
class AWaterBodyExclusionVolume : public APhysicsVolume
{
	bool bExcludeAllOverlappingWaterBodies; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x7]; // 0x2d1 (0x7) 
	struct TArray<class AWaterBody*> WaterBodiesToExclude; // 0x2d8 (0x10)
};

