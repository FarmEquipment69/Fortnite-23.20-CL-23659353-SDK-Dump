// Class /Script/LandscapePatch.LandscapePatchManager
// Size: 0x300
class ALandscapePatchManager : public ALandscapeBlueprintBrushBase
{
	struct TArray<struct TWeakObjectPtr<class ULandscapePatchComponent>> PatchComponents; // 0x288 (0x10)
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	struct FTransform HeightmapCoordsToWorld; // 0x2a0 (0x60)
};

